#include <iostream>
using namespace std;

class baseClass
{
public:
    virtual void perkenalan() final
    {
     cout << "Hallo saya Function dari base class";
    }
};

class derivedClass : public baseClass
{
public:
  void perkenalan() 
  {
    cout << "Halo saya function dari darived class";
  }
};

int main()
{
    derivedClass a;
    a.perkenalan();

    return 0;
}