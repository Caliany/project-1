//1.一维数组的使用
#include <stdio.h>
int main0(){
	int arr[10] = { 0 };//数组的不完全初始化
	//
	//计数数组的元素个数
	int sz = sizeof(arr) / sizeof(arr[0]);
	//对数组内容赋值，数组是使用下标来访问的，从0开始，所以
	int i = 5;//做下标
	for (i = 0; i < 10; i++){
		arr[i] = i;
	}
	//输出数组的内容
	for (i = 0; i < 10; ++i){
		printf("%d", arr[i]);
	}
	system("pause");
	return 0;
}

2.一维数组在内存中的使用
#include <stdio.h>

int main(){
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i){

		printf("&arr[%d] = %p\n", i, &arr[i]);
	}
	system("pause");
	return 0;
}

//3.二维数组的使用
#include <stdio.h>

int main(){
	int arr[4][5] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++){
		int j = 0;
		for (j = 0; j < 4; j++){
			arr[i][j] = i * 4 + j;
		}
	}
		for (i = 0; i < 3; i++){
			int j = 0;
			for (j = 0; j < 4; j++){
				printf("%d", arr[i][j]);
			}
		}
		system("pause");
		return 0;
	}

