/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:57:58 by qduperon          #+#    #+#             */
/*   Updated: 2015/11/27 17:17:55 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str_s;

	i = 0;
	str_s = (unsigned char *)s;
	if (n && c)
	{
		while (str_s[i] && i < n)
		{
			if (str_s[i] == (unsigned char)c)
				return ((void *)&str_s[i]);
			i++;
		}
	}
	return (NULL);
}
