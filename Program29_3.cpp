/*
    Write a program which accept one number from user and check whether 
    9th and 12th bit is on or off
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(int iNo)
{
    UINT iMask = 0X900;
    UINT iResult = 0;

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue =0;
    bool bRet =false;

    cout<<"Enter the number: \n";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"9th and 12th bit is ON.. \n";
    }
    else
    {
        cout<<"9th and 12th bit is OFF.. \n";
    }
    return 0;
}
