#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*�ֻ����� 1~6���� ������ �ִ�.
�ֻ����� 1000�� ���� ��, �ֻ��� ���� �� ���� ��������
����ϴ� ���α׷��� �迭�� �̿��Ϸ� �ۼ��϶�.*/
int main() {
	int dice_freq[6] = { 0, };
	int i;
	srand(time(NULL));
	for (i = 0; i < 1000; i++) {
		++dice_freq[rand() % 6];//P=rand()%6
								//fg[P]=fg[P]+1
	}
	printf("���� ��\n");
	for (i = 0; i < 6; i++)
		printf("%4d %4d\n", i + 1, dice_freq[i]);
	return 0;
}