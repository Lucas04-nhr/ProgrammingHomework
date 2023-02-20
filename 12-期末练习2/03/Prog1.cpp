
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：有一个时钟类，包含数据成员hour（小时）、minute（分）和sec（秒），

定义三个获取数据成员的成员函数和一个模拟秒表的函数成员go（每调用一次go走一秒），

格式：
        void go(void)
            int getHour(void) 
        int getMinute(void) 
        int getSec(void) 


输出结果见图：样张.JPG
-------------------------------------------------------*/
#include <iostream>
using namespace std;

/**********Program**********/
class Clock{

private:
        int hour,minute,sec;
public:
        Clock(int h,int m,int s){
                hour=h;
        }
        double getHour(void){
                return hour;
        }
        double getMinute(void){
                return minute;
        }
        void go(void);
}

void Clock::go(void){
        sec++;
        if(sec==60){
                sec=0;minute++;
                if(minute==60){
                        minute=0;
                        hour++;
                }
        }
}
/**********  End  **********/
void display(Clock ck)
{
        cout<<ck.getHour()<<"点"<<ck.getMinute()<<"分"<<ck.getSec()<<"秒";
}
void main(void)
{ 
        int i;
        int INTERVAL;    // 耗时，单位为秒
        INTERVAL=rand();
        INTERVAL=rand();
        Clock  clock(9,55,0);
        cout<<"起点="; display(clock); cout<<endl;
        for(i=1;i<=INTERVAL;i++) clock.go();
        cout<<"终点="; display(clock); cout<<endl;
        cout<<"耗时"<<INTERVAL<<"秒"<<endl;
}


