#include <stdio.h>
int main(void)
{	
	//������ ����
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/
	
	//�Ǽ��� ����
	/*float height = 175.5;
	printf("%.1fkg\n", height);
	double b = 4.428;
	printf("%.2lf\n",b);*/

	//����� ����
	/*const int year = 2005;
	printf("�¾ ���� : ""%d\n", year);*/

	//����
	/*int add = 3 + 7; // 10
	printf("3 + 7 = %d\n", add);
	printf("%d x %d = %d\n", 32, 73, 32 * 73);*/
	
	//scanf
	/*int input;  //input = int()
	printf("���� �Է��ϼ��� :");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);*/

	//scnaf������
	/*int one, two, three;
	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��° �� : %d\n", one);
	printf("�ι�° �� : %d\n", two);
	printf("����° �� : %d\n", three);*/

	//����(�ѱ���), ����(���� ����)
	/*char c = 'A';
	printf("%c\n", c);

	char str[256];  //������ 256��!
	scanf_s("%s", str, sizeof(str)); //sizeof(str) == len(str)
	printf("%s\n", str);*/

	// ������Ʈ
	// �������� �������� ������ �Լ� (���� �ۼ�)
	// �̸�, ����, ������, Ű, ���˸�
	char name[256];
	printf("�̸���?");
	scanf_s("%s", name, sizeof(name));
	//printf("�̸�: %s\n", name);
	int age;
	printf("���̴�?");
	scanf_s("%d", &age);
	//printf("����: %d��\n", age);
	float weight;
	printf("�����Դ�?");
	scanf_s("%f", &weight);
	//printf("������: %.1fkg\n", weight);
	double height;
	printf("Ű��?");
	scanf_s("%lf", &height);
	//printf("Ű: %.1lfcm\n", height);
	char crime[256];
	printf("���� ���˸� ��������?");
	scanf_s("%s", crime, sizeof(crime));
	//printf("%s�� ��������\n", crime);
	
	//���� ���� ���
	printf("\n\n--- ������ ���� ---\n\n");
	printf(" �̸�\t\t: %s\n", name);
	printf(" ����\t\t: %d��\n", age);
	printf(" ������\t\t: %.1f��\n", weight);
	printf(" Ű\t\t: %.1lf��\n", height);
	printf(" ���˸�\t\t: %s\n", crime);
	return 0;
}