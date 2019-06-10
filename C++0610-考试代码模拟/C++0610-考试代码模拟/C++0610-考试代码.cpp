//1.若有以下程序：
#include <iostream>
using namespace std;

class Point{
	int x, y;
public:
	Point(){ x = 0; y = 0; }
	void SetPoint(int x1, int y1){ x = x1; y = y1; }
	void DisPoint()
	{
		cout << "x=" << x << "," << "y=" << y << endl;
	}
};
int main(){
	Point *p = new Point;
	p->SetPoint(5, 12);//结果输出：x=5,y=12
	p->DisPoint();
	delete p;
	system("pause");
	return 0;
}

//2.
#include <iostream>
using namespace std;
class Base{
public:
	void Fun()
	{
		cout << "1" << endl;
	}
};
class Derived :public Base{
public:
	void Fun()
	{
		cout << "2" << endl;
	}
};
int main(){
	Derived a;
	Base *p;
	p = &a;
	p->Fun();
	a.Fun();//结果输出为：1  2
	system("pause");
	return 0;
}