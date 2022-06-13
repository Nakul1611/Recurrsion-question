#include<iostream>
using namespace std ; 

bool palindrome(string str ,int i  , int j)
{   
    if ( i >= j )
    {
        return true;
    }

    if( str[i] != str[j])
    {
        return false ; 
    }
    else
    {
       return  palindrome(str , i+1 , j-1);
    }
}

int main()
{
    string str = "abbbccccbbba";
    bool ans = palindrome(str , 0 , str.length()-1);
    if( ans == true)
    {
        cout << str << " string is palindrome ";
    }
    else
    {
        cout << str << " string is not palindrome" ; 
    }
}