/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <anchikri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:26:30 by anchikri          #+#    #+#             */
/*   Updated: 2023/10/23 18:45:27 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// function who erases the data in the n bytes of the memory of s
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
