//1.һά�����ʹ��
#include <stdio.h>
int main0(){
	int arr[10] = { 0 };//����Ĳ���ȫ��ʼ��
	//
	//���������Ԫ�ظ���
	int sz = sizeof(arr) / sizeof(arr[0]);
	//���������ݸ�ֵ��������ʹ���±������ʵģ���0��ʼ������
	int i = 5;//���±�
	for (i = 0; i < 10; i++){
		arr[i] = i;
	}
	//������������
	for (i = 0; i < 10; ++i){
		printf("%d", arr[i]);
	}
	system("pause");
	return 0;
}

2.һά�������ڴ��е�ʹ��
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

//3.��ά�����ʹ��
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

