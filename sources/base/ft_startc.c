/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_startc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiri <abiri@1337.MA>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:42:14 by abiri             #+#    #+#             */
/*   Updated: 2018/10/08 18:46:58 by abiri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_startc(int colorcode)
{
#if defined(_MSC_VER)
	ft_putstr("\\e[");
#else
	ft_putstr("\e[");
#endif
	ft_putnbr(colorcode);
	ft_putchar('m');
}
