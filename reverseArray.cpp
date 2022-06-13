#include <iostream>
using namespace std ;

void reverse(int arr[] ,int i ,int  j )
{
    if  (i >= j )
    {
        return;
    }
    swap(arr[i] , arr[j]);
    reverse(arr,i+1,j-1);
}
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int n = 10 ; 
    reverse(arr , 0 , 10 - 1);
    for (int i = 0 ; i < 10 ; i++)
    { 
        cout << arr[i] << " ";
    }
}