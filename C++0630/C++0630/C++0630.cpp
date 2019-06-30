/*3.友元
友元：友元函数和友元类
友元提供了一种突破封装的方式，有时提供了便利。但是友元会增加耦合度，破坏了封装，所以友元不宜多用。
友元函数
问题：现在我们尝试去重载operator<<，然后发现我们没办法将operator<<重载成成员函数。因为cout的
输出流对象和隐含的this指针在抢占第一个参数的位置。this指针默认是第一个参数也就是左操作数了。但是
实际使用中cout需要是第一个形参对象，才能正常使用。所以我们要将operator<<重载成全局函数。但是这
样的话，又会导致类外没办法访问成员，那么这里就需要友元来解决。
友元函数可以直接访问类的私有成员；它是定义在类外部的普通函数，不属于任何类，但需要在类的内部声明，声明时需要加friend关键字。
*/
/*
1> 友元函数可访问类的私有成员，但不是类的成员函数；
2> 友元函数不能用const修饰；
3> 友元函数可以在类定义的人和地方声明，不受类访问限定符限制；
4> 一个函数可以是多个类的友元函数；
5> 友元函数的调用与普通函数的调用和原理相同。
友元函数的优缺点：
	优点：提高程序效率；
	缺点：破坏了类的封装性；
*/
#include <iostream>
using namespace std;
class Time{
	friend void TestFunc();
public:
	Time(int hour = 0, int minute = 0, int second = 0)
		: _hour(hour)
		, _minute(minute)
		, _second(second)
	{}
private:
	int _hour;
	int _minute;
	int _second;
};
class Date
{
	//既是时间又是日期的友元函数
	friend ostream& operator<<(ostream& _cout, const Date& d);//友元函数
	friend void TestFunc();
public:
	Date(int year, int month, int day)
		: _year(year)
		, _month(month)
		, _day(day)
	{}
	void PrintDate()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	/*
	不能重载成类的成员函数
	因为运算符重载的第一个参数必须是ostream的对象
	而如果将其重载成类的成员，他的第一个参数就是隐藏的
	后果：打印对象方式和常规打印相反
	*/
private:
	int _year;
	int _month;
	int _day;
};
ostream& operator<<(ostream& _cout, const Date& d)
{
	cout << d._year << "-" << d._month << "-" << d._day << endl;
	return _cout;
}
void TestFunc()
{
	Date d(2019, 6, 30);
	Time t(13, 7, 31);

	d._day = 1;
	t._minute = 7;
}
int main()
{
	Date d(2017, 12, 24);
	d.PrintDate();

	//d << cout;
	cout << d;
	system("pause");
	return 0;
}
/*
1.友元关系是单向的，不具有交换性；
比如上述Time类和Date类，在Time类中声明Date类为其友元类，那么可以在Date类中直接访问Time
类的私有成员变量，但想在Time类中访问Date类中私有的成员变量则不行。
2.友元关系不能传递【友元关系也不能继承】；
如果B是A的友元，C是B的友元，则不能说明C时A的友元。
*/