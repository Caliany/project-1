//1.
#include <iostream>
using namespace std;
class Base{
public:
	virtual void Fun() //virtual
	{
		cout << "Base::Fun" << endl;
	}
};
class Derived :public Base{
public:
	void Fun()
	{
		cout << "Derived::Fun" << endl;
	}
};
int main0(){
	Base a, *pb;
	Base b;
	//Derived b;
	// 调用派生类的成员函数Fun()，以实现动态多态
	pb = &b;  
	pb->Fun();
	system("pause");
	return 0;
}


//2.
#include <iostream>
using namespace std;
class A{
	int a;

public:
	A(int aa = 0){ a = aa; }
	~A()
	{
		cout << "Destructor A!=" << a << endl;
	}
};
class B :public A{
	int b;

public:
	B(int aa = 0,int bb = 0):A(aa){ b = bb; }
	~B()
	{
		cout << "Destructor B!=" << b << endl;
	}
};
int main(){

	B x(5), y(6, 7);
	system("pause");
	return 0;
}