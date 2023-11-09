/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <anchikri@42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:47:08 by anchikri          #+#    #+#             */
/*   Updated: 2023/11/01 15:47:08 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_hex(unsigned long n, char hex)
{
	char	*s;
	char	x_min[17];
	char	x_maj[17];
	int		len;

	ft_strlcpy(x_min, "0123456789abcdef", 17);
	ft_strlcpy(x_maj, "0123456789ABCDEF", 17);
	if (n == 0)
	{
		len = ft_print_char('0');
		return (len);
	}
	else if (hex == 'x')
		s = ft_itoa_base(n, x_min);
	else
		s = ft_itoa_base(n, x_maj);
	len = ft_print_string(s);
	free(s);
	return (len);
}
