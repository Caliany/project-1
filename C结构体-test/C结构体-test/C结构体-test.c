//�ṹ��ָ�����ָ������ĳ�Ա����ʱ�����ǵõ��Ĳ���һ���ṹ�����������ָ��һ���ṹ���ָ�롣
//1.
#include <stdio.h>
struct Stu{
	char name[20];
	int age;
};
void print(struct Stu* ps){
	printf("name=%s age=%d\n", (*ps).name, (*ps).age);
	//ʹ�ýṹ��ָ�����ָ�����ĳ�Ա
	printf("name=%s age=%d\n", ps->name, ps->age);
}
int main(){
	struct Stu s = { "zhangsan", 20 };
	print(&s);//�ṹ���ַ����
	system("pause");
	return 0;
}

//�ṹ�崫��
#include <stdio.h>
struct S{
	int data[1000];
	int num;
};
struct S s = { { 1, 2, 3, 4 }, 1000 };
//�ṹ�崫��
void print1(struct S s){
	printf("%d\n", s.num);
}
//�ṹ���ַ����
void print2(struct S* ps){
	printf("%d\n", ps->num);
}
int main(){
	print1(s);//���ṹ��
	print2(&s);//����ַ
	system("pause");
	return 0;
}
/*��ѡprint2����
�������ε�ʱ�򣬲�������Ҫѹջ�ġ��������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���
�ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ��
*/