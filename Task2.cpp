#include<iostream>
using namespace std;
main()
{
int m,fps,total;
cout<<"Enter number of minutes=";
cin>>m;
cout<<"Enter total number of frames per second=";
cin>>fps;
total=60*m*fps;
cout<<"Total number of frames="<<total;
return 0;
} 