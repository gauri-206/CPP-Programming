#include<iostream>
using namespace std;

class Demo
{
    public:
      int A, B;

       Demo()       // Default constuctor
       {
            cout<<"Inside default constructor"<<"\n";
            
       }

       Demo(int A, int B)       // Parameterised constuctor
       {
            cout<<"Inside Parameterised constructor"<<"\n";
           
       }

       ~Demo()                 //Destructor
       {
           cout<<"Inside Destructor"<<"\n";
       }
};

int main()
{
    cout <<"Inside main: "<<"\n";

    Demo obj;                        //Ststic memory allocation of object
    Demo obj1(20,43);                //Ststic memory allocation of object

    Demo *p = new Demo();            //Dynamic memory allocation of object
    Demo *q = new Demo(20, 43);      //Dynamic memory allocation of object

    delete p;
    delete q;

    cout<<"CLose the main: "<<"\n";
    return 0;

}