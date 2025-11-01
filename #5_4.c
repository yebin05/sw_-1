#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
□ 문제4. 행렬곱 구하기 : 2행 3열로 이루어진 행렬 A와 3행 4열로 이루어진 행렬 B가 있다. 행렬 A와 B를 곱하면 2행 4열의 행렬이 나오게 된다. 
   A와 B의 요소들의 값을 1부터 10까지의 무작위 값으로 초기화한 후 A x B의 결과를 출력해 보라. 검증을 위해 행렬 A와 행렬 B 그리고 행렬 A x B를 모두 출력하라.

▷ 참고 사항
* 행렬의 곱셈에 대해 살펴본다. 다음과 같은 행렬 A와 B를 곱한다고 가정하자. 곱셈 결과 (1행 1열)의 값은 A의 1행 요소들과 B의 1열의 요소들의 곱셈의 합(1×0 + 2×1 + 0×3)으로 만들어진다. 
  (1행 2열)의 값은 A의 1행 요소들과 B의 2열의 요소들의 곱셈의 합(1×1 + 2×2 + 0×0)으로 만들어진다. 이와 같이 (m행 n열)의 값은 A의 m행의 요소들과 B의 n열의 요소들의 곱셈의 합으로 만들어지게 된다.

▷ 실습 및 프로그래밍 절차
* A 행렬 2차원 배열을 만든다. 요소의 값으로는 1~10 사이의 무작위 값으로 채운다.
* B 행렬 2차원 배열을 만든다. 요소의 값으로는 1~10 사이의 무작위 값으로 채운다.
* A x B의 결과를 저장할 2차원 배열 C를 만든다.
* 반복문을 적절히 사용하여 행렬 곱셈 방식에 따라 A와 B의 곱을 계산하여 배열 C에 저장한다.
* A, B, C의 값을 출력한다.

*/

int main(void)
{

	srand(time(NULL));
	int arrA[2][3];
	int arrB[3][4];

	//행렬A
	printf("<행렬A>\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arrA[i][j] = rand() % 10 + 1;
			printf("%d ", arrA[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	//행렬B
	printf("<행렬B>\n");
	for (int k = 0; k < 3; k++)
	{
		for (int l = 0; l < 4; l++)
		{
			arrB[k][l] = rand() % 10 + 1;
			printf("%d ", arrB[k][l]);
		}
		printf("\n");
	}
	printf("\n");
	//행렬AxB
	//arrA[i][j], arrB[k][l]
	printf("<행렬A와 행렬B의 곱>\n");
	for (int i = 0; i < 2; i++)
	{
		for (int l = 0; l < 4; l++)
		{
			int sum = 0;

			for (int x = 0; x < 3; x++)
			{
				sum += arrA[i][x] * arrB[x][l];
			}
			printf("%d ", sum);
		}
		printf("\n");
	}

}