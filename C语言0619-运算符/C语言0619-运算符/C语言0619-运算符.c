//1.ǰ��++��--�����
#include <stdio.h>

int main(){
	int a = 10;
	int x = ++a;
	//�ȶ�a����������Ȼ���ʹ��a,Ҳ���Ǳ��ʽ��ֵ��a����֮���ֵ��x=11.
	int x = --a;
	//�ȶ�a�����Լ���Ȼ���ʹ��a,Ҳ���Ǳ��ʽ��ֵ��a����֮���ֵ��y=10.
	int y = --a;
	system("pause");
	return 0;
}
//1.
#include <stdio.h>

int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	//i = a++||++b||d++;
	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
	system("pause");
	return 0;
}
//2.
#include <stdio.h>

int main()
{
	int i = 10;
	i = i-- - --i * (i = -3) * i++ + ++i;
	printf("i = %d\n", i);
	system("pause");
	return 0;
}
//3.
#include <stdio.h>
int fun()
{
	static int count = 1;
	return ++count;
}
int main()
{
	int answer;
	answer = fun() - fun() * fun();
	printf("%d\n", answer);//���-10
	system("pause");
	return 0;
}
