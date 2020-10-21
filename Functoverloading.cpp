#include<iostream>
using namespace std;
int mul(int,int);
double mul (double,int);
int mul(int a,int b)
{
return (a*b);
}
double mul(double d,int a)
{
return (d*a);
}
int main()
{
cout<<"Multiplication of two intergers :"<<mul(12,6)<<endl;
cout<<"Multiplication of d*a :"<<mul(22,25);
 return 0;
}
