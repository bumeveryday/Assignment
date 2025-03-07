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
	//size*2-1에서 -1이 붙은 이유는, i= 0부터 시작하는 반복문의 특성과, 1부터 숫자를 세기에 나온 
	// size*2의 아이디어가 충돌하기 때문이다. 0부터 시작하는 반복문은 
	// size*2-1 번째 칸에서 끝나기에 조정 없이 코드를 쓴다면 i=0일 때 size*2-i에
	// 생성될 마지막 별은 물론 size*2-i의 조건으로 출력되는 별들이 
	// 오른쪽으로 한칸씩 밀리기 때문에 -1의 조정을 넣어 코드를 짰다.


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
	/* 역삼각형의 모양 상 첫 줄을 제외하면 블랭크가 항상 먼저 처리되기 문에 
	나머지 공간을 별로 채우는 것이 간단하다 생각하여 코드를 짰다*/

	//last line
	for (int i = 0; i < size * 2; i++) {
		printf("*");
	}

	return 0;
}
