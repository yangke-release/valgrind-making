#include<stdio.h>
#include<stdlib.h>
void main()
{
	char * m = malloc(100*sizeof(char));
	free(m);
}
