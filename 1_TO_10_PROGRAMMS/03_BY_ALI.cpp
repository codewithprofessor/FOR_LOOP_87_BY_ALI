/*Write a program in C++ to display n terms of natural number and their sum. Go to the editor
Sample Output:
Input a number of terms: 7
The natural numbers upto 7th terms are:
1 2 3 4 5 6 7
The sum of the natural numbers is: 28*/

#include<iostream>
using namespace std;
int main()
{
    int a;
    for(int i=0;i<=7;i++)
    {
        cout<<" "<<i;
        a = a+i;
    }
    cout<<"\n The sum is = "<<a;
    return 0;
}