/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdenion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 11:14:53 by tdenion           #+#    #+#             */
/*   Updated: 2016/02/08 18:35:48 by tdenion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i != n)
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		if ((unsigned char)c == ((unsigned char*)src)[i])
			return (&((unsigned char*)dst)[i + 1]);
		i++;
	}
	return (NULL);
}
