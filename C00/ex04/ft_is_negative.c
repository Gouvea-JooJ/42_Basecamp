/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:09:20 by jopedro2          #+#    #+#             */
/*   Updated: 2022/04/12 15:20:27 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positivo;
	char	negativo;

	positivo = 'P';
	negativo = 'N';
	if (n >= 0)
	{
		write (1, &positivo, 1);
	}
	else
	{
		write (1, &negativo, 1);
	}
}

/*
int main (void)
{
	ft_is_negative(42);
}
*/
// gcc -Wall -Wextra -Werror ft_is_negative.c && ./a.out
