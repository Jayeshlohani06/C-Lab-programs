//Write a C++ program to find the sum of all the natural numbers from 1 to n.
#include<iostream>
using namespace std; 
int main()
{
           int n;
           cout << "Enter a number : ";
           cin >> n;
           int sum=0;
           for(int i=1;i<=n;i++) sum+=i;
            cout <<"Sum of " <<n <<" natural numbers is:\n"<< sum; 
            return 0;
}

