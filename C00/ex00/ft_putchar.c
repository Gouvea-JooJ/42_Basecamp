/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:27:36 by jopedro2          #+#    #+#             */
/*   Updated: 2022/04/12 15:10:05 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

/*
int main (void)
{
	char teste = 'b';
	ft_putchar(teste);
}
*/
// gcc -Wall -Wextra -Werror ft_putchar.c && ./a.out