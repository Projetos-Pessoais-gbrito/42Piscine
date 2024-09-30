/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:55:38 by gserafio          #+#    #+#             */
/*   Updated: 2024/09/04 15:55:41 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_params(int argc, char*argv[])
{
	while (argc > 1)
	{
		while (*argv[argc - 1])
		{
			write(1, argv[argc - 1], 1);
			argv[argc - 1]++;
		}
		write(1, "\n", 1);
		argc--;
	}
}

int	main(int argc, char*argv[])
{
	ft_rev_params(argc, argv);
	return (0);
}
