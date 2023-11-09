/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <anchikri@42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:47:20 by anchikri          #+#    #+#             */
/*   Updated: 2023/11/01 15:47:20 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_pointer(void *ptr)
{
	int	len;

	len = 0;
	if (ptr == NULL)
		len += ft_print_string("0x0");
	else
	{
		len = ft_print_string("0x");
		len += ft_print_hex((unsigned long)ptr, 'x');
	}
	return (len);
}
