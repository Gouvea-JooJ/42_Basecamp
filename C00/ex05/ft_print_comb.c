/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:03:07 by jopedro2          #+#    #+#             */
/*   Updated: 2022/04/12 15:22:05 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escrita(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a +1;
		while (b <= '8')
		{
			c = b +1;
			while (c <= '9')
			{
				escrita(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

/*
int main (void)
{
	ft_print_comb();
}
*/
//gcc -Wall -Wextra -Werror ft_print_comb.c && ./a.out