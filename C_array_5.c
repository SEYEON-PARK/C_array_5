#include <stdio.h>

int main(void)
{
	char name[50];
	printf("�̸��� �Է��ϼ���. : "); //�̸� �Է¹ޱ�.
	scanf_s("%s", name, sizeof(name));
	for (int i = 0; i < 50; i++)
	{
		printf("%c", name[i]);
	} //�̸� ����ϱ�.

	return 0;
}