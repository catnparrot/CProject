#include <stdio.h>
int main(void)
{
	// 프로젝트
	// 경찰관이 범죄자의 정보 입수 (조서 작성)
	// 이름? 나이? 몸무게? 키? 범죄명?
	char name[256];
	printf("What is your name? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("say your age ");
	scanf_s("%d", &age);

	float weight;
	printf("weight ");
	scanf_s("%f", &weight);

	double height;
	printf("How tall ");
	scanf_s("%lf", &height);

	char charge[256];
	printf("your crime ");
	scanf_s("%s", charge, sizeof(charge));

	printf("\n");
	printf("===========REPORT===========\n");
	printf("Name : %s\n", name);
	printf("Age : %d\n", age);
	printf("Weight : %.1fkg\n", weight);
	printf("Height : %.2lfcm\n", height);
	printf("Crime: %s\n", charge);
	printf("============================\n");

	return 0;
}