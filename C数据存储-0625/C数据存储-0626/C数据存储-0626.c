/*
char		字符数据类型
short		短整型
int			整形
long		长整形
long long	更长的整形
float		单精度浮点数
double		双精度浮点数
*/
//1.百度2015年系统工程是笔试题：
#include <stdio.h>
int check_sys(){
	int i = 1;
	return (*(char *)&i);
}
int main(){
	int ret = check_sys();
	if (ret == 1){
		printf("小端\n");
	}
	else{
		printf("大端\n");
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
		printf("小端\n");
	}
	else{
		printf("大端\n");
	}
	system("pause");
	return 0;
}

//3.
//输出什么？
#include <stdio.h>
int main(){
	char a = -1;//输出-1
	signed char b = -1;//输出-1
	unsigned char c = -1;//输出255
	printf(" a=%d\n b=%d\n c=%d\n", a, b, c);
	system("pause");
	return 0;
}

//4.
#include <stdio.h>
int main(){
	char a = -128;//溢出
	printf("%u\n", a);
	system("pause");
	return 0;
}
