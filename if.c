#include <stdio.h>
int main(void)
{
	//��һ�ַ�ʽ
	/*int age = 18;
	if (age < 18)
		printf("δ����\n");
	else
		printf("����\n");
	return 0;*/
	//�ڶ��ַ�ʽ
	/*int age = 8;
	if (age < 18)
		printf("δ����\n");
	else if (age < 30)
		printf("����\n");
	else if (age < 50)
		printf("����\n");
	else
		printf("����\n");
	return 0;*/
	//�����ַ�ʽ
	int age = 104;
	if (age < 18)
		printf("δ����\n");
	else if (age >= 18 && age < 30)
		printf("����\n");
	else if (age >= 30 && age < 50)
		printf("����\n");
	else if (age >= 50 && age < 90)
		printf("����\n");
	else printf("����\n");
	return 0;
	}