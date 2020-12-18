#include <stdio.h>

int main(void)
{
	char name[50];
	printf("이름을 입력하세요. : "); //이름 입력받기.
	scanf_s("%s", name, sizeof(name));
	for (int i = 0; i < 50; i++)
	{
		printf("%c", name[i]);
	} //이름 출력하기.

	return 0;
}