
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：

利用反正切展开公式计算arctg(x) 的近似值，要求误差10-5，公式如图：

注意：最后结果的输出精度为小数部分4位有效数字。
-------------------------------------------------------*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
const double e=1e-5;  //误差值
int main(){

        double x;
        cout<<"请输入正切值：(<=1,>=-1)"<<endl;
        cin>>x;

/**********Program**********/
		double sign=-1;
		double ans,re;
		ans=atan(x);
		double fl=9999999999;
		re=x;
		for(int i=1;double (fabs(fl))>=e;i++)
		{
			fl=(pow(sign,i)*pow(x,2*i+1))/(2*i+1);
			re+=fl;
		}
		cout<<"arctg("<<x<<")="<<fixed<<setprecision(4)<<re<<endl;

/**********  End  **********/

        
        return 0;
}
