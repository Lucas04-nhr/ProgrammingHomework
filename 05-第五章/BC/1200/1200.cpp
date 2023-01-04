
/*题目：对于给定的字符串，找出该字符串中Ascii码值最大的那个字符，
并用输入的单个字符替换掉该最大字符，然后输出；
如果有多个最大字符，则全部替换
                                 
输出结果见样张.JPG
-------------------------------------------------------*/
#include<iostream>
using namespace std;
int main()
{
     char str[]="I am a student of hust";
     char max,c;
     cout<<"请输入要替换的字符：";
     cin>>c;        
/**********Program**********/
    int i=0,j=0,iMax;
    int iAscii[100];
    iAscii[0]=int(str[0]);
    iMax=iAscii[0];
    for(int i=1;str[i]!='\0';i++)
    {
          iAscii[i]=int(str[i]);
          if(iMax<=iAscii[i])
          {
               iMax=iAscii[i];
               j=i;
          }
          else
               iMax=iMax;
    }
    max=str[j];
    for(int i=0;str[i]!='\0';i++)
    {
          if(max==str[i])
              str[i]=c;
          else
               continue;
    }



/**********  End  **********/
     cout<<"替换后的字符串为"<<str<<endl;
     return 0;
}

