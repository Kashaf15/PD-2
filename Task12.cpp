#include<iostream>
using namespace std;
main()
{
int width,height,area,n,n_walls;
cout<<"Enter the number of square meters you can paint= ";
cin>>n;
cout<<"Width of single wall= ";
cin>>width;
cout<<"Height of single wall= ";
cin>>height;
area=width*height;
n_walls=n/area;
cout<<"Number of wall you can paint= "<<n_walls;
}

