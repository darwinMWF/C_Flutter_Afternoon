// C++ program to demonstrate the working of private inheritance

#include <iostream>
using namespace std;

class Base
{
private:
  int pvt = 1;

protected:
  int prot = 2;

public:
  int pub = 3;
  int pt;
  // function to access private member
  int getPVT(int pt)
  {
    pvt = pt;
  }
  int prin()
  {
    return pvt;
  }
};

class PrivateDerived : private Base
{
public:
  // function to access protected member from Base
  int getProt()
  {
    return prot;
  }

  // function to access private member
  int getPub()
  {
    return pub;
  }
};

int main()
{
  PrivateDerived object1;
  cout << "Private cannot be accessed." << endl;
  cout << "Protected = " << object1.getProt() << endl;
  cout << "Public = " << object1.getPub() << endl;
  return 0;
}