/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bseker <bseker@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:03:18 by bseker            #+#    #+#             */
/*   Updated: 2023/09/06 15:53:51 by bseker           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar (char a) // Fonksiyonumuzda bir char parametresi istiyoruz 
{
	write(1, &a, 1); // Ekrana a değişkenini yazdır.

}


void ft_print_comb2 (void)
{
	int a; // a diye bir int değişkeni tanımlandı 
	int b; // b diye bir int değişkeni tanımlandı

	a = -1; // a değişkeninin değeri -1 oldu çünkü istenen alıştırmada a'nın 0'dan başlaması gerekiyor
	while (a++ < 99) // a değişkenin 1 fazlası 98'den küçükse döngüye gir çünkü istenen alıştırmada a'nın alabileceği maksimum değer 98  
	{
		b = a; // b değişkeni a değişkenin değerini aldı 
		while (b++ < 99) // b değişkenin 1 fazlası 99'dan küçükse döngüye gir çünkü istenen alıştırmada b'nin alabileceği maksimum değer 99
		{
			ft_putchar((a / 10) + 48); // a değişkenimizi 10'a bölüp, gelen int değerini char değişkenine çevirebilmek için 0 sayısının ascii değeri olan 48 ile toplayarak ascii'ye uygun olacak şekilde yazdırıyoruz
			
			ft_putchar((a % 10) + 48); // a değişkenimizin 10'a bölümünden kalan int değerini char değişkenine çevirebilmek için 0 sayısının ascii değeri olan 48 ile toplayarak ascii'ye uygun olacak şekilde yazdırıyoruz
			
			ft_putchar(' '); // boşluk yazdırıyoruz
			
			ft_putchar((b / 10) + 48); // b değişkenimizi 10'a bölüp gelen int değerini char değişkenine çevirebilmek için 0 sayısının ascii değeri olan 48 ile toplayarak ascii'ye uygun olacak şekilde yazdırıyoruz
			
			ft_putchar((b % 10) + 48); // b değişkenimizin 10'a bölümünden kalan int değerini char değişkenine çevirebilmek için 0 sayısının ascii değeri olan 48 ile toplayarak ascii'ye uygun olacak şekilde yazdırıyoruz
			
			if (a != 98) // eğer a değişkeni 98'e eşit değilse
			{
				ft_putchar(','); 
				ft_putchar(' ');
			}
		
		}
	
	}

}


int main (void)
{
	ft_print_comb2();
   	
	return 0;	

}

