#include<iostream>
using namespace std;
main()
{
int n,m,o,sum;
cout<<"Enter a 4-digit number= ";
cin>>n;
sum=0;
o=n/1000;
sum=o;
m=n%1000;
o=m/100;
sum=sum+o;
m=m%100;
o=m/10;
sum=sum+o;
m=m%10;
sum=sum+m;
cout<<"Sum is= "<<sum;
}


