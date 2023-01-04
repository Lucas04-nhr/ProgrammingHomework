
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：

编程输出下列图形，中间一行英文字母由输入得到。
           A
        B  B  B
     C  C  C  C  C
  D  D  D  D  D  D  D
     C  C  C  C  C
        B  B  B
           A


-------------------------------------------------------*/

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
        char in;
        cout<<"输入一个字母：";
        cin>>in;
        
/**********Program**********/
		char fi='A';
		int r=int(in-fi+1);
		for(int i=1;i<=r;i++)
		{
			for(int j=1;j<=2*r-2*i;j++)
				cout<<" ";
			for(int k=1;k<=2*i-1;k++)
				cout<<" "<<fi;
			cout<<endl;
			fi=char(fi+1);
		}
		fi=char(fi-1);	
		for(int m=1;m<=r-1;m++)
		{
			fi=char(fi-1);	
			for(int n=1;n<=2*m;n++)
				cout<<" ";
			for(int p=1;p<=(2*r-1)-2*m;p++)
				cout<<" "<<fi;
			cout<<endl;		
		}
/**********  End  **********/
        return 0;
}        



