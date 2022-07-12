/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 19:19:24 by jopedro2          #+#    #+#             */
/*   Updated: 2022/04/09 21:19:11 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush03(int x, int y)
{
	int	cx;
	int	cy;

	cx = 1;
	cy = 1;
	while (cy <= y)
	{
		while (cx <= x)
		{	
			if ((cx == 1 && cy == 1) || (cx == 1 && cy == y))
				ft_putchar('A');
			else if ((cx == x && cy == 1) || (cx == x && cy == y))
				ft_putchar('C');
			else if ((cx > 1 || cx < x) && (cy == 1 || cy == y))
				ft_putchar('B');
			else if ((cy > 1 || cy < y) && (cx == 1 || cx == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
		cx++;
		}
		write (1, "\n", 1);
		cx = 1;
		cy++;
	}
}
