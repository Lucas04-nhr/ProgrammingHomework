
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：m个人的成绩存放在score数组中，请编写函数choose，它的功能是：
将低于平均分的人数作为函数值返回，将低于平均分的分数放在below所指的数组中。
例如，当score数组的数据为10、20、30、40、50、60、70、80、90时，
函数返回的人数应该时4，below中的数据应为10、20、30、40。


输出结果见图：样张.JPG
-------------------------------------------------------*/
#include <iostream>
using namespace std;
/**********Program**********/
int choose(const int* iScore, int iNumber, int* iBelow){
int i,k=0,c=0;
double avg=0;
for(i=0;i<n;i++){
    if (score[i]<avg){
        below[k++]=score[i];
        c++;
    }
    return c;
}
/**********  End  **********/

int main()
{
    const int N=9;
    int score[N]={10,20,30,40,50,60,70,80,90};
    int below[N]={-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int number,i;
    number=choose(score,N,below);
    cout<<"低于平均分的人数="<<number<<endl;
    cout<<"低于平均分的分数=";
    for(i=0;i<number;i++) cout<<below[i]<<"  ";
    cout<<endl;
}
