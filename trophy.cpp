#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main() {
	int size = 0;
	int stars, blank1, blank2;

	//neckless
	printf("Size?");
	scanf("%d", &size);

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size * 2; j++) {
			if (i == j || size * 2 - i - 1 == j) printf("*");
			 
			else printf(" ");
		}
		printf("\n");
	}
	//size*2-1���� -1�� ���� ������, i= 0���� �����ϴ� �ݺ����� Ư����, 1���� ���ڸ� ���⿡ ���� 
	// size*2�� ���̵� �浹�ϱ� �����̴�. 0���� �����ϴ� �ݺ����� 
	// size*2-1 ��° ĭ���� �����⿡ ���� ���� �ڵ带 ���ٸ� i=0�� �� size*2-i��
	// ������ ������ ���� ���� size*2-i�� �������� ��µǴ� ������ 
	// ���������� ��ĭ�� �и��� ������ -1�� ������ �־� �ڵ带 ®��.


	//body
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size * 2; j++) {
			 printf("*");
		}
		printf("\n");
	}

	//reverse triangle
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size * 2; j++) {
			if (i > j ||size * 2 - 1 - i < j)
				printf(" "); 
			else printf("*");
		}
		printf("\n");
	}
	/* ���ﰢ���� ��� �� ù ���� �����ϸ� ��ũ�� �׻� ���� ó���Ǳ� ������ 
	������ ������ ���� ä��� ���� �����ϴ� �����Ͽ� �ڵ带 ®��*/

	//last line
	for (int i = 0; i < size * 2; i++) {
		printf("*");
	}

	return 0;
}
