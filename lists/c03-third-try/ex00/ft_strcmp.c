/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 21:06:22 by gserafio          #+#    #+#             */
/*   Updated: 2024/08/26 21:06:25 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] && s2[index])
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (s1[index] - s2[index]);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char *s1 = "gustavo";
	char *s2 = "gustavo122s";

	printf("%d", strcmp(s1, s2));
	printf("%d", ft_strcmp(s1, s2));
	/* printf("%d", ft_strcmp(s1, s2));
	printf("") */
	return (0);
}

