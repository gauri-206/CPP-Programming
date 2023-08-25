/*
    Write a program which accept one number from user and range of 
    positions from user. Toggle all bits from that range
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

int CheckBit(UINT iNo, int iStart, int iEnd)
{
    UINT iMask = 0;

    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;
    UINT iResult = 0;

    iMask1 = iMask1 << (iStart-1);
    iMask2 = iMask2 << (iEnd-1);

    iMask =  iMask1 | iMask2;
    iResult = iMask ^ iNo;
    
    return iResult;
}

int main()
{
    UINT iValue =0;
    int iStart =0, iEnd=0;
    int iRet =0;

    cout<<"Enter the number: \n";
    cin>>iValue;

    cout<<"Enter the start of range: \n";
    cin>> iStart;
    cout<<"Enter the end of range: \n";
    cin>> iEnd;

    iRet = CheckBit(iValue, iStart, iEnd);

    cout<<"Modified number is: "<<iRet<<"\n";
    return 0;
}