#include <iostream>
using namespace std;
class Date{
public:
	//explicit:专门用来修饰构造函数，禁止单参构造函数进行类型转换
	//使代码可读性变差
	//explicit Date(int year)  带explicit，main函数里面会出错
	 Date(int year)
		: _year(year)
		, _month(1)
		, _day(1)
	{
		cout << "Date(int)" << endl;
	}
	Date& operator=(const Date &d){  //有返回值，const：赋值期间不改变d的内容
		cout << this << "-" << &d << endl;
		if (this != &d){
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}
	~Date(){
		cout << "~Date():" << this << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main(){
	Date d(2019);
	/*
	编译器使用Date类的构造函数，将2018转换为无名日期
	使用无名对象给对象d赋值
	对于单参构造函数，可以进行类型转换
	*/
	d = 2018;//无名对象
	system("pause");
	return 0;
}