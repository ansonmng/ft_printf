/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nansonm <ansonmng@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:03:43 by nansonm           #+#    #+#             */
/*   Updated: 2022/03/14 11:03:54 by nansonm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_formats(va_list args, const char format);
int		ft_printchar(int c);

int		ft_printstr(char *str);
int		ft_printnbr(int n);
void	ft_putchar_fd(char c, int fd);

int		ft_num_len(unsigned int num);
char	*ft_uitoa(unsigned int n);
int		ft_print_unsigned(unsigned int n);

int		ft_hex_len(unsigned int num);
void	ft_put_hex(unsigned int num, const char format);
int		ft_print_hex(unsigned int num, const char format);

int		ft_printptr(unsigned long long ptr);
void	ft_put_ptr(uintptr_t num);
int		ft_ptr_len(uintptr_t num);

char	*ft_itoa(int n);
#endif
