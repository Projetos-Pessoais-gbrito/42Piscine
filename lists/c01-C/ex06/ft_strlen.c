/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:28:58 by gserafio          #+#    #+#             */
/*   Updated: 2024/08/19 14:29:17 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	str_len;

	str_len = 0;
	while (str[str_len] != '\0')
	{
		str_len++;
	}
	return (str_len);
}

/*void	define_string(void)
{
	char	char_to_count[12];

	ft_strlen(char_to_count);
}

int	main(void)
{
	define_string();
	return (0);
}*/
