#include<iostream>
using namespace std;
#include<string.h>
int StrCount(char *str)
{
    int i, Vowel, Consonents;
    int V_count = Vowel;
    int C_count = Consonents;
    
    for(i=0; str[i]; i++)
    {
        if(str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u' ||str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U' )
        {
            Vowel++;
        }   
        else if((str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' ))
        {
            Consonents++;
        }
    }
    cout<<"vowels count is: " <<Vowel<<"\n";
    cout<<"consenents count is: " <<Consonents<<"\n";
}

int main()
{
    char Str[20];
    int VC_count= 0;
    
    cout<<"Enter any string: "<<"\n";
    cin>>Str;

    VC_count = StrCount(Str);
}