/*
     Write a program which accept one number from user and Toggle 7th and 10th bit of that
     number. Return modified number.
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0X240;
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

    iRet = ToggleBit(iValue);
    cout<<"Modified number is: "<<iRet<<"\n";

    return 0;
}