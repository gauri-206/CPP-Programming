/*
    Write a program which accept one number and position from user and on
    that bit. Return modified number
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult =0;

    iMask = iMask << (iPos-1);
    iResult = iMask | iNo;

    return iResult;
}

int main()
{
    UINT iValue =0;
    int iPos =0;
    int iRet =0;

    cout<<"Enter the number: \n";
    cin>> iValue;

    cout<<"Enter the position: \n";
    cin>>iPos;

    iRet = OffBit(iValue, iPos);
    cout<<"Modified Number after on the bit: "<<iRet<<"\n";

    return 0;
}