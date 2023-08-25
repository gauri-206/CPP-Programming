/*
    Write a program which accept one number and position from user and toggle
    that bit. Return modified number
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, int iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult =0;

    iMask = iMask << (iPos-1);

    return (iMask ^ iNo);
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

    iRet = ToggleBit(iValue, iPos);
    cout<<"Modified Number after toggle the bit: "<<iRet<<"\n";

    return 0;
}