#include <iostream>
using namespace std;

class room
{
private:
    double length;
    double breadth; // Data Member
    double height;

public:
    room(double len, double wid, double hei)
    {
        cout << "Constructor Has Been Initialized" << endl; // Parameterized Constructor
        length = len;
        breadth = wid; // Accesing Private
        height = hei;
    }
    double calculateArea()
    {
        cout << "Area Of Room:-" << length * breadth << endl;
    }

    double calculateVolume() // Member Function
    {
        return length * breadth * height;
    }
};
int main()
{
    // Object And Classes
    room room1(11.1, 21.2, 13.4);
    room room2(31.1, 41.2, 23.4);

    room1.calculateArea();
    room2.calculateArea();
    // cout << "Area Of Room:-" << a1.calculateArea()<<endl;
    // cout << "Volume Of Room:-" << a1.calculateVolume();
    return 0;
}