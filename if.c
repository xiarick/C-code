#include <stdio.h>
int main(void)

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
/*int age = 104;
if (age < 18)
	printf("未成年\n");
2else if (age >= 18 && age < 30)
	printf("青年\n");
else if (age >= 30 && age < 50)
	printf("中年\n");
else if (age >= 50 && age < 90)
	printf("老年\n");
else printf("长寿\n");
return 0;*/



/*int num = 1;
if (num = 2)       = 是赋值； ==是判断     常量放左边效率更高 if (2 = num)
{
	printf("ok\n");
}
return 0;*/
//结果为ok
/* {
	int a;
	printf("请输入一个数字\n");
	scanf_s("%d", &a);
	if (a % 2 == 1)
		printf("为奇数\n");
	else
		printf("为偶数\n");
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
	switch (day)//switch必须整形且常量
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
	printf("工作日\n");
	break;
case 6:
case 7:
	printf("休息日\n");
	break;
}
if (day > 7)
printf("请输入正确的数字\n");
return 0;
}*/

/*{
	int day = 0;
	scanf_s("%d", &day);
	switch (day)//switch允许嵌套使用
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default :
		printf("请输入正确的数字\n");
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


	







	

