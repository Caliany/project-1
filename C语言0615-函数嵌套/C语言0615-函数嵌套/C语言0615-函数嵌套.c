//1.函数的嵌套
#include <stdio.h>

void lion(){
	printf("xixi\n");
}
void tiger(){
	int i ;
	for (i = 1; i < 5; i++){
		lion();
	}
}
int main(){

	lion();
	tiger();
	system("pause");
	return 0;
}

//2.链式访问：把一个函数的返回值作为另外一个函数的参数
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
	char arr[20] = "haha";
	int ret = strlen(strcat(arr, "nihaoya~"));
	printf("%d\n", ret);//打印字符串长度
	system("pause");
	return 0;
}