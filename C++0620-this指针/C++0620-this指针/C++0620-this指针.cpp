#include <iostream>
//1.�ȶ���һ��������Date
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
1.C++��������ÿ������Ա����������һ�����ص�ָ�����[thisָ��]��
�ø�ָ��ָ��ǰ����(��������ʱ���øú����Ķ���),�����û��ı�������
����ͨ��thisָ��ȥ���ʵġ�
2.thisָ�ŵ����ԣ�
thisָ���ǳ�Ա������һ��������ָ���βΣ�һ������ɱ�����ͨ��ext�Ĵ���
�Զ����ݣ�����Ҫ�û����ݡ�
*/

//2.�����⣺�۲�������룬��������Ϊʲô������
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