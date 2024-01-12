// "this" is a keyword which is a pointer to the object which
// invokes the member function.

#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }
    void getData(void)
    {
        cout << "The value of a is: " << a << endl;
    }
};
int main()
{
    A a;
    a.setData(4);
    a.getData();
    return 0;
}
