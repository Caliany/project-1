/*
类和对象：
1.如何定义类
2.访问限定符
3.一个类就是一个作用域
4.如何求一个类的大小----空类的大小
5.this指针
6.类中六个默认的成员函数
	构造、 拷贝函数、赋值运算符重载、析构函数
	1.概念 2.性质 3.调用场景 4.关于编译器生成的默认函数
7.运算符重载
8.const类型成员---const类型的成员函数

成员变量在类中声明次序的规则：
按照成员变量在类中的声明次序来进行初始化的，而不是按照其在初始化列表中出现的先后次序初始化的。
建议:  尽量不要使用成员初始化成员，成员变量最好按照其在类中声明次序来初始化。
*/

//1.构造函数
#include <iostream>
//时间类的构造函数，非缺省类的函数
class Time{
public:
	Time(int hour, int minute, int second)
		: _hour(hour)
		, _minute(minute)
		, _second(second)
	{}
private:
	int _hour;
	int _minute;
	int _second;
};
//在日期类中包含一个时间类的对象，
class Date
{
public:
	//初始化列表作用：初始化的成员变量
	//类中的成员变量在初始化的位置只能出现一次
	Date(int year, int month, int day)
		: _year(year)
		, _month(month)
		, _day(day)
		, _a(year)
		, _c(year)
		, _t(0,0,0) //无参的构造函数,如果用户没有显示初始化，编译器自动调用Time中的无参的构造函数，
					//因为Time中已经定义了带有参数的构造函数编译器将不会生成构造函数，_t编译失败
	{}
	//{
	//	//函数中是赋值，赋值可以赋值多次
	//	_year = year;
	//	_month = month;
	//	_day = day;
	//	_a = year; 这一句不是初始化，而是赋值
	//}
private:
	int _year;
	int _month;
	int _day;
	int& _a;
	const int _c;
	Time _t;
};
int main(){
	system("pause");
	return 0;
}
