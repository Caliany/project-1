/*1.
static��Ա
�������Ϊstatic�����Ա��Ϊ��ľ�̬��Ա����static���εĳ�Ա��������Ϊ��̬��Ա��������static���εĳ�Ա��������Ϊ��̬��Ա������
��̬�ĳ�Ա����һ��Ҫ��������г�ʼ��
1.��̬��ԱΪ���������������������ĳ�������ʵ��
2.��̬��Ա�������������ⶨ�壬����ʱ�����static�ؼ���
3.�ྲ̬��Ա����������������̬��Ա���߶��󣬾�̬��Ա������
4.��̬��Ա����û�����ص�thisָ�룬���ܷ����κηǾ�̬��Ա
5.��̬��Ա�������ͨ�ĳ�Աһ����Ҳ��public,protected,private3�ַ��ʼ���Ҳ���Ծ��з���ֵ��

�����⡿��
1.��̬��Ա�������Ե��÷Ǿ�̬��Ա������---������
2.�Ǿ�̬��Ա�������Ե�����ľ�̬��Ա������---���Ե�

*/

#include <iostream>
using namespace std;
class A
{
public:
	A() { ++_scount; }
	A(const A& t) { ++_scount; }
	static int GetACount() { return _scount; }
private:
	static int _scount;
};
int A::_scount = 0;
int main()
{
	cout << A::GetACount() << endl;
	A a1, a2;
	A a3(a1);
	cout << A::GetACount() << endl;
	system("pause");
	return 0;
}

/*2.
��Ա��ʼ��
�Ǿ�̬��Ա����������ʱ���г�ʼ����ֵ����Ҫע�����ﲻ�ǳ�ʼ�����Ǹ������ĳ�Ա����ȱʡֵ��
*/
#include <iostream>
using namespace std;
class B
{
public:
	B(int b = 0)
		:_b(b)
	{}
	int _b;
};
class A
{
public:
	void Print()
	{
		cout << a << endl;
		cout << b._b << endl;
		cout << p << endl;
	}
private:
	// �Ǿ�̬��Ա�����������ڳ�Ա����ʱ��ȱʡֵ��
	int a = 10;
	B b = 20;
	int* p = (int*)malloc(4);
	static int n;
};
int A::n = 10;
int main()
{
	A a;
	a.Print();
	system("pause");
	return 0;
}

