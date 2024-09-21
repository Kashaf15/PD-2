#include<iostream>
using namespace std;
main()
{
int size,cost,area,cost_per_pound,cost_per_sqfoot;
cout<<"Enter the size of fertilizer bag in pounds=";
cin>>size;
cout<<"Enter the cost of the bag=$";
cin>>cost;
cout<<"Enter the area in sq_foot that can be covered by the bag=";
cin>>area;
cost_per_pound=cost/size;
cost_per_sqfoot=cost/area;
cout<<"Cost of fertilizer per pound=$"<<cost_per_pound<<endl;
cout<<"Cost of fertilizing per sq_foot=$"<<cost_per_sqfoot;
}
