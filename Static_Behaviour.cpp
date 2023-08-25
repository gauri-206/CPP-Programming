#include<iostream>
using namespace std;

class Demo
{
    public:
       int A, B;
       static int x, y;

       Demo()
       {
          A = 0;
          B = 0;

       }

       void fun()
       {
          cout<< "Inside the function fun: "<<"\n";
          cout<<"value of A: "<<this->A <<"\n";
          cout <<"value of B: " << this-> B <<"\n";
          cout <<"value of x: " << x <<"\n";
          cout <<"alue of y: "<<y <<"\n" ;

        }

        static void gun()
        {
            cout<<"Inside the gun function: "<<"\n";
            cout<<"value of x: "<< x << "\n";
            cout << "value of y: " << y << "\n"; 
        }
};

// Intialization of static characteristics
int Demo:: x = 10;
int Demo:: y = 20;

int main()
{
    cout <<"Inside main: "<<"\n";

    Demo :: gun();
    Demo obj;

    obj.fun();         // fun(&obj)
    obj.gun();

    return 0;


}