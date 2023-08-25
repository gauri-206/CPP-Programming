#include<iostream>
using namespace std;

class Base
{
    public:
       int A, B;
       static void  run();

       void fun()           //1000
       {
           cout<<"Inside Fun of Base" << "\n";
       }
       void Gun()            //2000
       {
           cout<<"Inside Gun of Base" << "\n";
       }
       void Sun()            //3000
       {
           cout<<"Inside Sun of Base" << "\n";
       }
};

class Derived : public Base
{
    public: 

       int X, Y;
       void fun()           //4000
       {
           cout<<"Inside Fun of Derived" << "\n";
       }
       void Gun()            //5000
       {
           cout<<"Inside Gun of Derived" << "\n";
       }
       void Sun()            //6000
       {
           cout<<"Inside Sun of Derived" << "\n";
       }


};

int main()
{
    Derived dobj;

   // Derived *dp = new Base;

    dobj.fun();
    dobj.Gun();
    dobj.Sun();

}