#include<iostream>
using namespace std;

float Area(float Radius, float PI)
{
    float Ans = 0.0f;

    Ans = PI * Radius * Radius;

    return Ans;
}
int main()
{
    float R = 0.0f;
    float fRet = 0.0f;

    cout<<"Enter the radius: " <<"\n";
    cin>>R;

    fRet = Area(R, 3.14f);

    cout<<"Area of circle is : " <<fRet <<"\n";
    return 0;
}