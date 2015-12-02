/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:47:20 by qduperon          #+#    #+#             */
/*   Updated: 2015/11/27 11:18:21 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (*dest)
		dest++;
	while (*src != '\0' && i < n)
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}
