#include <iostream>
//1.先定义一个日期类Date
using namespace std;
class Date{
public:
	void Display()
	{
		cout << _year << "-" << _month << "-" << _day << endl;

	}
	void SetDate(int year, int month, int day){
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main(){
	Date d1, d2;
	d1.SetDate(1996, 1, 1);
	d2.SetDate(2019, 10, 10);
	d1.Display();
	d2.Display();
	system("pause");
	return 0;
}

/*
1.C++编译器给每个“成员函数”增加一个隐藏的指针参数[this指针]，
让该指针指向当前对象(函数运行时调用该函数的对象),所有用户的变量操作
都是通过this指针去访问的。
2.this指着的特性：
this指针是成员函数第一个隐含的指针形参，一般情况由编译器通过ext寄存器
自动传递，不需要用户传递。
*/

//2.面试题：观察下面代码，分析程序为什么崩溃？
#include <iostream>
using namespace std;
class Date{
public:
	void PrintA(){
		cout << _a << endl;
	}
	void Show(){
		cout << "Show()" << endl;
	}
private:
	int _a;
};

int main(){
	Date* p = NULL;
	p->PrintA();
	p->Show();
	system("pause");
	return 0;
}