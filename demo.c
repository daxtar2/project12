#include <stdio.h>

int main(void)
{
	unsigned login_days;
//	unsigned result;
	printf("please input your login days:\n");
	int result = scanf_s("%u", &login_days);
	if (result == 0)
	{
		printf("please input a right num.");
		return 0;
	}
	switch (login_days) {
	case 100:
		printf("��ã�ʥ��ʯ X30");
		break;
	case 150:
		printf("��ã�ʥ��ʯ X30");
		break;
	case 200:
		printf("��ã�ʥ��ʯ X30");
		break;
	default:
		printf("�ۼƵ�¼�������㣡\n");
		break;

	}

	return 0;
}
