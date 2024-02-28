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
	return 0;
}