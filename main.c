#include "ft_printf.h"
#include <limits.h>

int myf(int a)
{
	a++;
	return(a);
}

int main()
{
	int n = 10;
	int h = myf(n);
}
