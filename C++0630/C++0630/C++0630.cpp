/*3.��Ԫ
��Ԫ����Ԫ��������Ԫ��
��Ԫ�ṩ��һ��ͻ�Ʒ�װ�ķ�ʽ����ʱ�ṩ�˱�����������Ԫ��������϶ȣ��ƻ��˷�װ��������Ԫ���˶��á�
��Ԫ����
���⣺�������ǳ���ȥ����operator<<��Ȼ��������û�취��operator<<���سɳ�Ա��������Ϊcout��
����������������thisָ������ռ��һ��������λ�á�thisָ��Ĭ���ǵ�һ������Ҳ������������ˡ�����
ʵ��ʹ����cout��Ҫ�ǵ�һ���βζ��󣬲�������ʹ�á���������Ҫ��operator<<���س�ȫ�ֺ�����������
���Ļ����ֻᵼ������û�취���ʳ�Ա����ô�������Ҫ��Ԫ�������
��Ԫ��������ֱ�ӷ������˽�г�Ա�����Ƕ��������ⲿ����ͨ�������������κ��࣬����Ҫ������ڲ�����������ʱ��Ҫ��friend�ؼ��֡�
*/
/*
1> ��Ԫ�����ɷ������˽�г�Ա����������ĳ�Ա������
2> ��Ԫ����������const���Σ�
3> ��Ԫ�����������ඨ����˺͵ط�����������������޶������ƣ�
4> һ�����������Ƕ�������Ԫ������
5> ��Ԫ�����ĵ�������ͨ�����ĵ��ú�ԭ����ͬ��
��Ԫ��������ȱ�㣺
	�ŵ㣺��߳���Ч�ʣ�
	ȱ�㣺�ƻ�����ķ�װ�ԣ�
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
	//����ʱ���������ڵ���Ԫ����
	friend ostream& operator<<(ostream& _cout, const Date& d);//��Ԫ����
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
	�������س���ĳ�Ա����
	��Ϊ��������صĵ�һ������������ostream�Ķ���
	������������س���ĳ�Ա�����ĵ�һ�������������ص�
	�������ӡ����ʽ�ͳ����ӡ�෴
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
1.��Ԫ��ϵ�ǵ���ģ������н����ԣ�
��������Time���Date�࣬��Time��������Date��Ϊ����Ԫ�࣬��ô������Date����ֱ�ӷ���Time
���˽�г�Ա������������Time���з���Date����˽�еĳ�Ա�������С�
2.��Ԫ��ϵ���ܴ��ݡ���Ԫ��ϵҲ���ܼ̳С���
���B��A����Ԫ��C��B����Ԫ������˵��CʱA����Ԫ��
*/