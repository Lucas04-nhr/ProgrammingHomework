
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：定义一个函数min，求n个数中的平均值、最小数和其下标，
并在主函数中打印平均值、最小数和下标。格式：
int min(int s[], int n,double &aver)
注意：如有多个最小值，以最后一个为准。
输出结果见图：样张.JPG
-------------------------------------------------------*/
#include <iostream>
using namespace std;
/**********Program**********/
int min(int s[], int n,double &aver)
{
	double sum=0;
	for(int i=0;i<n;i++)
		sum+=s[i];
	aver=sum/n;

	int iNumber=0;
	int min=s[0];
	for(int j=1;j<n;j++)
	{
		if(min>=s[j])
		{
			min=s[j];
			iNumber=j;
		}
	}
	return iNumber;
}
/**********  End  **********/

void main(void)
{
        int pos;
        double aver;
        int s[10]={34,12,83,56,29,93,56,12,88,72};
                int s1[3]={12,83,56};
                int n=10;
                int i;
                pos=min(s,n,aver);
        cout<<n<<"个数如下："<<endl;
                for(i=0;i<n;i++ )
                        cout<<s[i]<<" ";
                cout<<"\n平均值="<<aver<<endl;
                cout<<"最小值="<<s[pos]<<endl;
        cout<<"位置="<<pos+1<<endl;
                n=3;
                pos=min(s1,n,aver);
                cout<<n<<"个数如下："<<endl;
                for(i=0;i<n;i++ )
                        cout<<s1[i]<<" ";
                cout<<"\n平均值="<<aver<<endl;
                cout<<"最小值="<<s1[pos]<<endl;
        cout<<"位置="<<pos+1<<endl;
}
