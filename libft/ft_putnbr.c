/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:11:53 by rhobbs            #+#    #+#             */
/*   Updated: 2019/06/01 15:40:36 by rhobbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long int ln;

	ln = n;
	if (ln < 0)
	{
		ft_putchar('-');
		ln = ln * (-1);
	}
	if (ln > 9)
	{
		ft_putnbr(ln / 10);
		ft_putnbr(ln % 10);
	}
	else if (n < 10)
		ft_putchar(ln + '0');
}