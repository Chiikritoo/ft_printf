/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <anchikri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:00:11 by anchikri          #+#    #+#             */
/*   Updated: 2023/10/27 17:26:28 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	function who allocates memory for an array of nmemb elements of size bytes
//	and returns a pointer to the allocated memory. The memory is set to zero
void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tab;
	size_t	len;

	if (!nmemb || !size)
		return (malloc(0));
	len = nmemb * size;
	if (len / size != nmemb)
		return (NULL);
	tab = malloc(len);
	if (!tab)
		return (NULL);
	ft_memset(tab, 0, len);
	return (tab);
}
