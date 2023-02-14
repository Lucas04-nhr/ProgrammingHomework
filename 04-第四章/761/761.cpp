
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：
编写一个简单程序，要求： 
1）用循环实现从键盘上输入10个整数
2）求出最大值、最小值及平均值并输出。

输出结果见图：样张.JPG

要求与输出样张一样才能得到满分。
-------------------------------------------------------*/
#include <iostream>
using namespace std;
int main(void)
{
   
/**********Program**********/
	int a[10];
	int max,min,sum,i;
	double average;
	cout<<"请输入10个整数";
	cin>>a[1];
	max=a[1];
	min=a[1];
	sum=a[1];
	for(i=1;i<=9;i++)
	{
		cin>>a[i];
		if(max<=a[i])
			max=a[i];
		if(min>=a[i])
			min=a[i];
		sum+=a[i];
	}
	average=double(sum)/10;
	cout<<"最大值"<<max<<endl;
	cout<<"最小值"<<min<<endl;
	cout<<"平均值"<<average<<endl;
/**********  End  **********/
       return 0;
}

