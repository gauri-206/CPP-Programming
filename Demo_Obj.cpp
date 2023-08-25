#include<iostream>
using namespace std;;

class Demo
{
    public:
      
      void fun(int *i)
      {
        cout<<"First Definition...."<<"\n";

      }
      void fun(float *f)
      {
        cout<<"Second Definition...." <<"\n";
      }

      void fun(int b)
      {
        cout<<"Third Definition...." <<"\n";
      }
};

int main()
{
    int a = 10;
    float f = 34.4;
    Demo obj;

    obj.fun(a);
    obj.fun(&a);
    obj.fun(&f);

    return 0;
}