
/*-------------------------------------------------------
��������ơ�
---------------------------------------------------------

��Ŀ��

��дһ�����򣬴Ӽ�������a, op, b������a, bΪ��ֵ��opΪ�ַ�������Ϊ+��-��*��/ �� 
������ʽa op b��ֵ,�����������������+��-��*��/����ʾerror ��
ע�⣺������������һ�����з��š�
���н����ͼ1��2
Ҫ�����������һ�����ܵõ����֡�
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