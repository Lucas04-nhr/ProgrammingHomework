
/*题目：有六位学生，学号从1到6，语文、数学两门课的成绩分别存放在一维数组chinese、math中。
要求：
1.编写排序函数sort，在主函数中调用此函数按成绩高低排名；
2.编写求平均分的函数average，在主函数中调用此函数求课程的平均分；
3.编写函数lessAverage,在主函数中调用此函数求低于平均分的人数。

（注：同一科目，学生成绩不相同）
  
输出结果见样张.JPG
-------------------------------------------------------*/
#include <iostream>
using namespace std;

/**********Program**********/
void sort(double* score,int* id,int n);
double average(double* score,int n);
int lessAverage(double* score,int n);

void sort(double* score,int* id,int n){
    int i,j,max,tempID;
    double temp;
    for(i=0;i<n-1;i++){
        max=i;
        for(j=i+1;j<n;j++)
            if(score[j]>score[max])
                max=j;
        temp=score[i];
        score[i]=score[max];
        score[max]=temp;
        tempID=id[i];
        id[i]=id[max];
        id[max]=tempID;
    }
}

double average(double* score,int n){
    double avg=0;
    int i;
    for(i=0;i<n;i++)
        avg+=score[i];
    avg/=n;
    return avg;
}

int lessAverage(double* score,int n){
    int i,count=0;
    for(i=0;i<n;i++)
        if(score[i]< average(score,n))
            count++;
    return count;
}
/**********  End  **********/
int main()
{
    double chinese[6],math[6]; //语文成绩数组、数学成绩数组
    int i;
    int stuId[6]={1,2,3,4,5,6};//学号数组
        
    //输入对应的成绩
    for(i=0;i<6;i++)
    {
        cout<<"请输入成绩(语文、数学)：";
        cin>>chinese[i]>>math[i];
    }
        
    //以语文成绩为关键字，对语文成绩数组&学号数组排序
    sort(chinese,stuId,6);
    cout<<"语文课名次如下："<<endl;
    cout<<"名次"<<'\t'<<"学号"<<'\t'<<"语文成绩"<<endl;
    for(i=0;i<6;i++)
    {
                cout<<i+1<<'\t';
                cout<<stuId[i]<<'\t'<<chinese[i]<<endl;
    }
    
    //重置学号数组
    for(i=0;i<6;i++) stuId[i]=i+1;

    //以数学成绩为关键字，对数学成绩数组&学号数组排序
    sort(math,stuId,6);
    cout<<"数学课名次如下："<<endl;
    cout<<"名次"<<'\t'<<"学号"<<'\t'<<"数学成绩"<<endl;
    for(i=0;i<6;i++)
    {
        cout<<i+1<<'\t';
        cout<<stuId[i]<<'\t'<<math[i]<<endl;
    }
    
    //调用average函数计算各科平均分，调用lessAverage统计各科低于平均分的人数   
    cout<<"语文课平均成绩为："<<average(chinese,6)<<endl;
    cout<<"语文课低于平均分的人数为"<<lessAverage(chinese,6)<<"人"<<endl;
    cout<<"数学课平均成绩为"<<average(math,6)<<endl;
    cout<<"数学课低于平均分的人数为"<<lessAverage(math,6)<<"人"<<endl;
    
    return 0;
}

