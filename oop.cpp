#include <iostream>
using namespace std;
class room
{
public:
    double length;
    double breadth; // Data Member
    double height;

    double calculateArea()
    {
        cout << "Area Of Room:-" << length * breadth;
    }

    double calculateVolume() // Member Function
    {
        return length * breadth * height;
    }
};
int main()
{
    // Object And Classes
    room a1;

    a1.length = 10.00;
    a1.breadth = 12.12;
    a1.height = 13.12;

    a1.calculateArea();
    // cout << "Area Of Room:-" << a1.calculateArea()<<endl;
    // cout << "Volume Of Room:-" << a1.calculateVolume();
    return 0;
}