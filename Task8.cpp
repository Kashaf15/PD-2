#include<iostream>
using namespace std;
main()
{
double veg_p,fruit_p,t_veg,t_fruit,total;
cout<<"Enter vegetable price per kilogram= Rs.";
cin>>veg_p;
cout<<"Enter fruit price per kilogram= Rs.";
cin>>fruit_p;
cout<<"Enter total kilograms of vegetables= ";
cin>>t_veg;
cout<<"Enter total kilograms of fruit= ";
cin>>t_fruit;
total=(veg_p*t_veg)+(fruit_p*t_fruit);
cout<<"Total Earnings in Rupees= Rs."<<total;
}
