#include <stdio.h> // standard input/output
#include <conio.h> // console input/output

#include <windows.h>

int main()
{
	DWORD t = GetTickCount();
	int p[10000];
	p[0] = 2;
// ============================
	int Quantity = 1;
	//printf("2 ");
	for (int i = 3; i<100000; i+=2)
	{

		bool prime = true;
		for (int x = 3; x< i/2; x+=2)
		{
			if (i%x==0) { prime = false; break; }
		}
		if (prime)
		{
			p[Quantity] = i;
			//printf("%d ", i);
			Quantity++;
		} 
	}
// ========================

	t = GetTickCount()-t;
	printf("\nDone! %d prime number(s) found, time: %1.4lf\n", Quantity, double(t)/1000.0);

	getch(); // wait for keypress 

	return 0;
}

