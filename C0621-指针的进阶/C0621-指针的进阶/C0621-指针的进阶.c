////1.函数的调用先后顺序无法通过操作符的优先级确定。
//#include <stdio.h>
//int main(){
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	system("pause");
//	return 0;
//}
////2.指针是个变量，存放内存单元的地址（编号）
//#include <stdio.h>
//int main(){
//	int a = 10;//在内存中开辟一块空间
//	int *p = &a;//这里我们对变量a,取出它的地址，可以使用&操作符。
//				//将a的地址存放在P变量中，p就是一个指针变量
//	printf("%p\n", p);
//	printf("%p\n", p + 1);//指针的类型决定了指针向前走或者向后走一步有多大？
//	system("pause");
//	return 0;
//}
/*在32位的机器上，地址是32个或者1组成二进制序列，那地址就得用4个字节空间来存储
在64位机器上，那么一个指针变量的大小就是8个字节，才能存放得下一个地址。
 1.地址是用来存放地址的，地址是唯一标识一块地址空间的。
 2.指针的大小载32位平台上是4字节，在64位平台上是8字节。
*/
#include <stdio.h>
int main()
{
	int n = 0x11223344;
	int *pc = (int *)&n;
	int *pi = &n;
	*pc = 0x55;
	*pi = 0;
	printf("%p\n", pc);
	printf("%p\n", pi);//两个地址一样的
	system("pause");
	return 0;
}