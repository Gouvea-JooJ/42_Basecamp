/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:40:32 by jopedro2          #+#    #+#             */
/*   Updated: 2022/04/15 03:53:39 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int div = 10;
	int mod = 3;
	int *a = &div;
	int *b = &mod;
	
	ft_ultimate_div_mod(a, b);
	printf("%d\n", *a);
	printf("%d\n", *b);
}
*/
// gcc -Wall -Wextra -Werror ft_ultimate_div_mod.c && ./a.out