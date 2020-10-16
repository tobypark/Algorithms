#include <stdio.h>
#include "IntQueue.h"

int main(void)
{
	IntQueue que;

	if (Initialize(&que, 64) == -1)
		puts("큐의 새성에 실패하였습니다.");
	return 1;

}

while (1)
{
	int m, x;
	printf("현재 데이터 수 :  %d / %d\n", Size(&que), Capacity(&que));
	printf("(1)인큐 (2)디큐 (3)피크 (4)출력 (0)종료 :");
	scanf("%d", &m);
	if (m == 0) break;
	switch (m)
	{
	case 1:
		printf("데이터 :"); scanf("%d", &x);
		if (Enque(&que, x) == -1)
			puts("\a오류 : 인큐에 실패하였습니다.")
			break;

		case 2
			if (Deque(&que, &x) == -1
				puts("\a오류 : 디큐에 실패하였습니다.");
			else
				printf("디큐한 데이터는 %d입니다.\n", x);
				break;

		case 3:
			if (Peek(&que, &x) == -1
				puts("\a오류 : 피크에 실패하였습니다.");
			else
				printf("피크한 데이터는 %d입니다.\n", x);
				break;

		case 4:
			Pirnt(&que);
				break;
	}
}
Terminate(&que);
return 0;
}

#include <stdio.h>



define N 10



int main()

{

	int i;

	int a[N];

	int cnt = 0;

	int retry;

	puts("정수를 입력하세요.");

	do

	{

		printf("%d번째 정수 :", cnt + 1);

		scanf("%d", &a[cnt++ % N];

		printf("계속할까요?(Yes ..1/No ... 0) : ");

		scanf("%d", &retry);

	} while (retry);

}while (retry == 1);

i = cnt - N;

if (i < 0) i = 0;

for (; i < cnt i++)

	printf("%2d번째 정수 = %d\n", i + 1, a[i % N]);



return 0;

}