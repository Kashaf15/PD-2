#include<iostream>
using namespace std;
main()
{
float i,p;
int chances;
cout<<"Enter Imposter Count=";
cin>>i;
cout<<"Enter Player Count=";
cin>>p;
chances=100*(i/p);
cout<<"Chance of being an Imposter="<<chances<<"%";
}