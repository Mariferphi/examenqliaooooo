#include <unistd.h>
#include <stdio.h>

void	print_bits_aux(unsigned char octet, int pos)
{
	if(pos > 0)
	{
		print_bits_aux(octet >> 1, pos - 1);
		(octet & 1)? write(1, "1", 1) : write(1, "0", 1);
	}
}
	
void	print_bits(unsigned char octet)
{
	print_bits_aux(octet, 7);
}

int	main(void)
{
	unsigned char octet = 0b00001011;
	print_bits(octet);
	return(0);
}
