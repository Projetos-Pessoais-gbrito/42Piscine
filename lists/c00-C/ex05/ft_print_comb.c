/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:46:09 by gserafio          #+#    #+#             */
/*   Updated: 2024/08/15 12:46:21 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	while (a <= 55)
	{	
		b = a + 1;
		while (b <= 56)
		{	
			c = b + 1;
			while (c <= 57)
			{	
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a < 55)
					write(1, ", ", 1);
				c++;
			}
			b++;
		}
		a++;
	}
}
