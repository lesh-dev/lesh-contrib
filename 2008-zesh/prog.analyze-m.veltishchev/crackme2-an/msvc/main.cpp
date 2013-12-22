#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mpow(int x, int n, int mod)
{
	int r = 1;
	for (int i = 0; i < n; i++)
	{
		r *= x;
		r %= mod;
	}
	return r;
}


int main()
{
	int m = 1037;
	int x = 3;
	int y = 5;
	
	char * buf = new char[256];



	printf("Please enter registration number: ");
	int c = 0;
	int l = 0;
	while (true)
	{
		c = fgetc(stdin);
		if (c == 10 || c == 13)
		{
			buf[l] = 0;
			break;
		}
		if (c == 8 && l > 0)
		{
			l--;
			continue;
		}
		buf[l] = c;
		l++;
	}

	if (strlen(buf) != 16)
	{
		printf("Invalid registration key!\n");
		return -1;
	}


	for (unsigned int i = 0; i < strlen(buf); i++)
	{
		if (buf[i] < '1')
		{
			printf("Invalid registration key!\n");
			return -1;
		}
		if (buf[i] > '9')
		{
			printf("Invalid registration key!\n");
			return -1;
		}
		buf[i] -= '0';
	}
	int r1 = 0;
	for (int i = 0; i < 8; i++)
	{
		r1 += buf[i]*mpow(x, i, m);
		r1 %= m;
	}
	int r2 = 0;
	for (int i = 0; i < 8; i++)
	{
		r2 += buf[i+8]*mpow(y, i, m);
		r2 %= m;
	}
	printf("%d %d\n", r1, r2);

	if (r1 != r2) printf("Code checking failed!\n"); else printf("Congratulations!\n");

	return 0;
}
