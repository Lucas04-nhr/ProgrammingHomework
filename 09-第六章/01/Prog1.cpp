
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：

定义递归函数实现下列Ackman函数：
如图所示。
其中m、n为正整数。设计程序求Acm(2,1)，Acm(3,2)。
要求与输出样张一样才能得到满分。
-------------------------------------------------------*/

#include<iostream>
using namespace std;

/**********Program**********/
double Acm(double m, double n)
{
	double dResult=0;
	if(m==0)
		dResult=n+1;
	else if(n==0)
		dResult=Acm(m-1,1);
	else
		dResult=Acm(m-1,Acm(m,n-1));
	return dResult;

}
/**********  End  **********/

int main(){
        cout<<"Acm(2,1)="<<Acm(2,1)<<endl;
        cout<<"Acm(3,2)="<<Acm(3,2)<<endl;
        return 0;
}
