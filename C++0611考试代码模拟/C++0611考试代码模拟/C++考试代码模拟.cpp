//1.
#include <iostream>
using namespace std;
class Point {
public://公有段
	Point(int x = 0, int y = 0) :m_x(x), m_y(y){}
	int GetX()const{ return m_x; }
	int GetY()const{ return m_y; }
	void SetX(int x){ m_x = x; }
	void SetY(int y){ m_y = y; }

private://私有段
	int m_x;	//x坐标
	int m_y;	//y坐标

};
int main(void){
	Point oPoint1;
	const Point oPoint2(3, 4);
	cout << oPoint1.GetX() << endl;//0
	oPoint1.SetX(1);
	cout << oPoint1.GetX() << endl;//1
	oPoint1.SetY(2);
	cout << oPoint1.GetY() << endl;//2
	cout << oPoint2.GetX() << endl;//3
	cout << oPoint2.GetY() << endl;//4
	//输出结果0,1,2,3,4
	system("pause");
	return 0;
}

//2.
#include <iostream>
using namespace std;

class A{
	int a, b;
public:
	A(){ a = b = 0; }
	A(int aa, int bb){
		a = aa;
		b = bb;
		cout << a << " " << b << endl;
	}
};
int main(){
	A x, y(2, 3);
	system("pause");//输出2 3
	return 0;
}