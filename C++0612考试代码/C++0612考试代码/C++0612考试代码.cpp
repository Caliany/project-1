////1.���һ����DateInfo��Ҫ����һ���޲����Ĺ��캯�������ʼ���꣬�£��շֱ�Ϊ��2019,6,12
////��һ���������Ĺ��캯����������ֱ��Ӧ�꣬�£��ա�
////��һ����Ա����ʵ�����ڵ�����
////��һ����Ա����ʵ���������
////��һ����Ա����ʵ�����ڵĻ�ȡ
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

//2./����һ��������CShape������һ�����麯��GetLength();�������ı�����CSquare��Բ��CCircle��
//�������������غ���GetLength(),������Բ�ε��ܳ�,��д���Գ�����в��ԡ�
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
