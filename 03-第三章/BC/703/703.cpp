
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：

编写一个程序，从键盘输入a, op, b。其中a, b为数值；op为字符，限制为+、-、*、/ 。 
计算表达式a op b的值,并输出结果；如果不是+、-、*、/则显示error 。
注意：输出语句必须输出一个换行符号。
运行结果见图1，2
要求与输出样张一样才能得到满分。
-------------------------------------------------------*/

#include<iostream> 
   using namespace std;
   void main() 
   {  float a,b; char op;  
      cout<<"Begin count:\n";  
      cin>>a>>op>>b; 
      switch(op)   
       { 

/**********Program**********/
	  case '+':
		   {
				cout<<a+b<<endl;
				break;
		   }
	  case '-':
		   {
				cout<<a-b<<endl;
				break;
		   }
	  case '*':
		   {
				cout<<a*b<<endl;
				break;
		   }
	  case '/':
		   {
				if(b==0)
				{
					cout<<"input data error!"<<endl;
				}
				else
				{
					cout<<a/b<<endl;
				}
				break;

		   }
	  default:
		  {
			  cout<<"error"<<endl;
		  }


/**********  End  **********/
        }       
     } 