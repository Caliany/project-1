#include <iostream>
using namespace std;
class Date{
public:
	//explicit:ר���������ι��캯������ֹ���ι��캯����������ת��
	//ʹ����ɶ��Ա��
	//explicit Date(int year)  ��explicit��main������������
	 Date(int year)
		: _year(year)
		, _month(1)
		, _day(1)
	{
		cout << "Date(int)" << endl;
	}
	Date& operator=(const Date &d){  //�з���ֵ��const����ֵ�ڼ䲻�ı�d������
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
	������ʹ��Date��Ĺ��캯������2018ת��Ϊ��������
	ʹ���������������d��ֵ
	���ڵ��ι��캯�������Խ�������ת��
	*/
	d = 2018;//��������
	system("pause");
	return 0;
}