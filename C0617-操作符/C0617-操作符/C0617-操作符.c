//1.���ܴ�����ʱ�������������������ʵ���������Ľ�����
#include <stdio.h>

int main(){
	int a = 10;
	int b = 20;
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a = %d b = %d\n", a, b);
	system("pause");
	return 0;
}

//2.��һ�������洢���ڴ��ж�������1�ĸ���
#include <stdio.h>
//����1������������������
int main(){
	int a = 10;
	int count = 0;//����
	while (a){
		if (a % 2 == 1)
			count++;
		a = a / 2;
	}
	printf("��������1�ĸ��� = %d\n", count);
	system("pause");
	return 0;
}

//����2
#include <stdio.h>
int main(){
	int num = -1;
	int i = 0;
	int count = 0;//����
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
			count++;
	}
	printf("��������1�ĸ��� = %d\n", count);
	system("pause");
	return 0;
}

//����3���Ż���
#include <stdio.h>
int main(){
	int num = -1;
	int i = 0;
	int count = 0;//����
	while (num){
		count++;
		num = num&(num - 1);
	}
	printf("��������1�ĸ��� = %d\n", count);
	system("pause");
	return 0;
}