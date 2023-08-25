#include<iostream>
using namespace std;

class Hello
{
    public:
      void gun();

    friend void Demo :: kjo();
};

class Marvellous
{
    public:
       void sun();
       void run();
};

class Demo
{
    public:
       int A;
    private:
        int B;
    protected:
        int C;

    public: 

        void kjo();

        Demo()
        {
            A =0;
            B=0;
            C=0;
        }
        Demo(int i, int j, int k)
        {
            A = i;
            B = j;
            C = k;
        }
        friend  void fun();
        friend void Hello :: gun();
        friend class Marvellous;
};

void Demo :: kjo()
{
    
    Hello kobj;
}

void fun()
{

    Demo obj(11, 21, 51);
    cout<<"Value of A: "<<obj.A<<"\n";
    cout<<"Value of B: "<<obj.B<<"\n";
    cout<<"Value of c: "<<obj.C<<"\n";
}


  
void Hello :: gun()
{
    Demo obj(11, 21, 51);
    cout<<"Value of A: "<<obj.A<<"\n";
    cout<<"Value of B: "<<obj.B<<"\n";
    cout<<"Value of c: "<<obj.C<<"\n";
}

void Marvellous ::sun()
{
    Demo obj(11, 21, 51);
    cout<<"Value of A: "<<obj.A<<"\n";
    cout<<"Value of B: "<<obj.B<<"\n";
    cout<<"Value of c: "<<obj.C<<"\n";
}

void Marvellous ::run()
{
    Demo obj(11, 21, 51);
    cout<<"Value of A: "<<obj.A<<"\n";
    cout<<"Value of B: "<<obj.B<<"\n";
    cout<<"Value of c: "<<obj.C<<"\n";
}


int main()
{
    Demo dobj;
    //dobj.gun();
    fun();

    Hello hobj;
    hobj.gun();

    Marvellous Mobj;
    Mobj.sun();
    Mobj.run();

    return 0;
}