////1.设计一个类DateInfo，要求：有一个无参数的构造函数，其初始的年，月，日分别为：2019,6,12
////有一个带参数的构造函数，其参数分别对应年，月，日。
////有一个成员函数实现日期的设置
////有一个成员函数实现输出日期
////有一个成员函数实现日期的获取
//#include <iostream>
//using namespace std;
//class DateInfo{
//private:
//	int year, month, day;
//public:
//	DateInfo() :year(2019), month(6), day(12){}
//	DateInfo(int y, int m, int d) :year(y), month(m), day(d){}
//	void Set(int y, int m, int d){
//		year = y;
//		month = m;
//		day = d;
//	}
//	void Show()
//	{
//		cout << year << "/" << month << "/" << day << endl;
//	}
//};
//int main(){
//	DateInfo d1, d2(1996, 1, 1);
//	d1.Show();// 2019/6/12
//	d2.Show();// 1996/1/1
//	d2.Set(2019, 1, 1);
//	d2.Show();//  2019/1/1
//	system("pause");
//	return 0;
//}

//2./定义一个抽象类CShape，它有一个纯虚函数GetLength();派生出四边形类CSquare和圆类CCircle，
//在派生类中重载函数GetLength(),用于求圆形的周长,编写测试程序进行测试。
#include <iostream>
using namespace std;

class CShape{
public:
	virtual double Getlength() const = 0;
};

class CSquare :public CShape{
public:
	CSquare(double dWidth, double dHeight){
		m_dWidth = dWidth;
		m_dHeigth = dHeight;
	}
	double Getlength() const{
		return 2 * (m_dWidth + m_dHeigth);
	}
private:
	double m_dWidth, m_dHeigth;
};

class CCircle:public CShape{
public:
	CCircle(double dRadius){
		m_dRadius = dRadius;
	}
	double Getlength()const{
		return 3.1415926 * m_dRadius * m_dRadius;
	}
private:
	double m_dRadius;
};

int main(){
	CSquare oSquare(3, 3);
	cout << oSquare.Getlength() << endl;
	CCircle oCircle(100);
	cout << oCircle.Getlength() << endl;

	system("pause");
	return 0;
}
