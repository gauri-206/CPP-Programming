/*
     Write a program which accept one number from user and off 7th bit of that
     number if it is on. Return modified number.
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0X40;
    UINT iResult =0;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet =0;

    cout<<"Enter the number: "<<"\n";
    cin>>iValue;

    iRet = OffBit(iValue);
    cout<<"Modified number is: "<<iRet<<"\n";

    return 0;
}