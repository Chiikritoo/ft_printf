/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <anchikri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 08:20:21 by anchikri          #+#    #+#             */
/*   Updated: 2023/11/09 19:45:57 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "../libft/libft.h"

int		ft_printf(const char *s, ...);
int		ft_print_char(int c);
int		ft_print_hex(unsigned long n, char hex);
int		ft_print_int(int n);
int		ft_print_percent(void);
int		ft_print_pointer(void *ptr);
int		ft_print_string(char *s);
int		ft_print_unsigned(unsigned int n);
char	*ft_itoa_base(unsigned long n, char hex[16]);
char	*ft_uitoa(unsigned int n);

#endif