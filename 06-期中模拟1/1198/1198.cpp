
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
		int i,j,max,sum=0;
		double average;
		cout<<"输出成绩且负数表示结束"<<endl;
		for(i=0;;i++){
			cin>>score[i];
			if(score[i]<0)
				break;
		}
		cout<<"共有"<<i<<"人"<<endl;
		cout<<"成绩如下"<<endl;
		for(j=0;j<=i-1;j++)
			cout<<score[j]<<"  ";
		cout<<endl;
		max=score[0];
		sum=score[0];
		for(j=1;j<=i-1;j++)
		{
			sum+=score[j];
			if(score[j]>=max)
				max=score[j];
			else
				max=max;
		}
		average=double(sum)/double(i);
		cout<<"最高分"<<max<<endl;
		cout<<"平均分"<<average<<endl;

/**********  End  **********/
        return 0;
}

