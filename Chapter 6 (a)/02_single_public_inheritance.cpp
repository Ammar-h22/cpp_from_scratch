#include <iostream>
using namespace std;
class base
{
    int data1; // private by default and is not inheritable

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void base :: setData()
{
    data1 = 10;
    data2 = 20;
}

int base :: getData1()
{
    return data1;
}

int base :: getData2()
{
    return data2;
}

class derived : public base // class is being derived publically
{
    int data3;

public:
    void process();
    void display();
};

void derived :: process()
{
    data3 = data2 * getData1();
}

void derived :: display()
{
    cout << "Value of data1 is: " << getData1() << endl;
    cout << "Value of data2 is: " << data2 << endl;
    cout << "Value of data3 is: " << data3 << endl;
}
int main()
{
    derived d1;
    d1.setData();
    d1.process();
    d1.display();
    return 0;
}
