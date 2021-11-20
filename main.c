#include "includes/ft_printf.h"

int main()
{
	printf("%lx\n", (long)-9223372036854775808);
	ft_printf("%x\n", (long)-9223372036854775808);
}
