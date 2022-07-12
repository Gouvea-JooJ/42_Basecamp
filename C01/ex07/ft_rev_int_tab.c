/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 00:56:44 by jopedro2          #+#    #+#             */
/*   Updated: 2022/04/17 19:44:03 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	holder;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		holder = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = holder;
		++i;
	}
}

int	main(void)
{
	int i[] = {1,2,3,4,5,6,7};
	int size = 7;
	int c = 0;
	
	while (c < size)
	{
		printf("%d ", i[c]);
		c++;
	}

	ft_rev_int_tab(i, size);
	printf("\n");
	c = 0;
	
	while (c < size)
	{
		printf("%d ", i[c]);
		c++;
	}
}

// gcc -Wall -Wextra -Werror ft_rev_int_tab.c && ./a.out