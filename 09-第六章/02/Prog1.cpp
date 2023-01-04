
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：定义一个函数max，求数组(34，91，83，56，29，93，56，12，88，72)中的
最大数和其下标，并在主函数中打印最大数和下标。函数格式：
int max(int s[], int n)
注意：如有多个最大值，以最后一个为准。
输出结果见图：样张.JPG
-------------------------------------------------------*/
#include <iostream>
using namespace std;
/**********Program**********/
/*int max(int s[], int n)
{
	int iMax=s[0],iNumber=0;
	for(int i=0;i<10;i++)
	{
		if(iMax<=s[i])
		{
			iMax=s[i];
			iNumber=i;
		}
	}
	return iNumber;
}*/

int max(int *s,int n)
{
	int i,pos;
	pos=0;
	for(i=0;i<n;i++)
		if(s[i]>s[pos])
			pos=i;
	return pos;
}

/**********  End  **********/

void main(void)
{
        int pos;
        int s[10]={34,12,83,56,29,93,56,12,88,72};
        pos=max(s,10);
        cout<<"最大值="<<s[pos]<<endl;
        cout<<"位置="<<pos+1<<endl;
}
