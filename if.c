#include <stdio.h>
int main(void)

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
/*int age = 104;
if (age < 18)
	printf("δ����\n");
2else if (age >= 18 && age < 30)
	printf("����\n");
else if (age >= 30 && age < 50)
	printf("����\n");
else if (age >= 50 && age < 90)
	printf("����\n");
else printf("����\n");
return 0;*/



/*int num = 1;
if (num = 2)       = �Ǹ�ֵ�� ==���ж�     ���������Ч�ʸ��� if (2 = num)
{
	printf("ok\n");
}
return 0;*/
//���Ϊok
/* {
	int a;
	printf("������һ������\n");
	scanf_s("%d", &a);
	if (a % 2 == 1)
		printf("Ϊ����\n");
	else
		printf("Ϊż��\n");
	return 0;
}*/
/* {
	int a = 1;
	while (a <= 100)
	{
		if (a % 2 == 1)
			 printf("%d ", a);
		a++;
	}
	return 0;
}*/
/* {
	int b = 1;
	b = b + 1;
	while(b >= 0 && b <= 100)
	{
		if (b % 2 == 0)
			printf("%d ", b-1);
		b++;

	}
	return 0;
}*/
/* {
   int b = 1;
   while (b >= 0 && b <= 100)
   {
	   int a = b + 1;
	   if (a % 2 == 0)
		   printf("%d ", b);
	   b++;
   }
   return 0;
}*/
/* {
	int b = 1;
	int a = b + 1;
	while (b >= 0 && b <= 100)
	{
		if (a % 2 == 0)
			printf("%d ", b);
		b++;
		a++;
	}
	return 0;


}*/
/* {
	int day = 0;
	scanf_s("%d", &day);
	switch (day)//switch���������ҳ���
	{
	case 1:
		printf("Monday\n");
		break;
	case 2:
		printf("Tuesday\n");
		break;
	case 3:
		printf("Wednesday\n");
		break;
	case 4:
		printf("Thursday\n");
		break;
	case 5:
		printf("Friday\n");
		break;
	case 6:
		printf("Saturday\n");
		break;
	case 7:
		printf("Sunday\n");
		break;
		return 0;
	}
	return 0;
}*/
/*{
int day = 0;
scanf_s("%d", &day);
switch (day)
{
case 1:
case 2:6
case 3:
case 4:
case 5:
	printf("������\n");
	break;
case 6:
case 7:
	printf("��Ϣ��\n");
	break;
}
if (day > 7)
printf("��������ȷ������\n");
return 0;
}*/

/*{
	int day = 0;
	scanf_s("%d", &day);
	switch (day)//switch����Ƕ��ʹ��
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default :
		printf("��������ȷ������\n");
		break;
	}
	return 0;
}*/
/*{
int n = 1;
int m = 2;
switch (n)
{
case 1: m++;
case 2: n++;
case 3:
	switch (n)
	{
	case 1:n++;
	case 2:m++;
		n++;
		break;
	}
case 4:m++;
default:
		break;
}
 printf("m = %d, n = %d\n", m, n);
 return 0;
}*/


	







	

