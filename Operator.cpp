using namespace std;
#include<iostream>

class Demo
{
    public:
       int A, B;
       Demo(int i=10, int j=20)
       {
           A= i;
           B = j;
       }
       friend Demo operator+(Demo op1 ,  Demo op2);
};

Demo operator+(Demo op1 ,  Demo op2)
{
    cout<<"Inside + Operator "<<"\n";
    return Demo(op1.A + op2.A , op1.B+op2.B);
}
int main()
{
    Demo obj1(11,21);
    Demo obj2(51, 101);
    Demo obj(0,0);

    obj = obj1 + obj2;

    return 0;
}