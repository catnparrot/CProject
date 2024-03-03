#include <stdio.h>
int main(void)
{
	//	printf("Hello World\n");

	// 정수형 변수에 대한 예제
	int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);

	printf("\n");
	// 실수형 변수에 대한 예제
	float f = 46.5f;
	printf("%f\n", f);
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%lf\n", d);
	printf("%.2lf\n", d);

	printf("\n");
	// 상수
	const int YEAR = 2000;
	printf("태어난 년도 : %d\n", YEAR);
	//YEAR = 2001;

	printf("\n");
	// printf
	// 연산
	int add = 3 + 7;
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3 + 7);
	printf("%d + %d = %d\n", 3, 7, 3 + 10);
	printf("%d + %d = %d\n", 30, 79, 30 + 79);
	printf("%d X %d = %d\n", 30, 79, 30 * 79);

	printf("\n");
	// scanf
	// get a inputed value to save
	int input;
	printf("input a value: ");
	scanf_s("%d", &input);
	printf("the value : %d\n", input);
	
	int one, two, three;
	printf("input three integers :\n");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("first value : %d\nsecond value : %d\nthird value : %d\n", one, two, three);
	printf("first value : %d\n", one);
	printf("second value : %d\n", two);
	printf("third value : %d\n", three);

	printf("\n");
	// 문자, 문자열
	char c = 'A';
	printf("%c\n", c);

	char str[256];
//	scanf_s("%s", str);
	scanf_s("%s", str, sizeof(str));	//띄어쓰기 X
	printf("input : %s\n", str);

	return 0;
}