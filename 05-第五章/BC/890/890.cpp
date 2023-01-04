

/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：输入多个字符串，然后按升序排序后输出

  说明:字符串比较即为依次比较字符的ascii码值
  例如，
   - 字符串ab、m、abc按字典顺序比较 ，则m>abc>ab
   - 字符串Anp与ab按字典顺序比较 ，则ab>Anp

字符串整体比较可使用strcmp函数
字符串整体拷贝可使用strcpy函数

请参考样张完成程序。
-------------------------------------------------------*/

#include<iostream>
#include<cstring>
using namespace std;
const int MAX=20;
int main()
{
        char name[4][MAX];
        cout<<"请输入4个字符串(长度不大于MAX)："<<endl;
        int i;
        for( i=0;i<4;i++)
                cin>>name[i];
        /**********Program**********/
		char cTemp[MAX+100000]={0};
		for(int j=0;j<4;j++)
		{
			for(int i=0;i<4;i++)
			{
				if (strcmp(name[i],name[i+1])>=0)
				{
					strcpy(cTemp,name[i]);
					strcpy(name[i],name[i+1]);
					strcpy(name[i+1],cTemp);
				}
				else
					continue;
			}
		}
        /**********  End  **********/
        cout<<"输出排序后的字符串："<<endl;
        for(i=0;i<4;i++)
                cout<<name[i]<<"   ";
        cout<<endl;

                return 0;

}
