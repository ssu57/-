#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct student{
	int number;
	char name[20];
	double grade;
};
int main(){
	struct student s = {1,"ȫ�浿",4.3};//����ü ����
	struct student* p;
	p = &s;

		printf("�й�=%d �̸�=%s ����=%f\n", s.number,s.name, s.grade);
		
		printf("�й�=%d �̸�=%s ����=%f\n", (*p).number, (*p).name, (*p).grade);
	
		printf("�й�=%d �̸�=%s ����=%f\n", p->number, p->name, p->grade);

	
return 0;
}
/*
#include<stdio.h>
struct student{
	int number;
	char name[10];
	double grade;
};
int main(){
	struct student s;
	s.number = 202325008;
	strcpy(s.name, "������");
	s.grade = 4.0;

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %.2f\n", s.grade);
return 0;
}

#include<stdio.h>
#define SIZE 3;

struct student{
	int number;
	char name[20];
	double grade;
};
int main(){
	struct student list[SIZE];//����ü ����
	int i;
	for (i = 0; i < SIZE; i++) {
		printf("�й��� �Է��Ͻÿ�: \n");
		scanf("%d", &list[i].number);
		printf("�̸��� �Է��Ͻÿ�: \n");
		scanf("%s", &list[i].name);
		printf("������ �Է��Ͻÿ�: \n");
		scanf("%lf", &list[i].grade);
	}
	for (i = 0; i < SIZE; i++)
		printf("�й�: %d,�̸�: %s,����: %lf\n", list[i].number, list[i].name, list[i].grade);
return 0;
}
*/


//����ü