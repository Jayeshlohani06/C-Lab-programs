//Write a C++ program to swap 2 values by writing a function that uses call by   reference technique.   

#include<iostream> 
using namespace std; 
void swap(int &,int &); 
int main()
{
	int x,y;
     cout<<"\nEnter 1st number:: "; 
     cin>>x;
     cout<<"\nEnter 2nd number:: ";
     cin>>y;
     cout<<"\n Before swapping the numbers are:"<<"\n\t x = "<<x<<"\n\t y = "<<y<<endl;
     swap(x,y);
     cout<<"\n After swapping the numbers are:"<<"\n\t x = "<<x<<"\n\t y = "<<y<<endl;
     return 0;
}

void swap (int &num1, int &num2) //&num1 and &bnum2 are Reference variables
{
   int temp;
   temp=num1; 
   num1=num2; 
   num2=temp;
}

