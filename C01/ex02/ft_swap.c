/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:22:18 by jopedro2          #+#    #+#             */
/*   Updated: 2022/04/15 03:29:33 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
void	ft_swap(int *a, int *b)
{
	int	holder;

	holder = *a;
	*a = *b;
	*b = holder;
}
/*
int	main(void)
{
	int swapA = 10;
	int swapB = 20;
	
	int *a = &swapA;
	int *b = &swapB;
	ft_swap(a, b);
	printf("%d\n", swapA);
	printf("%d\n", swapB);
}
*/
// gcc -Wall -Wextra -Werror ft_swap.c && ./a.out