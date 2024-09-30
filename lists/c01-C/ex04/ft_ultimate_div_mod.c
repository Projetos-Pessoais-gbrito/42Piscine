/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 09:24:56 by gserafio          #+#    #+#             */
/*   Updated: 2024/08/19 09:25:03 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	int	rest;

	result = *a / *b;
	rest = *a % *b;
	*a = result;
	*b = rest;
}
/*
void	define_pointer(void)
{
	int	a;
	int	b;
	int	*c;
	int	*d;

	a = 10;
	b = 2;
	c = &a;
	d = &b;
	ft_ultimate_div_mod(c, d);
}

int	main(void)
{
	define_pointer();
	return (0);
}*/
