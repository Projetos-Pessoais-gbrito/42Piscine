/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:38:20 by gserafio          #+#    #+#             */
/*   Updated: 2024/08/28 10:38:25 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_int_limit(int limit)
{
	if (limit == -2147483648)
		return (1);
	return (0);
}

void	write_func(int size_number, char number[])
{
	while (size_number - 1 >= 0)
	{
		write(1, &number[size_number - 1], 1);
		size_number--;
	}
}

void	ft_putnbr(int nb)
{
	char	number[10];
	int		size_number;
	int		result;

	size_number = 0;
	result = 0;
	if (check_int_limit(nb) == 1)
		write (1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	else if (nb == 0)
		write (1, "0", 1);
	while (nb > 0)
	{
		result = nb % 10;
		number[size_number] = result + '0';
		nb = nb / 10;
		size_number++;
	}
	write_func(size_number, number);
}
/*
int	main(void)
{
	ft_putnbr(1654546);
	return (0);
}
*/