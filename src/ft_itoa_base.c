/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <anchikri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:14:50 by anchikri          #+#    #+#             */
/*   Updated: 2023/11/09 19:39:41 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_itoa_base(unsigned long n, char hex[16])
{
	int		i;
	char	*tab;
	char	*result;

	tab = ft_calloc(17, sizeof(char));
	if (!tab)
		return (NULL);
	i = 16;
	while (n)
	{
		tab[--i] = hex[n % 16];
		n /= 16;
	}
	result = ft_strdup(tab + i);
	free(tab);
	return (result);
}
