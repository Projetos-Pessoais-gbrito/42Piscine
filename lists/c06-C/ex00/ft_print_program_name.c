/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:53:28 by gserafio          #+#    #+#             */
/*   Updated: 2024/09/04 13:53:31 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_program_name(int argc, char	*argv[])
{
	if (argc >= 1)
	{
		while (*argv[0])
		{
			write(1, argv[0], 1);
			argv[0]++;
		}
		write(1, "\n", 1);
	}
}

int	main(int argc, char	*argv[])
{
	ft_print_program_name(argc, argv);
	return (1);
}
