#include <stdio.h>
int main(void)
{
	//第一种
	/*int age = 18;
	if (age < 18)
		printf("未成年\n");
	else
		printf("成年\n");
	return 0;*/
	int age = 48;
	if (age < 18)
		printf("未成年\n");
	else if (age < 30)
		printf("青年\n");
	else if (age < 50)
		printf("中年\n");
	else
		printf("老年\n");
	return 0;




	





}