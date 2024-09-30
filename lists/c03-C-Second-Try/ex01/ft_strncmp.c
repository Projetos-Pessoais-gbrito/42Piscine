/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:05:23 by gserafio          #+#    #+#             */
/*   Updated: 2024/08/27 11:05:26 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	unsigned int	index;

	index = 0;
	while (s1[index] && s2[index] && index + 1 < n)
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (s1[index] - s2[index]);
}

#include<stdio.h>
#include<string.h>
int	main(void)
{
	char	arr1[100] = "Sushi e sashim";
	char	arr2[100] = "Sushi e sashim";
	unsigned int	n = 0;
	int	result;
	int result1;
	
	result1 = strncmp(arr1, arr2, n);
	result = ft_strncmp(arr1, arr2, n);
	printf("%d\n", result);
	printf("%d\n", result1);
	
}
