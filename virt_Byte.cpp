#include<iostream>
using namespace std;

class Demo
{
    public:

      void fun()
      {
        cout<<"inside fun"<<"\n";

      }

      virtual void gun()
      {
        cout<<"inside virtal gun"<<"\n";
      }
};

int main()
{
    Demo dobj;

    cout<<sizeof(dobj)<<"\n";
}