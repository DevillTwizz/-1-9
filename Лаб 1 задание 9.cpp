#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int
main()
{
	int Fa = 0;
	int Fb = 1;
	int n = 0;

	while (n < 1000) {
		
		n = Fa + Fb;
		Fb = Fa;
		Fa = n;

	} 

	printf("%d", n);

	
	
	return 0;

}

