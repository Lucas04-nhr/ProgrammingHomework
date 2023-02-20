
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：

完成空出函数fun(char* s,char* t)部分。函数fun(char* s,char* t)的功能是：
将在字符串s中下标为偶数位置上的字符，紧随其后重复出现一次，放在一个新串t中，
t中字符按原字符串中字符的顺序排列。（注意0为偶数）

程序运行结果如下：
Please enter string s:
ABCDEF
The result is: AACCEE
-------------------------------------------------------*/
#include <iostream> 
using namespace std; 
void fun (char* s,char* t)
{ 
    
/**********Program**********/
void fun(char* s,char* t){
        int i,j;
        for(i=0,j=0;s[i]!=0;i++)
                if(i%2==0)
                        t[j]=s[i];
                t[j+1]=s[i];
                j+=2;
                t[j]=0;
}

/**********  End  **********/
}

void main()
{ 
        char s[100], t[100];
        cout<<"Please enter string s:"<<endl;
        cin.getline(s,100);
        fun(s, t);
        cout<<"The result is: "<<t<<endl;
        return;
}

