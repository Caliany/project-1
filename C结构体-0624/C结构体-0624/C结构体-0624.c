//结构体指针访问指向变量的成员，有时候我们得到的不是一个结构体变量，而是指向一个结构体的指针。
//1.
#include <stdio.h>
struct Stu{
	char name[20];
	int age;
};
void print(struct Stu* ps){
	printf("name=%s age=%d\n", (*ps).name, (*ps).age);
	//使用结构体指针访问指向对象的成员
	printf("name=%s age=%d\n", ps->name, ps->age);
}
int main(){
	struct Stu s = { "zhangsan", 20 };
	print(&s);//结构体地址传参
	system("pause");
	return 0;
}

//结构体传参
#include <stdio.h>
struct S{
	int data[1000];
	int num;
};
struct S s = { { 1, 2, 3, 4 }, 1000 };
//结构体传参
void print1(struct S s){
	printf("%d\n", s.num);
}
//结构体地址传参
void print2(struct S* ps){
	printf("%d\n", ps->num);
}
int main(){
	print1(s);//传结构体
	print2(&s);//传地址
	system("pause");
	return 0;
}
/*首选print2函数
函数传参的时候，参数是需要压栈的。如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降。
结构体传参的时候，要传结构体的地址。
*/