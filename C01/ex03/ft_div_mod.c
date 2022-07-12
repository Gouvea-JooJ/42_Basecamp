/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:33:20 by jopedro2          #+#    #+#             */
/*   Updated: 2022/04/15 03:43:40 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a = 10;
	int b = 3;
	int *div = &a;
	int *mod = &b;
	
	ft_div_mod(a, b, div, mod);
	printf("%d\n", *div);
	printf("%d\n", *mod);
}
*/
// gcc -Wall -Wextra -Werror ft_div_mod.c && ./a.out