#include<iostream>
using namespace std;
class demo
{
public : 
int x,y;
float z;
demo()
{
cout<<"this is zero argument constructor"<<endl;
cout<<"x value is :"<<x<<endl;
cout<<"y value is :"<<y<<endl;
}
demo(int i,int j,int k)
{
x=i;
y=j;
z=k;
cout<<"\n this three argument constructor :"<<endl;
cout<<"x value is :"<<x<<endl;
cout<<"y value is :"<<y<<endl;
cout<<"z value is :"<<z<<endl;
}
};
int main()
{
demo ob1;
demo ob2=demo(100);
demo ob3=demo(1000,2000);
demo ob4=demo(10,20,30.3);
return 0;
}
