#include <iostream>
using namespace std;

// class parent
// tambahkan final sesudah nama class
// untuk mencegah adanya overridind

class baseClass
{
public:
	virtual void perkenalan()
	{
		cout << "Hallo saya Function dari base class";
	}
};
class derivedClass : public baseClass
{
	void perkenlan()
	{
		cout << "Hallo saya Function dari derived class";
	}
};
int main()
{
	derivedClass a;
	a.perkenalan();

	return 0;
}

