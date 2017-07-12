#include "sum.h"

int sum(int n)
{
	int sum;
	for(int i=1; i<n+1; i++)
		sum += i;
	return sum;
}
