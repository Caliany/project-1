/*
char		�ַ���������
short		������
int			����
long		������
long long	����������
float		�����ȸ�����
double		˫���ȸ�����
*/
//1.�ٶ�2015��ϵͳ�����Ǳ����⣺
#include <stdio.h>
int check_sys(){
	int i = 1;
	return (*(char *)&i);
}
int main(){
	int ret = check_sys();
	if (ret == 1){
		printf("С��\n");
	}
	else{
		printf("���\n");
	}
	system("pause");
	return 0;
}

//2.
#include <stdio.h>
int check_sys()
{
	union
	{
		int i;
		char c;
	}un;
	un.i = 1;
	return un.c;
}
int main(){
	int ret = check_sys();
	if (ret == 1){
		printf("С��\n");
	}
	else{
		printf("���\n");
	}
	system("pause");
	return 0;
}

//3.
//���ʲô��
#include <stdio.h>
int main(){
	char a = -1;//���-1
	signed char b = -1;//���-1
	unsigned char c = -1;//���255
	printf(" a=%d\n b=%d\n c=%d\n", a, b, c);
	system("pause");
	return 0;
}

//4.
#include <stdio.h>
int main(){
	char a = -128;//���
	printf("%u\n", a);
	system("pause");
	return 0;
}
