#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char ch = 'D';

    char name1 [6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    char name2 [] = {'H', 'e', 'l', 'l', 'o', '\0'};

    char name3 [] = "Hello";

    cout << sizeof(name1) << "\n";
    cout << sizeof(name2) << "\n";
    cout << sizeof(name3) << "\n";

    cout<<strlen(name1) << "\n";
    cout<<strlen(name2) << "\n";
    cout<<strlen(name3) << "\n";
    
    return 0;
}