#include <stdio.h>
#include <string.h>

char ascii(char b);

int main()
{
	char a;

	printf("Insert A-Z or a-z :");
	scanf_s("%c", &a);
	printf("%c\n", ascii(a));

	system("pause");
	return 0;
}

char ascii(char b)
{
	if (b > 96)
	{
		b -= 32;
	}
	else
	{
		b += 32;
	}

	return b;
}