#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    char x;
    char w;

    x = toupper('a');
    w = tolower('A');
    cout << "Convert To A :  "<< x << "\n";
    cout << "Convert To a :  "<< w << "\n";
    
    
    cout << "IsUpper ('A') :  " << isupper('A') << "\n";
    cout << "IsLower ('a') :  " << islower('a') << "\n";
    
    
    
    cout << "IsDigit ('9') :  " << isdigit('9') << "\n";
    
    
    cout << "IsPunct (';') :  " << ispunct(';') << "\n";
}

