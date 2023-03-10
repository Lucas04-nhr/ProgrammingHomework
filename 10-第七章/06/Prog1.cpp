
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：定义一个描述二维坐标系中点对象的类Point，它具有下述成员函数：

（1）double r(); //计算极坐标的极半径
（2）double theta(); //计算极坐标的极角
（3）double distance(Point& p); //计算与点p的距离

输出结果见图：样张.JPG
-------------------------------------------------------*/
#include <iostream>
#include <cmath>
using namespace std;

/**********Program**********/
class Point{
public:
        Point(){
                x=y=0;
        }
        double r(){
                return sqrt(x*x+y*y);
        }
        double theta(){
                return atan(y/x);
        }
        double distance(const Point &p){
                return sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
        }
private:
        doublex,y;
};
/**********  End  **********/
 void main()
{
        Point A(5,5),B(1,1);
        cout<<"极半径为"<<A.r()<<",极角为"<<A.theta()<<endl;
        cout<<"AB两点间距离为"<<A.distance(B)<<endl;
     
}