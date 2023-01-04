

/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：打印杨辉三角形（10行）
要求：使用二维数组来完成计算
数组元素的输出宽度为4，使用setw函数来实现宽度控制

输出请参看样张。

-------------------------------------------------------*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
        int yang[10][10];

        /**********Program**********/
		yang[0][0]=1;
		yang[1][0]=1;
		yang[1][1]=1;
		for(int i=2;i<10;i++)
		{
			for(int j=0;j<=i;j++)
			{
				if(j==0||j==i)
				{
					yang[i][j]=1;
				}
				else
				{
					yang[i][j]=yang[i-1][j-1]+yang[i-1][j];
				}
			}
		}

		cout<<"*调整前*"<<endl;
		for(int i=0;i<10;i++)
		{
			for(int j=0;j<=i;j++)
			{
				cout<<setw(4)<<yang[i][j];
			}
			cout<<endl;
		}

		int flag;
		cout<<"*调整后*"<<endl;
		for(int i=0;i<10;i++)
		{
			for(int k=0;k<=18-2*i;k++)
				cout<<" ";
			for(int j=0;j<=i;j++)
				cout<<setw(4)<<yang[i][j];
			cout<<endl;
		}

    /**********  End  **********/
    return 0; 
}