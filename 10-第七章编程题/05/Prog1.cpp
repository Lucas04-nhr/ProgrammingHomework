

/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：声明复数类complex,并使用成员函数add实现复数加法,

  并输出结果, 注意虚部为负数和0时的输出。

输出结果见图：样张.JPG
-------------------------------------------------------*/
#include<iostream>
using namespace std;
/**********Program**********/
class Complex
{
        private:
                double R;
                double I;
        public:
                Complex(){};
                Complex(double a,double b);
                Complex add(Complex &a);
                void show();
                

};

Complex::Complex(double a,double b)
{
        R=a;
        I=b;
}

Complex Complex::add(Complex &a)
{
        Complex c;
        c.R=R+a.R;
        c.I=I+a.I;
        return c;
}

/**********  End  **********/
void Complex::show(){
                if(I>0)
                  cout<<R<<"+"<<I<<"i"<<endl;
                else if(I==0)
                        cout<<R<<endl;
                else
                        cout<<R<<"-"<<-I<<"i"<<endl;
}
int main()
{
        Complex a(3,4),b(5,6),c;
    c=a.add(b);//c=a+b
        c.show();
}

