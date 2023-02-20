
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：

定义一个日期类Date，包含年、月、日三个数据成员（int），定义带有3个参数的构造函数，
以及一个求日期是当年的第几天的成员函数和输出日期的成员函数，
日期的显示格式为年/月/日。编写主函数进行测试。
（每年各月天数分别为31,28,31,30,31,30,31,31,30,31,30,31，闰年2月为29天，
闰年的条件year%4==0&&year%100!=0)||year%400==0)）
输出结果见样张.JPG
-------------------------------------------------------*/
#include <iostream>
using namespace std;

/**********Program**********/
class Date
{
        private:
                int year;
                int month;
                int day;
        public:
                Date(){};
                ~Date(){};
                Date(int iInputYear,int iInputMonth,int iInputDay);
                void SetD(int iInputYear,int iInputMonth,int iInputDay);
                void show();
                int getDay();
};

Date::Date(int iInputYear,int iInputMonth,int iInputDay)
{
        year=iInputYear;
        month=iInputMonth;
        day=iInputDay;
}
void Date::SetD(int iInputYear,int iInputMonth,int iInputDay)
{
        year=iInputYear;
        month=iInputMonth;
        day=iInputDay;
}

int Date::getDay()
{
        int iResult=0;
        if((year%4==0&&year%100!=0)||(year%400==0))
                switch (month) 
                {
                case 1:
                        iResult=day;
                        break;
                case 2:
                        iResult=31+day;
                        break;
                case 3:
                        iResult=31+29+day;
                        break;
                case 4:
                        iResult=31+29+31+day;
                        break;
                case 5:
                        iResult=31+29+31+30+day;
                        break;
                case 6:
                        iResult=31+29+31+30+31+day;
                        break;
                case 7:
                        iResult=31+29+31+30+31+30+day;
                        break;
                case 8:
                        iResult=31+29+31+30+31+30+31+day;
                        break;
                case 9:
                        iResult=31+29+31+30+31+30+31+31+day;
                        break;
                case 10:
                        iResult=31+29+31+30+31+30+31+31+30+day;
                        break;
                case 11:
                        iResult=31+29+31+30+31+30+31+31+30+31+day;
                        break;
                case 12:
                        iResult=31+29+31+30+31+30+31+31+30+31+30+day;
                        break;
                }
        else
        {
                switch (month) 
                {
                case 1:
                        iResult=day;
                        break;
                case 2:
                        iResult=31+day;
                        break;
                case 3:
                        iResult=31+28+day;
                        break;
                case 4:
                        iResult=31+28+31+day;
                        break;
                case 5:
                        iResult=31+28+31+30+day;
                        break;
                case 6:
                        iResult=31+28+31+30+31+day;
                        break;
                case 7:
                        iResult=31+28+31+30+31+30+day;
                        break;
                case 8:
                        iResult=31+28+31+30+31+30+31+day;
                        break;
                case 9:
                        iResult=31+28+31+30+31+30+31+31+day;
                        break;
                case 10:
                        iResult=31+28+31+30+31+30+31+31+30+day;
                        break;
                case 11:
                        iResult=31+28+31+30+31+30+31+31+30+31+day;
                        break;
                case 12:
                        iResult=31+28+31+30+31+30+31+31+30+31+30+day;
                        break;
                }

        }
        return iResult;
}

/**********  End  **********/
void Date::show()
{
        cout<<year<<"/"<<month<<"/"<<day<<endl;

}
int main()
{
        Date d1(2009,2,1),d2;   //d1为2009年2月1日
        d1.show();
        cout<<d1.getDay()<<endl;
        d2.SetD(2012,3,1);    //d2为2012年3月1日
        d2.show();
        cout<<d2.getDay()<<endl;
        return 0;
}
