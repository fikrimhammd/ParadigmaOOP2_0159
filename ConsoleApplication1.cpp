#include <iostream>
using namespace std;

class seseorang
{
public:
	virtual void pesan() = 0;
	//virtual function biasa
	//{
	//    cout << "pesan dari sesorang" << endl;
	//}
};

class joko : public seseorang
{
public:
	// deklarasi
	void pesan()
	{
		// implementasi
		cout << "pesan dari joko" << endl;
	}
};

