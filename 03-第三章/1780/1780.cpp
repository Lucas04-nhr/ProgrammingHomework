
/*编程实现两种温度体系华氏温度和摄氏温度的相互转换;
以F作为华氏温度体系的单位，以C作为摄氏温度体系的单位。
要求当输入以F作为单位的温度值时(温度值范围[-500F~500F]，
否则提示“数据输入有误!”）将其转换为对应的摄氏体
系温度值并输出；
当输入以C作为单位的温度值时(温度值范围[-200C~200C]，
否则提示“数据输入有误！”）将其转换为对应的华氏体
系温度值并输出；
当输入的单位不是C或F时输出提示信息“输入错误!”。
具体结果参见样张。
华氏温度转换为摄氏温度的公式为：c=5/9*(f-32)

题目需要用到的提示信息请直接复制粘贴下面的信息。

"请输入温度值和单位:"
"数据输入有误!"
"输入错误!" 
 "="
*/
#include <iostream>
using namespace std;
int main()
{
/**********Program**********/
	double temp,result;
	char unit;
	cout<<"请输入温度值和单位:"<<endl;
	cin>>temp>>unit;
	if(unit=='F')
	{
		if(temp>=-500&&temp<=500)
		{
			result=5.0/(9*(temp-32));
			cout<<temp<<unit<<"="<<result<<"C"<<endl;
		}
		else
			cout<<"数据输入有误!"<<endl;
	}
	else if(unit=='C')
	{
		if(temp>=-200&&temp<=200)
		{
			result=temp*9.0/5+32;
			cout<<temp<<unit<<"="<<result<<"F"<<endl;
		}
		else
			cout<<"数据输入有误!"<<endl;
	}
	else
		cout<<"数据输入有误!"<<endl;




/**********  End  **********/
 return 0;
}