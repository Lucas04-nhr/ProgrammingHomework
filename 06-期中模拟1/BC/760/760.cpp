
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：

求Y=1-1/2+1/3-1/4+…+1/n

输出结果见图：样张.JPG

要求与输出样张一样才能得到满分。
-------------------------------------------------------*/
#include <iostream>
using namespace std;
int main( )
{
        

/**********Program**********/
	int n;
	double sum=0;
	cout<<"输入n值";
	cin>>n;

		for(int i=1;i<=n;i=i+2)
			sum+=(1./i);
		for(int i=2;i<=n;i=i+2)
			sum-=(1./i);

		cout<<"数列的和"<<sum<<endl;
	

/**********  End  **********/
        return 0;
}


