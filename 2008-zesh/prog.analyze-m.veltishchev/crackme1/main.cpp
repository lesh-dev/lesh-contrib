#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int set_values(bool*failed, unsigned int* v, unsigned int* j)
{
	*failed = false;
	*v = 0xDEADFEED;
	*j = *v ^ *v;
	return 20;
}


int main()
{
	char * buf = new char[256];

	printf("Please type registration number: ");
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
//	printf("%s\n", buf);
	for (int i = 0; i < l; i++)
	{
		if (buf[i] >= 'a' && buf[i] <= 'z') buf[i] -= ('a'-'A');
	}
//	printf("%s\n", buf);
	if (strlen(buf) != 23)
	{
		printf("Invalid registration key!\n");
		return -1;
	}
	bool failed;
	unsigned int v;
	unsigned int j;
	int k = set_values(&failed, &v, &j);

	for (int i = 0; i < 20; i++)
	{
		v += (unsigned char)(buf[i]);
		j = v + 12;
		v = v % 0x100;
		if (v < 0x80) v |= 0x80;
		j += 0xDEAD;
		v &= j;
	}
	v = (v % 26) + 'A`';
//	printf("%c", v);
	if (v != buf[k++]) failed = true;
	for (int i = 0; i < 20; i++)
	{
		v += (unsigned char)(buf[i]);
		j = v + 13;
		v = v % 0x100;
		if (v < 0x50) v |= 0x80;
		j += 0xFEED;
		v &= j;
	}
	v = (v % 10) + '0';
//	printf("%c", v);
	if (v != buf[k++]) failed = true;
	for (int i = 0; i < 20; i++)
	{
		v += (unsigned char)(buf[i]);
		j = v + 11;
		v = v % 0x100;
		if (v < 0x30) v |= 0x80;
		j += 0xDEED;
		v &= j;
	}
	v = (v % 26) + 'A';
//	printf("%c", v);
	if (v != buf[k++]) failed = true;
//	printf("\n");
	if (failed)
	{
		printf("Invalid registration key!\n");
		return -1;
	}
	printf("Congratulations! You've passed the TrueHack Course Level 1\n");
	return 0;
}
