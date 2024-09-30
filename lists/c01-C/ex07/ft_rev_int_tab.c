/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:53:42 by gserafio          #+#    #+#             */
/*   Updated: 2024/08/19 15:53:48 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[(size -1) - i];
		tab[(size -1) - i] = tab[i];
		tab[i] = temp;
		i++;
	}
}

/*void	define_array(void)
{
	int	*arrayptr;
	int	size;
	int	array[5];
	int i;

	size = 5;
	i = 0;
	while (i < size)
	{
		array[i] = i;
		i++;
	}
	arrayptr = array;
	ft_rev_int_tab(arrayptr, size);
}

int	main(void)
{
	define_array();
	return (0);
}*/
