//1.从头和尾分别开始向中间显示数据

#include <stdio.h>
int main()
{
	char arr1[] = "welcome to bit...";
	char arr2[] = "#################";
	int left = 0;
	int right = strlen(arr1) - 1;
	printf("%s\n", arr2);
	//while循环实现
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
	}
	//for循环实现
	for (left = 0, right = strlen(arr2)- 1;
		left <= right;
		left++, right--)
	{
	
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
	}
	system("pause");
	return 0;
}

//2.
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

int main(){
	char psw[10] = "";
	int i = 0;
	for (i = 0; i < 3; ++i){
		printf("please input:");
		scanf("%s", psw);
		if (strcmp(psw, "password") == 0)
			break;
	}
	if (i == 3)
		printf("exit\n");
	else
		printf("log in\n");
	system("pause");
	return 0;
}

//3.一个简单的关机程序
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

int main(){
	char input[10] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("电脑将1分钟内关机，如果输入：123，就取消关机！\n请输入：>");
	scanf("%s", input);
	if (0 == strcmp(input, "123")){
		system("shutdown -a");
	}
	else{
		goto again;
	}
	system("pause");
	return 0;
}