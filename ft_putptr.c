/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-mous <nel-mous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:45:37 by nel-mous          #+#    #+#             */
/*   Updated: 2022/10/28 12:31:58 by nel-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n < 16)
		ft_putchar(base[n]);
	else
	{
		ft_putptr(n / 16);
		ft_putchar(base[n % 16]);
	}
	return (nbofdigits(n, 16));
}
