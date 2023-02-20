
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：有一个Clock类，包含数据成员hour（小时）、minute（分）和sec（秒），
定义三个获取数据成员的成员函数、一个设置时分秒的成员函数
和一个计算两个时间差的函数成员go（单位为秒,非负数），
格式：
        int  go(Clock c);//计算两个时间差
        int getHour(); 
        int getMinute();
        int getSec();
        void set(int h,int m,int s);// 设置时分秒
输出结果见图：样张.JPG
-------------------------------------------------------*/
#include <ctime>
#include <iostream>
#include <cmath>
using namespace std;

/**********Program**********/
class Clock
{
        private:
                int hour;
                int minute;
                int sec;
        public:
                Clock(){};
                Clock(int a,int b,int c);
                ~Clock(){};
                // Clock(Clock&){};
                int  go(Clock c);//计算两个时间差
                int getHour(); 
                int getMinute();
                int getSec();
                void set(int h,int m,int s);// 设置时分秒
};

Clock::Clock(int a,int b,int c)
{
        hour=a;
        minute=b;
        sec=c;
}

void Clock::set(int h,int m,int s)
{
        hour=h;
        minute=m;
        sec=s;
}

int Clock::getHour()
{
        return hour;
}

int Clock::getMinute()
{
        return minute;
}

int Clock::getSec()
{
        return sec;
}

int  Clock::go(Clock c)//计算两个时间差
{
        int iHour=c.getHour();
        int iMinute=c.getMinute();
        int iSec=c.getSec();
        int iResult=3600*(iHour-9)+60*(iMinute-55)+(iSec-0);
        return iResult;
}
/**********  End  **********/
void display(Clock ck)
{
        cout<<ck.getHour()<<"点"<<ck.getMinute()<<"分"<<ck.getSec()<<"秒";
}
int main(void)
{ 
        Clock  clock(9,55,0),clock1;
        cout<<"起点="; display(clock); cout<<endl;
        clock1.set(10,56,0);
                cout<<"终点="; display(clock1); cout<<endl;
        cout<<"耗时"<<clock.go(clock1)<<"秒"<<endl;
}