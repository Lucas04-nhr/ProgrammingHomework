
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：对一个4×5矩阵(int型) (如图1)。要求写一个函数peakpoint，
其功能是判断一个点是否是峰点。所谓峰点是该点在它所在行和所在列是最大的。
输出结果见图：样张.JPG
-------------------------------------------------------*/
#include<iostream>
using namespace std;
const int ROW=4;  //行数
const int COL=5;  //列数

/**********Program**********/
  /*int peakpoint(int iMatrix[],int &m,int &n)
  {
	  int max=iMatrix[m][n];
  }*/

bool peakpoint (int *p,int i,int j)
{
	int k,point=*(p+i*COL+j);
	for(k=0;k<COL;k++)
	{
		if(*(p+i*COL+k)>point)
			return false;
	}
	for(k=0;k<ROW;k++)
	{
		if(*(p+k*COL+j)>point)
			return false;
	}
	return true;

}

// 一维数组的参数要单指针接收
// 二维数组的参数要双指针接收


/**********  End  **********/


void main(void)
{
        int s[ROW][COL] = {{7,2,9,4,6},{5,6,1,8,3},{9,8,6,3,9},{5,1,9,7,2}};
       
        int i,j;
     
        for(i=0;i<ROW;i++)
                for(j=0;j<COL;j++)
                        if(peakpoint(&s[0][0],i,j)) {
                                cout<<"峰点的坐标之一=("<<i+1<<','<<j+1<<')'<<endl;
                                cout<<"峰点的坐标之值="<<s[i][j]<<endl;
                                return;
                        }
}