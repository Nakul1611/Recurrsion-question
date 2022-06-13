#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num == 1)
    {
        return 1;
    }
    return num * factorial(num - 1);
}

int main()
{
    int number;
    cout << "Enter number : ";
    cin >> number;
    cout << endl;
    int fact = factorial(number);
    cout << "Factorial of number is " << fact;
}