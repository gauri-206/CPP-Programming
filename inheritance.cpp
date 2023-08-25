#include<iostream>
using namespace std;
//Parent class
class Demo
{
    public:
        int A, B;

        Demo()
        {
            A= 11;
            B = 21;
            cout<<"Inside Demo constructor "<<"\n";
        }
        ~ Demo()
       {
        cout<<"Inside Demo Destructor"<<"\n";
       }

        void fun()
        {
            cout<<"Inside fun of Demo "<<"\n";
        } 
};

//child class
class Hello : public Demo          //class Hello extends Demo
{
    public:
       int X, Y;

       Hello()
       {
        X = 51;
        Y = 101;
        cout<<"Inside Hello constructor "<<"\n";
       }
       ~ Hello()
       {
        cout<<"Inside Hello Destructor"<<"\n";
       }

       void gun()
       {
        cout<<"Inside gun of Hello" <<"\n";
       }
};

int main()
{
    Hello hobj;

    hobj.fun();
    hobj.gun();

    cout<<hobj.A<<"\n";
    cout<<hobj.B<<"\n";
    cout<<hobj.X<<"\n";
    cout<<hobj.Y<<"\n";

    return 0;
}

