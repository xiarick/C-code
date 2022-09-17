#include <stdio.h>
int main(void)
{
	//第一种方式
	/*int age = 18;
	if (age < 18)
		printf("未成年\n");
	else
		printf("成年\n");
	return 0;*/
	//第二种方式
	/*int age = 8;
	if (age < 18)
		printf("未成年\n");
	else if (age < 30)
		printf("青年\n");
	else if (age < 50)
		printf("中年\n");
	else
		printf("老年\n");
	return 0;*/
	//第三种方式
	int age = 104;
	if (age < 18)
		printf("未成年\n");
	else if (age >= 18 && age < 30)
		printf("青年\n");
	else if (age >= 30 && age < 50)
		printf("中年\n");
	else if (age >= 50 && age < 90)
		printf("老年\n");
	else printf("长寿\n");
	return 0;
	}