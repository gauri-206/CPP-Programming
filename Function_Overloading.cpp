#include<iostream>
using namespace std;

class Demo
{
    public:
       
       int Addition(int a, int b)
       {
          cout<<"Addition of 2 integers is: "<<"\n";
          return a+b;
       }

       int Addition(int a, int b, int c)
       {
          cout<<"Addition of 3 integers is: " << "\n";
          return a + b +c;
       }

       float Addition(float a, float b)
       {
          cout<<"Addition of 2 floats is: " <<"\n";
          return a + b;
       }

       double Addition(double a, double b)
       {
          cout << "Addition of 2 doubles is: "<< "\n";
          return a + b;
       }
};

int main()
{
    Demo obj;
    int iRet = obj.Addition(10, 20);
    cout << "Addition of 2 integers: " <<iRet << "\n";

    iRet = obj.Addition(10, 20, 30);
    cout << "Addition of 3 integers: " <<iRet << "\n";

    float fRet = obj.Addition(10.5f, 20.7f);
    cout << "Addition of 2 integers: " <<fRet << "\n";

    double dRet = obj.Addition(10.4, 20.8);
    cout << "Addition of 2 integers: " <<dRet << "\n";

    return 0;

}