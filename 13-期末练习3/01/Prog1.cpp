
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：

输入某一个班所有学生的计算机考试成绩（int score[100]），以负数
表示输入结束。统计学生人数并对成绩进行分析，找出其中的最高分并
求出平均分。

输出结果见图：样张.JPG

要求与输出样张一样才能得到满分。
-------------------------------------------------------*/
#include <iostream>
using namespace std;
int main( )
{


/**********Program**********/
    int score[100]={0};
    int i=0;
    cout<<"输入成绩且负数表示结束"<<endl;
    do {
        cin>>score[i];
        i++;
    } while (score[i-1]>=0);
    cout<<"共有"<<i-1<<"人"<<endl<<"成绩如下"<<endl;
    for (int j = 0; j < i-1; ++j) {
        cout<<score[j]<<"  ";
    }
    cout<<endl;
    int iMax= score[0];
    for (int j = 0; j < i-1; ++j)
        if(iMax<=score[j])
            iMax=score[j];
    cout<<"最高分"<<iMax<<endl;
    int iSum=0;
    double dAverage;
    for (int j = 0; j < i; ++j) {
        iSum+=score[j];
    }
    double dSum=iSum;
    dAverage=double(dSum/(i-1.0));
    cout<<"平均分"<<dAverage<<endl;

/**********  End  **********/
    return 0;
}

