/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:07:05 by jopedro2          #+#    #+#             */
/*   Updated: 2022/04/15 03:25:59 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int main (void)
{
	int *pointer;
	int value;

	value = 40;
	pointer = &value;
	
	ft_ft(pointer);
	printf("%d\n", *pointer);
}
*/
// gcc -Wall -Wextra -Werror ft_ft.c && ./a.out