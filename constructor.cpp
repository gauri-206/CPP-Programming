#include<iostream>
using namespace std;

class Demo
{
    public:
       int No1;
       int No2;

       Demo()       // Default constuctor
       {
            cout<<"Inside default constructor\n";
            No1 = 0;
            No2 = 0;
       }

       Demo(int A, int B)       // Parameterised constuctor
       {
            cout<<"Inside Parameterised constructor\n";
            No1 = A;
            No2 = B;
       }

       Demo(Demo &ref)       // Copy constuctor
       {
            cout<<"Inside Copy constructor\n";
            No1 = ref.No1;
            No2 = ref.No2;
       }

       ~Demo()                 //Destructor
       {
           cout<<"Inside Destructor\n";
       }

       void fun()
       {
           cout<<"Inside fun\n";
       }
       void gun()
       {
           cout<<"Inside gun\n";
       }
};
int main()
{
    cout<<"Inside main\n";
   Demo obj1;
   cout<<"value of No1 from obj1 is: "<<obj1.No1<<"\n";
   cout<<"value of No2 from obj1 is: "<<obj1.No2<<"\n";

   Demo obj2(21, 43);
   cout<<"value of No1 from obj2 is: "<<obj2.No1<<"\n";
   cout<<"value of No2 from obj2 is: "<<obj2.No2<<"\n";

   Demo obj3(obj2);
   cout<<"value of No1 from obj3 is: "<<obj3.No1<<"\n";
   cout<<"value of No2 from obj3 is: "<<obj3.No2<<"\n";

   obj1.fun();
   obj1.gun();

   return 0;
}