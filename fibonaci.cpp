#include<iostream>
using namespace std ; 

int fibonaci (int term)
{
    if( term == 1)
        return 0 ;
    if (term == 2)
        return 1;
    
    return fibonaci(term-1) + fibonaci(term -2);
}


int main()
{
    int term;
    cout << "Enter term of fibo series you want :" ; 
    cin >> term;
    int ans = fibonaci (term);
    cout << term <<"th term of fibo series is "<< ans ;
}