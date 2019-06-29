/*1.
static成员
概念：声明为static的类成员称为类的静态成员，用static修饰的成员变量，称为静态成员变量；用static修饰的成员函数，称为静态成员函数。
静态的成员变量一定要在类外进行初始化
1.静态成员为所有类对象所共享，不属于某个具体的实例
2.静态成员变量必须在类外定义，定义时不添加static关键字
3.类静态成员即可用类名：：静态成员或者对象，静态成员来访问
4.静态成员函数没有隐藏的this指针，不能访问任何非静态成员
5.静态成员和类的普通的成员一样，也有public,protected,private3种访问级别，也可以具有返回值。

【问题】：
1.静态成员函数可以调用非静态成员函数吗？---不可以
2.非静态成员函数可以调用类的静态成员函数吗？---可以的

*/

#include <iostream>
using namespace std;
class A
{
public:
	A() { ++_scount; }
	A(const A& t) { ++_scount; }
	static int GetACount() { return _scount; }
private:
	static int _scount;
};
int A::_scount = 0;
int main()
{
	cout << A::GetACount() << endl;
	A a1, a2;
	A a3(a1);
	cout << A::GetACount() << endl;
	system("pause");
	return 0;
}

/*2.
成员初始化
非静态成员变量在声明时进行初始化赋值，但要注意这里不是初始化，是给声明的成员变量缺省值。
*/
#include <iostream>
using namespace std;
class B
{
public:
	B(int b = 0)
		:_b(b)
	{}
	int _b;
};
class A
{
public:
	void Print()
	{
		cout << a << endl;
		cout << b._b << endl;
		cout << p << endl;
	}
private:
	// 非静态成员变量，可以在成员声明时给缺省值。
	int a = 10;
	B b = 20;
	int* p = (int*)malloc(4);
	static int n;
};
int A::n = 10;
int main()
{
	A a;
	a.Print();
	system("pause");
	return 0;
}

