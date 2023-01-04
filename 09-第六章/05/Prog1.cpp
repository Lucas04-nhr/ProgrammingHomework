
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：函数str_count统计子字符串substr在字符串str中出现的次数，如果substr在str中不出现，
则返回值0。请完成该函数。
输出结果见图：样张.JPG

-------------------------------------------------------*/
#include <iostream>
#include <cstring>
using namespace std;
/**********Program**********/
int str_count(char cChar[100],char *cTarget) 
{

	char *cCheck;
	int iFlag=0,iNumber=0,iResult=0;
	char cMother=*cTarget;
	cout<<cMother<<endl;
		for(int i=0;cChar[i]!='\0';i++)
		iNumber++;
	cCheck=new char[iNumber];
	for(int j=0;j<100;j++)
	{
		for(int i=0;i<iNumber;i++)
			cCheck[i]=cMother[i];
		for(int i=0;i<iNumber;i++)
		{
			if (cChar[i]==cCheck[i])
				iFlag++;
			if (iFlag==iNumber)
				iResult++;
		}
	}
	return iResult;
}

	/*Ans 1 */
	/*int str_count(char *substr,char *str)
	{
		int c=0,start=0;
		char *ss=substr;
		char *s=str;
		while(*s!='\0')
		{
			while (*s!='\0'&&*ss!='\0')
			{
				if(*ss!=*s)
					break;
				ss++;
				s++;
			}
			if(*ss=='\0')
				c++;
			ss=substr;
			if(*s!='\0')
				s=++str;
		}
		return c;
	}*/
	//答案2传数组直接用；答案3用指针引用数组再使用
	/*Ans 2*/
	// int str_count(char substr[],char str[])
	// {
	// 	int c=0,start=0;
	// 	int i=0,j;
	// 	while(str[i]!=0)
	// 	{
	// 		for(j=0;substr[j]!=0;j++)
	// 			if(substr[j]!=str[i+j])
	// 				break;
	// 		if(substr[j]==0)
	// 			c++,i=i+j;
	// 		else
	// 			i++;
	// 	}
	// 	return c;
	// }


/**********  End  **********/

void main(void)
{
        char ss[100];
        char *s="ABCDabcd1234+-*/XYZxyz/ABCDabcd1234+-*/Aa1 ABCDabcd";
        cout<<"母串="<<s<<endl;
        cout<<"待计数子串=";
        cin.getline(ss,99);
        cout<<"子串在母串中共出现"<<str_count(ss,s)<<"次"<<endl;
}
