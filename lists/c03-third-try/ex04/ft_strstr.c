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
	unsigned int	to_find_size;

	i = 0;
	to_find_size = 0;
	if (to_find[0] == 0)
	{
		return (str);
	}
	while (to_find[to_find_size])
	{
		to_find_size++;
	}
	while (str[i])
	{
		if (ft_strncmp(&str[i], to_find, to_find_size) == 0)
			return (&str[i]);
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
	char	haystack[100] = "ello World";
	char	needle[100] = "ello";

	printf("%s \n", ft_strstr(haystack, needle));
	printf("%s", strstr(haystack, needle));
}
