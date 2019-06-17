//1.不能创建临时变量（第三格变量），实现两个数的交换。
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

//2.求一个整数存储在内存中二进制中1的个数
#include <stdio.h>
//方法1：这个程序是有问题的
int main(){
	int a = 10;
	int count = 0;//计数
	while (a){
		if (a % 2 == 1)
			count++;
		a = a / 2;
	}
	printf("二进制中1的个数 = %d\n", count);
	system("pause");
	return 0;
}

//方法2
#include <stdio.h>
int main(){
	int num = -1;
	int i = 0;
	int count = 0;//计数
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
			count++;
	}
	printf("二进制中1的个数 = %d\n", count);
	system("pause");
	return 0;
}

//方法3：优化后
#include <stdio.h>
int main(){
	int num = -1;
	int i = 0;
	int count = 0;//计数
	while (num){
		count++;
		num = num&(num - 1);
	}
	printf("二进制中1的个数 = %d\n", count);
	system("pause");
	return 0;
}