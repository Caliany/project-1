//1.
#include <stdio.h>
int main(){
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++){
		a[i] = -1 - i;
	}
	printf("%d\n", strlen(a));
	system("pause");
	return 0;
}

//2.
#include <stdio.h>
int main(){
	/*unsigned*/ int i;//�޷�������������ζ�ţ�����ȡֵ��ΧΪ0~255;
	for (i = 9; i >=0; i--){
		printf("%u\n", i);
	}
	system("pause");
	return 0;
}