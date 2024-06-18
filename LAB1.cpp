/*Write a C++ program to sort the elements in ascending and descending order.*/

#include<iostream> 
using namespace std;
int main ()
{
int num[20],n; 
int i, j, temp;
cout<<"\n Enter the size of Array: \n";
cin>>n;
cout<<"Enter the Array value"; 
for (i = 0; i < n; ++i) 
cin>>num[i];
for (i = 0; i < n; ++i) //  'for' loop is used for sorting the numbers in descending order
{
    for (j = i + 1; j < n; ++j)
    {
        if (num[i] < num[j])
        {
            temp = num[i]; 
            num[i] = num[j]; 
            num[j] = temp;
        }
    }
}
cout<<"\n Numbers in Descending Order : \n"; 
for (i = 0; i < n; ++i)
{
    cout<<" "; cout<<num[i]; cout<<"\n";
}
for(i=0;i<n;i++)    //outer-loop for sorting the numbers in ascending order
{
    for(int j=0;j<n;j++) //inner-loop
    {
        if(num[i]<num[j]) // represent second element in the array list
        {
            temp = num[i];  // first array element assign to variable temp 
            num[i] = num[j]; // second element assigning to first element
            num[j] = temp; 
	}
    }
}
    cout<<"\n Numbers in Ascending Order : \n";
    for (i = 0; i<n; ++i)
    {
        cout<<" ";
        cout<<num[i];
        cout<<"\n";
    }
}

