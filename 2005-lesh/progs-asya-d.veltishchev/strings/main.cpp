#include <stdio.h> // standard input/output
#include <conio.h> // console input/output
#include <stdlib.h>

#include <windows.h>

const int N = 15;

int main()
{
	char t[N];
	char s[N];
	
	for (int i = 0; i<N; i++) t[i] = rand()%100; 


	for (int i = 0; i <N; i++) { printf("%d ", t[i]); s[i]=255; }
	printf("\n");

	const int y=5;
	const int l=3;

	for (int k=0; k < y; k++)
		s[k] = t[k]; 
	for (int x=0,k=y; x<l; x++,k++)
		t[x]=t[k];

//	for (int i = 0; i <N; i++) printf("%d ", t[i]);
//	printf("\n");

	for (int a=0; a < l; a++) t[y+a]=s[a];

//	for (int i = 0; i <N; i++) printf("%d ", t[i]);
//	printf("\n");

	
	getch();
	return 0;
}

