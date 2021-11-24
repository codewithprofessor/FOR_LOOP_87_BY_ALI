/*
Write a program in C++ to find the sum of first 10 natural numbers. Go to the editor
Sample Output:
Find the first 10 natural numbers:
---------------------------------------
The natural numbers are:
1 2 3 4 5 6 7 8 9 10
The sum of first 10 natural numbers: 55
*/

#include<iostream>
using namespace std;
int main()
{
    int a;
    for(int i=1;i<=10;i++)
    {
        cout<<" "<<i<<endl;
         a =a+i;
    }
    cout<<"The sum is = "<<a;
    return 0;
}