/*
    Write a program which accept one number, two positions from user and 
    check whether bit at first or second position is on or off
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo, int ipos1, int ipos2)
{
    UINT iMask = 0;

    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;
    UINT iResult = 0;

    iMask1 = iMask1 << (ipos1-1);
    iMask2 = iMask2 << (ipos2-1);

    iMask =  iMask1 | iMask2;
    iResult = iMask & iNo;
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
    int iPos1 =0, iPos2=0;
    bool bRet =false;

    cout<<"Enter the number: \n";
    cin>>iValue;

    cout<<"Enter the 1st positions: \n";
    cin>> iPos1;
    cout<<"Enter the 2nd positions: \n";
    cin>> iPos2;

    bRet = CheckBit(iValue, iPos1, iPos2);

    if(bRet == true)
    {
        cout<<"Bit is ON.. \n";
    }
    else
    {
        cout<<"Bit is OFF.. \n";
    }
    return 0;
}
