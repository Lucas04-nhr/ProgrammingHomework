
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：问题描述见图片 "问题.jpg"



运行结果见样张。

-------------------------------------------------------*/
#include <iostream>
using namespace std;
int main()
{
        int ei;
        cout<<"请输入要查询的等式编号ei（ei>=1):";
        cin>>ei;
        /**********Program**********/
		int x,y,z;
		int c[10]={0};
		int s=0,flag=0;
		int tx=0,ty=0;
		int i,r;
		for(x=102;x<=493;x++)
			for(y=x+1;y<=987;y++)
			{//1.计算z，如果z不符合则穷举下一个x值
				z=x+y;
				if(z>987)
					break;
				//2.提取x,y,z的位置数，记录在数组c中
				//定义数组t,令t[0]=x,t[1]=y,t[2]=z;
				int t[3]={x,y,z};
				//提取并记录位置数，如果数字n被使用，则c[n]=1;
				for(i=0;i<3;i++)
				{
					do
					{
						c[t[i]%10]=1;
						t[i]/=10;
					}while(t[i]!=0);
				}
				//3.判断是否使用了9个数
				//判断数组c中所有元素之和r,同时数组c清零
				r=0;
				for(i=0;i<10;i++)
					r+=c[i],c[i]=0;
				//如果和为9，输出x+y=z
				if(r==9)
				{
					s++;
					if(s==ei)
						tx=x,ty=y;
				}
			}//end for
			cout<<"一共可以生成"<<s<<"个满足条件的等式"<<endl;
			if(ei<=s)
				cout<<"第"<<ei<<"个等式"<<tx<<"+"<<ty<<"="<<tx+ty<<endl;
			else
				cout<<"第"<<ei<<"个等式不存在"<<endl;
				


        /**********  End  **********/
        return 0;
}