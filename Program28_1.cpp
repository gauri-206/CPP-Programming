/*
    Writa  a program which accept one number and position from user and 
    check whether bit at that position is on or off. If bit is on return TRUE
    otherwise return FALSE
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo, int iPos)
{
    UINT iMax = 0X00000001;
    UINT iResult =0;

    iMax = iMax << (iPos -1);
    iResult = iNo &iPos;

    if(iResult == iMax)
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
    int iPos =0;
    bool bRet = false;

    cout<<"Enter the number: "<<"\n";
    cin>> iValue;

    cout<<"Enter the position: \n";
    cin >> iPos;

    bRet = CheckBit(iValue, iPos);

    if(bRet == true)
    {
        cout<<"Bit is ON...\n";
    }
    else
    {
        cout<<"Bit is OFF...\n";
    }

    return 0;
}