#include <stdio.h>

int main(){
	int n = 1;
	int m = 2;
	switch (n){
	case 1:
		m++;//3
	case 2:
		n++;//2
	case 3:
		switch (n){
		//switch允许嵌套使用
		case 1:
			n++;//不执行
		case 2:
			m++;//4
			n++;//3
			break;
		}
	case 4:
		m++;//5
		break;
	default:
		break;
	}
	printf("m=%d,n=%d\n", m, n);
	system("pause");
	return 0;
}


int main(){
	int i = 0;
	while (i <= 10){
		if (i == 5)
			break;
		printf("%d\n", i);//0,1,2,3,4
		i = i + 1;	
	}
	system("pause");
	return 0;
}