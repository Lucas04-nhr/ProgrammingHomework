
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：
定义一个人民币类，有三个均为整型的数据成员，分别表示人民币的元、角、分，要求：
(1)        在类外定义带一个参数（为实数，表示人民币）的构造函数；
(2)        定义带一个参数Category成员函数Show，其功能是：
         当Category=0时，返回人民币的实际数（以整数形式返回）；
         当Category=1时，返回人民币的元数；
         当Category=2时，返回人民币的角数；
         当Category=3时，返回人民币的分数；
提示：注意实数在参数传递或运算时的误差。例如：
实参23.45传给形参时，可能会变成23.449999999。
5.0/2的结果可能是2.4999999.

程序运行结果如下：
请输入一个人民币：22.55
22.55=22元5角5分

-------------------------------------------------------*/

#include <iostream>
using namespace std;
/**********Program**********/
class Renminbi{
private:
        int Yuan ,Jiao,Fen;
public:
        Renminbi(double Money);
        int show(int Category);
};

Renminbi::Renminbi(double Money = 0){
        double a,b,c,d,e,f;
        Yuan=int(Money);
        Jiao=int((Money-Yuan)*10);
        Fen=it((Money-Yuan-(double)Jiao/10+0.005)*100);
}

int Renminbi::show(int Category){
        int RMB;
        switch(Category){
        case 0:
                RMB=Yuan*100+Jiao*10+Fen;
                break;
        case 1:
                RMB=Yuan;
                break;
        case 2:
                RMB=Jiao;
                break;
        case 3:
                RMB=Fen;
                break;
        }
        return RMB;
}
/**********  End  **********/


int main(void) {
        double Money;
        cout<<"请输入一个人民币：";
        cin>>Money;
        Renminbi a(Money);
        cout<<a.show(0)/100.0<<"=";
        cout<<a.show(1)<<"元";
        cout<<a.show(2)<<"角";
        cout<<a.show(3)<<"分"<<endl;
        return 0;
}
