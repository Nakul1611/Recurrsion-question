#include<iostream>
using namespace std ; 

bool sortedOrNot(int arr[],int size)
{
    if (size == 0 || size == 1 )
    {
        return true;
    }

    if (arr[0] > arr[1] )
    {
        return false;
    }
    else 
    {
        return sortedOrNot(arr+1 , size-1);
    }
}

int main ()
{
    int arr[5]  = {1,5,3,4,5};
    int size = 5;
    bool ans = sortedOrNot(arr , size );
    if( ans == 1)
        cout << "sorted";
    else 
        cout << "not sorted";
}