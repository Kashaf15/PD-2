#include<iostream>
using namespace std;
main()
{
int age,n;
float avg;
cout<<"Enter your age= ";
cin>>age;
cout<<"Enter the number of times they've moved= ";
cin>>n;
n=n+1;
avg=age/n;
cout<<"Average number of years lived in a house= "<<avg;
}