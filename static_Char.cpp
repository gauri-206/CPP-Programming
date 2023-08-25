#include<iostream>
using namespace std;

class Demo
{
    public:
      int A, B;
      static int x, y;

      Demo()           // Default constructor
      {
        A = 0;
        B = 0;
      }


};

//Initialization of static characteristics
int Demo :: x= 10;
int Demo :: y = 39;

int main()
{
    cout<<"value of x is: "<< Demo::x <<"\n";
    cout<<"value of y is: "<< Demo :: y << "\n";

    Demo obj1;
    Demo obj2;

    cout<<"Value of A is: "<< obj1.A << "\n";
    cout<<"VAlue of A is: "<< obj2.A <<"\n";

    obj1.A++;

    cout<<"Value of A is : "<< obj1.A <<"\n";
    cout<<"Va<lue of A is: "<< obj2.A <<"\n";

    cout<<"VAlue of x is: " << obj1.x <<"\n";
    cout << "Value of x is: "<< obj2.x <<"\n";

    return 0;
}

