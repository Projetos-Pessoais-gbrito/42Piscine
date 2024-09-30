/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 10:35:06 by gserafio          #+#    #+#             */
/*   Updated: 2024/08/19 10:35:14 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
}

/*void	define_str_of_char(void)
{
	int		i;
	char	str[12];
	char	*str_ptr;

	str_ptr = str;
	i = 0;
	ft_putstr(str_ptr);
}

int	main(void)
{
	define_str_of_char();
	return (0);
}*/
