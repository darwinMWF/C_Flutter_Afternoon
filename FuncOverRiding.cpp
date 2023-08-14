#include <iostream>
using namespace std;
class area1
{
public:
    int area(int width ,int length)
    {
        cout << "Area Of Square Is:= " << length * length << endl;
    }
};
class area2 : public area1
{
public:
    int area(int width ,int length)
    {
        cout << "Area Of Rectangle Is:- " << length * width << endl;
        area1::area( width , length);
    }
    
};
int main()
{
    area2 a;
 

    // a.area1::area(10,12); // :: is Scope Operator
    a.area(10,12);
    return 0;
}