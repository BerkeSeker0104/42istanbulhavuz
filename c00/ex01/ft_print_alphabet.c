#include <unistd.h>

void ft_print_alphabet(char c) 
{

	char alphabet; 
	alphabet = 97;	
	

	while (alphabet <= 122)
	{
		write(1, &alphabet, 1);
		alphabet++;
		
	}

}

int main (void) 
{
	ft_print_alphabet(97);
	return 0;

}
