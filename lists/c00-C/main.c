/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 21:38:56 by gserafio          #+#    #+#             */
/*   Updated: 2024/08/14 23:18:44 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ex00/ft_putchar.c"
#include "ex01/ft_print_alphabet.c"
#include "ex02/ft_print_reverse_alphabet.c"
#include "ex03/ft_print_numbers.c"
#include "ex04/ft_is_negative.c"
#include "ex05/ft_print_comb.c"

void ft_putchar(char c);
void ft_print_alphabet();
void ft_print_reverse_alphabet();
void ft_print_numbers();
void ft_is_negative(int n);
void ft_print_comb();

int main(){
	ft_putchar('c');
	printf("\n");
	ft_print_alphabet();
	printf("\n");
	ft_print_reverse_alphabet();
	printf("\n");
	ft_print_numbers();
	printf("\n");
	ft_is_negative(10);
	printf("\n");
	ft_print_comb();
	printf("\n");
	return (0);
}

