#include<iostream>
using namespace std;
main()
{
string name;
int c,a,tc,ta,percent,total,donation,rem;
cout<<"The name of movie=";
cin>>name;
cout<<"The price of a child's ticket= $"<<endl;
cin>>c;
cout<<"The price of an adult's ticket= $"<<endl;
cin>>a;
cout<<"Total number of adult tickets sold= "<<endl;
cin>>ta;
cout<<"Total number of child tickets sold= "<<endl;
cin>>tc;
cout<<"Enter the percentage of the amount to be donated to charity="<<endl;
cin>>percent;
total=(a*ta)+(c*tc);
donation=total*0.1;
rem=total-donation;
cout<<"Movie= "<<name<<endl;
cout<<"Total cost of tickets sold= $"<<total<<endl;
cout<<"Donation to charity(10%)= $"<<donation<<endl;
cout<<"Remaining amount after donation= $"<<rem<<endl;
}