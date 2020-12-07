#include <stdio.h>
#include "b.c"
void compress(int a, int b);
int main()
{
	compress(a,b);
	return 0;
}

void compress(int a, int b){
     printf("%d+%d=%d", a, b , a+b);
}
