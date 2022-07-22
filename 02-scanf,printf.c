#include <stdio.h>
int main(void)
{	
	//정수형 변수
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/
	
	//실수형 변수
	/*float height = 175.5;
	printf("%.1fkg\n", height);
	double b = 4.428;
	printf("%.2lf\n",b);*/

	//상수형 변수
	/*const int year = 2005;
	printf("태어난 연도 : ""%d\n", year);*/

	//연산
	/*int add = 3 + 7; // 10
	printf("3 + 7 = %d\n", add);
	printf("%d x %d = %d\n", 32, 73, 32 * 73);*/
	
	//scanf
	/*int input;  //input = int()
	printf("값을 입력하세요 :");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);*/

	//scnaf여러개
	/*int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);*/

	//문자(한글자), 문자(여러 글자)
	/*char c = 'A';
	printf("%c\n", c);

	char str[256];  //변수가 256개!
	scanf_s("%s", str, sizeof(str)); //sizeof(str) == len(str)
	printf("%s\n", str);*/

	// 프로젝트
	// 경찰관이 범죄자의 정보를 입수 (조서 작성)
	// 이름, 나이, 몸무게, 키, 범죄명
	char name[256];
	printf("이름은?");
	scanf_s("%s", name, sizeof(name));
	//printf("이름: %s\n", name);
	int age;
	printf("나이는?");
	scanf_s("%d", &age);
	//printf("나이: %d세\n", age);
	float weight;
	printf("몸무게는?");
	scanf_s("%f", &weight);
	//printf("몸무게: %.1fkg\n", weight);
	double height;
	printf("키는?");
	scanf_s("%lf", &height);
	//printf("키: %.1lfcm\n", height);
	char crime[256];
	printf("무슨 범죄를 저질렀나?");
	scanf_s("%s", crime, sizeof(crime));
	//printf("%s를 저질렀다\n", crime);
	
	//조서 내용 출력
	printf("\n\n--- 범죄자 정보 ---\n\n");
	printf(" 이름\t\t: %s\n", name);
	printf(" 나이\t\t: %d세\n", age);
	printf(" 몸무게\t\t: %.1f㎏\n", weight);
	printf(" 키\t\t: %.1lf㎝\n", height);
	printf(" 범죄명\t\t: %s\n", crime);
	return 0;
}