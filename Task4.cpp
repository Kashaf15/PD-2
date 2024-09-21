#include<iostream>
using namespace std;
main()
{
int d;
float t;
string n;
cout<<"Enter your name=";
cin>>n;
cout<<"Enter the target weigt loss in kg= "<<endl;
cin>>t;
d=t*15;
cout<<n<<" will need "<<d<<" days to lose "<<t<<"kg of weight by following doctor's suggestion.";
}
