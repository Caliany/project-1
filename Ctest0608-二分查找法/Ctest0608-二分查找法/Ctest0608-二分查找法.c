//1.���ֲ���
#include <stdio.h>
int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0])- 1;
	int key = 6;
	int mid = 0;
	while (left <= right){
		mid = (left + right) / 2;
		if (arr[mid] > key){
			right = mid - 1;
		}
		else if (arr[mid] < key){
			left = mid + 1;
		}
		else
			break;
	}
	if (left <= right)
		printf("�ҵ��ˣ��±���%d\n", mid);
	else
		printf("�Ҳ���\n");
	system("pause");
	return 0;
}



//2.����ʵ�ֶ��ֲ���
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int BinSearch(int arr[], int key, int len){
	int ret = -1;
	int left = 0;
	int right = len - 1;
	while (left <= right){ // ����һ����<=,����ֻ��<
		int mid = (left + right) >> 1;
		if (arr[mid] > key){
			right = mid - 1;
		}
		else if (arr[mid] < key){
			left = mid + 1;
		}
		else{
			ret = mid;
			break;
		}
	}
	return ret;
}
int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 13, 18, 26, 32, 49 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int key = 6;
	scanf("%d", &key);
	int ret = BinSearch(arr, key, size);
	if (ret != -1){
		printf("%d�ڵ�%d��λ��\n", key, ret);
	}
	else{
		printf("������\n");
	}
	system("pause");
	return 0;
}