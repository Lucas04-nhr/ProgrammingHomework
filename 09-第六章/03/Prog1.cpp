
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：

完成函数 fun ( char* str , int a [ ] ) ，其功能是把str中出现的数字字符
转换成数字存储在a[ ] 中，然后返回转换的个数。
例如：str = " 12341454abcdeaert234" ;
则：a [ ] 中存储着12341454234
返回：11

程序运行结果如下：
1 2 3 4 5 5 4 3 3 3

-------------------------------------------------------*/
#include <iostream> 
using namespace std; 
int fun(char* str,int a[])
{

/**********Program**********/
	/*char *cChar=str;
	//int &a[1024];
	int iFlag=0;
	for (int i=0;cChar[i]!='\0';i++)
	{
		if(48<=(int)cChar[i]&&(int)cChar[i]<=57)
		{
			a[i]=int (cChar[i]);
			iFlag++;
		}
	}

	return iFlag;*/

	int i,j=0;
	for(i=0;str[i]!=0;i++)
		if('0'<=str[i]&&str[i]<='9')
			a[j++]=str[i]-'0';
	return j;
/**********  End  **********/
}
int main()
{
        int a[1024];
        int len=fun("12345rwtrwgr5t4333",a);
        for(int i=0;i<len;i++)
        {
                cout<<a[i]<<' ';
        }
        cout<<endl;
        
        return 0;
}
