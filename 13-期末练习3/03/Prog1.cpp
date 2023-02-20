
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：编写一个戏剧类，类说明如下，请实现该类。
运行结果见样张。

输出示例语句如下，请复制粘贴使用

booking函数     "余票("，")不足，购买失败"
~opera()函数    "的票房如下："
-------------------------------------------------------*/
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
class opera
{
        char name[30];//戏剧名
        //有4类座位，包厢/一等座/二等座/三等座，编号为0-3
        int ts[4];        // ts[0]：包厢的总数，ts[1]：一等座的总座位数
                        //ts[2]：二等座的总座位数，ts[3]：三等座的总座位数
        int es[4];// es[0]：空包厢的数量，es[1]：一等座的空闲座位数
                        //es[2]：二等座的空闲座位数，es[3]：三等座的空闲座位数
        int ps[4];// ps[0]：包厢的票价，ps[1]：一等座的票价
                        //ps[2]：二等座的票价，，ps[3]：三等座的票价
        int income;//总收入
public:
        opera();
        void set_name(char *);//更改剧名
        void set_ps(int []);//更改座位价格
        void booking(int,int);//售票，如果余票小于订票数，
                                //终止该次售票，并输出购票失败提示信息
        void refund(int,int);//退票，不收手续费
        void print();
        ~opera();     //戏剧下线时统计戏剧的票房
};
/**********Program**********/
opera::opera(){
        strcpy(name,"未命名");
        int s[]={20,100,240,300}
        for(int i=0;i<4;i++){
                ts[i]=s[i];
                es[i]=ts[i];
                ps[i]=0;
        }
        income=0;
}

void opera::set_name(char* n){
        strcpy(name,n);
}

void opera::set_ps(int p[]){
        for(int i=0;i<4;i++)
                ps[i]=p[i];
}

void opera::booking(int g,int n){
        if(es[g]>=n){
                es[g]-=n;
                income+=n*ps[g];
        }
        else
                cout<<"余票("<<es[g]<<")不足，购买失败"<<endl;
}

void opera::refund(int g,int n){
        es[g]+=n;
        icome-=ps[g]*n;
}

opera::~opera(){
        cout<<name<<"的票房如下："<<endl;
        cout<<setw(20)<<"包厢"<<setw(10)<<"一等座"
            <<setw(10)<<"二等座"<<setw(10)<<"三等座"<<endl;
            cout<<setw(10)<<"售出";
    for(int i=0;i<4;i++)
        cout<<setw(10)<<ts[i]-es[i];
    cout<<endl;    
}

/**********  End  **********/
void opera::print()
{
        cout<<"---------------戏曲名："<<setw(30)<<name
                <<"---------------"<<endl;

        cout<<setw(20)<<"包厢"<<setw(10)<<"一等座"
                <<setw(10)<<"二等座"<<setw(10)<<"三等座"<<endl;        
        
        int i;
        cout<<setw(10)<<"票价";
        for( i=0;i<4;i++) cout<<setw(10)<<ps[i];
        cout<<endl;

        cout<<setw(10)<<"总数";
        for(i=0;i<4;i++) cout<<setw(10)<<ts[i];
        cout<<endl;

        cout<<setw(10)<<"可售";
        for( i=0;i<4;i++) cout<<setw(10)<<es[i];
        cout<<endl;

        cout<<"---------------总收入："<<setw(30)<<income
                <<"---------------"<<endl;
}
int main()
{

        opera p1;
        p1.print();

        p1.set_name("群英会");//void set_name(char *),更改剧名

        int p[]={700,380,180,80};
        p1.set_ps(p);//void set_ps(int []),更改座位价格

        p1.booking(0,8);//购买8张包厢票
        p1.booking(1,7);//购买7张一等票
        p1.booking(3,15);//购买15张3等票
        p1.print();

        p1.booking(0,13);//购买13张包厢票
        p1.booking(2,3);//购买3张二等票
        p1.refund(3,2);//退2张3等票
        p1.print();

        return 0;
}