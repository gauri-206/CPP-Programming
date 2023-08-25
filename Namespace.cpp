#include<iostream>
//using namespace std;

namespace Marvellous
{
    class Demo
    {
        public:
            int A;
            int B;
            // Parameterised constructor with default arguments
            Demo(int i=10, int j=20)
            {    
                A = i;
                B = j;
            }
    };
}

using namespace Marvellous;
int main()
{
    //Marvellous::Demo obj1;
    Demo obj1;
    
    std::cout<<"Inside main " <<'\n';
}