#include <stdio.h>
int main(){

	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d\n", i);
	}
	system("pause");
	return 0;
}

#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			break;
		printf("%d\n", i);
	}
	system("pause");
	return 0;
}