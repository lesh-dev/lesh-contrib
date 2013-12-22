#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
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
	if (strlen(buf) < 30)
	{
		printf("Invalid registration key!\n");
		return -1;
	}


	for (int i = 0; i < strlen(buf); i++)
	{
		if (buf[i] < 'A')
		{
			buf[i] = buf[i] % 26 + 'A';
			continue;
		}
		if (buf[i] > 'Z' && buf[i] < 'a')
		{
			buf[i] = buf[i] % 26 + 'A';
			continue;
		}
		if (buf[i] > 'z')
		{
			buf[i] = buf[i] % 26 + 'a';
			continue;
		}
	}

	int quantities[256];
	for (int i = 0; i < 256; i++)
		quantities[i] = 0;

	for (int i = 0; i < l; i++)
		quantities[buf[i]]++;
	for (int i = 0; i < 256; i++)
	{
		int max = quantities[i];
		int maxindex = i;
		for (int j = i+1; j < 256; j++)
		{
			if (quantities[j] > max)
			{
				max = quantities[j];
				maxindex = j;
			}
		}
		int tmp = quantities[i];
		quantities[i] = quantities[maxindex];
		quantities[maxindex] = tmp;
	}
	

	bool failed = false;
	int qmax = quantities[0];
	for (int i = 0; i < qmax; i++)
		if (quantities[i] != qmax-i)
		{
			failed = true;
			break;
		}
	if (failed) printf("Code checking failed!\n"); else printf("Congratulations!\n");

	return 0;
}
