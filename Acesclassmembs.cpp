cceclassmem.cpp 
@@ -0,0 +1,31 @@
#include<iostream>
using namespace std;
class items
{
private :
int number;
float price;
int qty;
void values(void);
public :
void show();
};
void items::show(void)
{
values();
}
void items::values(void)
{
number=123;
price=56.34;
qty=50;
cout<<"number:"<<number<<endl;
cout<<"price :"<<price<<endl;
cout<<"qty :"<<qty<<endl;
};
int main()
{
items ob;
ob.show();
return 0;
}
