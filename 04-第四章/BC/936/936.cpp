
/*-------------------------------------------------------
��������ơ�
---------------------------------------------------------

��Ŀ��

���÷�����չ����ʽ����arctg(x) �Ľ���ֵ��Ҫ�����10-5����ʽ��ͼ��

ע�⣺��������������ΪС������4λ��Ч���֡�
-------------------------------------------------------*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
const double e=1e-5;  //���ֵ
int main(){

        double x;
        cout<<"����������ֵ��(<=1,>=-1)"<<endl;
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
