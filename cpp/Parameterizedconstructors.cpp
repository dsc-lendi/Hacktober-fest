#include<iostream>

#include<conio.h>

using namespace std;

class Example {



    int a, b;

public:

    

    Example(int x, int y) {

        

        a = x;

        b = y;

        cout << "Im Constructor\n";

    }

    void Display() {

        cout << "Values :" << a << "\t" << b;

    }

};

int main() {

    Example Object(10, 20);

   

    Object.Display();

   

    getch();

    return 0;

}
