//1.������Ƕ��
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

//2.��ʽ���ʣ���һ�������ķ���ֵ��Ϊ����һ�������Ĳ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
	char arr[20] = "haha";
	int ret = strlen(strcat(arr, "nihaoya~"));
	printf("%d\n", ret);//��ӡ�ַ�������
	system("pause");
	return 0;
}