#include <unistd.h>

void ft_putchar(char c) // Fonksiyonumuzda bir char parametresi istiyoruz
{
	write(1, &c, 1); // Fonksionun istediği char parametresini yazdırır
}

int main(void) {

	ft_putchar('c');
	return 0;

}

