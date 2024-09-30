/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 09:24:39 by gserafio          #+#    #+#             */
/*   Updated: 2024/08/19 09:24:45 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*void	define_variables_and_pointers(void)
{
	int	result;
	int	rest;
	int	*div;
	int	*mod;

	div = &result;
	mod = &rest;
	ft_div_mod(54, 5, div, mod);
}

int	main(void)
{
	define_variables_and_pointers();
	return (0);
}*/
