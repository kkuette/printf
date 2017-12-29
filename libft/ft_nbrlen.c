/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdenion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 14:24:21 by tdenion           #+#    #+#             */
/*   Updated: 2016/09/22 14:53:11 by tdenion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbrlen(intmax_t nb)
{
	int result;

	result = 0;
	if (nb < 0)
	{
		result++;
		nb *= -1;
	}
	if (nb == 0)
		result = 1;
	while (nb > 0)
	{
		nb = nb / 10;
		result++;
	}
	return (result);
}
