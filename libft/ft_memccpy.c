/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:52:57 by qduperon          #+#    #+#             */
/*   Updated: 2015/11/27 18:33:21 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*str_dest;
	char	*str_src;

	i = 0;
	str_dest = (char *)dest;
	str_src = (char *)src;
	if (!dest || !src)
		return (NULL);
	while (i < n)
	{
		str_dest[i] = str_src[i];
		if ((unsigned char)c == str_dest[i])
			return ((void *)&str_dest[i + 1]);
		i++;
	}
	return (NULL);
}
