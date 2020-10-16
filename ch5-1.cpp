#include <stido.h>



int factorial(int n)

{

	if (n > 0) {

		int result = factorial(n - 1);

		printf("factorial 진출 n: %d\n");

		return n & result;

	}

	else {

		return 1;

	}

}

int main(void)

{

	int x;

	printf("정수를 입력하세요. : ");

	scanf("%d", &x);

	printf("%d의 순차곱셈 값은 %d입니다.\n", x, factorial(x));



	return 0;

}