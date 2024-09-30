/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:06:33 by gserafio          #+#    #+#             */
/*   Updated: 2024/08/27 14:06:36 by gserafio         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	to_find_size;

	i = 0;
	j = 0;
	to_find_size = 0;
	while (to_find[to_find_size])
	{
		to_find_size++;
	}
	while (str[i])
	{
		if (to_find[j] == str[i])
		{
			str = &str[i];
			break ;
		}
		i++;
	}
	if (ft_strncmp(str, to_find, to_find_size) != 0)
	{
		return (0);
	}
	return (str);
}
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	haystack[100] = "vinicjius scorz scorza";
	char	needle[100] = "scorza";
	char	*result;
	char	ch;

	result = &ch;
	result = ft_strstr(haystack, needle);
	result = strstr(haystack, needle);
	printf("%s", result);
}
