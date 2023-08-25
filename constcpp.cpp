#include<iostream>
using namespace std;

class Demp
{
    public:
       int A;
       int B;
       const int C;
       const int D;   
 
       Demp () : C(10), D(11)
       {
          A = 0;
          B = 0;
       }

       Demp (int i, int j, int k, int l): C(k), D(l)
       {
          A = i;
          B = j;
       }

};

int main()
{
    Demp obj1;
    Demp obj2(12, 43, 34, 54);
    Demp obj3(3, 5, 7, 9);

    cout<< obj1.A <<"\n";
    cout<< obj1.B << "\n";
    cout<<obj1.C <<"\n";
    cout<<obj1.D<<"\n";

    cout<< obj2.A <<"\n";
    cout<< obj2.B << "\n";
    cout<<obj2.C <<"\n";
    cout<<obj2.D<<"\n";

    cout<< obj3.A <<"\n";
    cout<< obj3.B << "\n";
    cout<<obj3.C <<"\n";
    cout<<obj3.D<<"\n";

    return 0;

}
