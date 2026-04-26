#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int a; // 9번 입력 받을 수
	int idx, max = 0; // 최대값이 몇 번째 수인 지 저장, 최댓값 저장
	
	for (int i = 1; i <= 9; i++) {
		scanf("%d", &a);
		if (max < a) {
			max = a;
			idx = i;
		}
	}

	printf("%d \n%d", max, idx);
	

	return 0;
}