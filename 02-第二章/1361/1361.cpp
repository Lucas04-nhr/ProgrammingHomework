
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：编写程序，已知任意三角形的边长，计算三角形的面积
输出格式请参看样张。

请直接复制使用输入提示

    "请输入三条边的长度："
    "三角形面积"

注意：使用样张数据测试代码时，程序输出必须和样张完全相同

-------------------------------------------------------*/
#include <iostream>
#include <cmath>
using namespace std; 
/**********Program**********/
int main()
{
	double a,b,c,p,S;
	cout<<"请输入三条边的长度：";
	cin>>a>>b>>c;
	p=(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"三角形面积"<<S<<endl;
	return 0;
}
/**********  End  **********/
