
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

输入年份和月份，输出该月有几天。

要求与输出样张一样才能得到满分。
-------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{ 
    int year, month, days;

    cout<<"year:";
    cin>>year;
    cout<<"month:";
    cin>>month;

    /**********Program**********/
    if(year%4==0)
	{
		if(month==1&&month==3&&month==5&&month==7&&month==8&&month==10&&month==12)
			days=31;
		else if(month==2)
			days=29;
		else
			days=30;
	}


	/*else if(year%400!=0&&year%4==0)
	{
		if(month==1&&month==3&&month==5&&month==7&&month==8&&month==10&&month==12)
			days=31;
		else if(month==2)
			days=29;
		else
			days=30;
	}*/

    else 
	{
		if(month==1&&month==3&&month==5&&month==7&&month==8&&month==10&&month==12)
			days=31;
		else if(month==2)
			days=28;
		else
			days=30;
	}

    /**********  End  **********/

    cout<<"days:"<<days<<endl;

    return 0;
}
