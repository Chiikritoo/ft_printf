/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <anchikri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:42:49 by anchikri          #+#    #+#             */
/*   Updated: 2023/11/09 19:43:08 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_int(int n)
{
	int		len;
	char	*tab;

	len = 0;
	tab = ft_itoa(n);
	len = ft_print_string(tab);
	free(tab);
	return (len);
}

int	ft_print_unsigned(unsigned int n)
{
	int		len;
	char	*tab;

	len = 0;
	tab = ft_uitoa(n);
	len = ft_print_string(tab);
	free(tab);
	return (len);
}
