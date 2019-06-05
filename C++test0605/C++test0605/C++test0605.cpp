//2.将3行4列的二维数组中a的每一个元素行列互换，保存在另一个4行3列的二维数组中
#include "iostream"
using namespace std;
void main(){
	int a[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10,11}, i, j;
	int b[4][3];
	cout << "Array A" << endl;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			cout << a[i][j] << " ";
			b[j][i] = a[i][j];
		}
		cout << endl;
	}
	cout << "Array B" << endl;
	for (i = 0; i < 4; i++){
		for (j = 0; j < 3; j++)
			cout << b[i][j] << " ";
			cout << endl;
		}
		system("pause");
	}

//3.
#define _CRT_SECURE_NO_WARNINGS 
#include "iostream"
using namespace std;
void main(){
	double a, b, c, delta, p, q;
	cout << "please input a,b,c= ";
	cin >> a >> b >> c;
	delta = b*b - 4 * a*c;
	p = -b / (2 * a);
	q = sqrt(fabs(delta)) / (2 * a);
	if (delta > 0)
		cout << "两个实根为：\nx1=" << p + q << endl << "x2=" << p - q << endl;
	else
	if (delta == 0)
		cout << "两个实根为:x1=x2=" << p << endl;
	else{
		cout << "两个虚根为：";
		cout << endl << "x1=" << p << "+j" << q;
		cout << endl << "x2=" << p << "-j" << q << endl;
	}
	system("pause");
}

//4.
#define _CRT_SECURE_NO_WARNINGS 
#include "cstring"
#include "iostream"
using namespace std;
class Person{
private:
	char m_strName[20];
	int m_nAge;
	int m_nSex;
public:
	Person(){        //构造函数 
		strcpy(m_strName, "XXX");
		m_nAge = 0;
		m_nSex = 0;
	}
	~Person(){      //析构函数  
		cout << "Now destroying the instance of Person" << endl;
	}
	void Register(char *name, int age, char sex);
	char *GetName();
	int GetAge();
	char GetSex();
	void ShowPerson();
};
void  Person::Register(char *name, int age, char sex){
	strcpy(m_strName, name);
	m_nAge = age;
	m_nSex = (sex == 'm' ? 0 : 1);
}
char *Person::GetName(){
	return m_strName;
}
int Person::GetAge() {
	return m_nAge;
}
char Person::GetSex()  {
	return(m_nSex == 0 ? 'm' : 'f');
}
void  Person::ShowPerson()  {
	cout << GetName() << '\t' << GetAge() << '\t' << GetSex() << endl;
}
void main()  {
	Person person1, person2;   //创建对象时自动调用构造函数	  
	cout << "person1:\t";
	person1.ShowPerson();
	person1.Register("Zhang3", 19, 'm');
	cout << "person1:\t";
	person1.ShowPerson();
	cout << "person2:\t";
	person2.ShowPerson();
	person2 = person1;
	cout << "person2:\t";
	person2.ShowPerson();
	system("pause");
}