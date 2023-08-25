#include<iostream>
using namespace std;

class Demo
{
    public:
       int A;
       int B;
       const int C;
       const int D;

       Demo(): C(23), D(50)
       {
          A = 0;
          B = 0;
        }  

        Demo (int i, int j, int k, int l): C(k), D(l)
        {
            A = i;
            B = j;
        } 

        void fun()
        {
            A++;
            B++;
//          C++;
//          D++;
        }

         void gun() const
        {
//          A++;
//          B++;
//          C++;
//          D++;
        }

};

int main()
{
    Demo obj(1, 2, 3, 4);
    const Demo obj1(32, 54, 76, 8);

    obj.fun();
    obj.gun();

 //   obj1.fun();
    obj1.gun();
    
    return 0;
}