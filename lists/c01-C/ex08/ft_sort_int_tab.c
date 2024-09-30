/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:27:29 by gserafio          #+#    #+#             */
/*   Updated: 2024/08/19 20:27:35 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
[1, 2 ,4 , 5 ,3 ,9]
/*void	define_array_to_sort(void)
{
	int	*ptr_to_array;
	int	array_to_sort[11];
	int size;
	int i;
	int a;
	size = 10;
	i = 10;
	a = 0;
	while(i >= 0)
	{
		array_to_sort[a] = i;
		i--;
		a++;
	}
	ptr_to_array = array_to_sort;
	
	ft_sort_int_tab(ptr_to_array, size);
}

int	main(void)
{
	define_array_to_sort();
	return (0);
}*/