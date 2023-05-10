/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtome-pe <dtome-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:07:12 by dtome-pe          #+#    #+#             */
/*   Updated: 2023/05/10 14:26:05 by dtome-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_calculate_nbytes(size_t str_len, size_t nbytes,
					unsigned int start, size_t len)
{
	nbytes = (str_len - start) - (str_len - len);
	if (nbytes < 0)
		nbytes *= -1;
	++nbytes;
	return (nbytes);
}

static char	*ft_null_string(void)
{	
	char	*substr;

	substr = (char *)malloc(1);
	if (!substr)
		return (NULL);
	substr[0] = '\0';
	return (substr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned long	i;
	size_t			str_len;
	size_t			nbytes;

	nbytes = 0;
	i = 0;
	str_len = ft_strlen(s);
	if (start >= ft_strlen(s) || len == 0)
		return (ft_null_string());
	if (len > ft_strlen(s))
		substr = (char *)malloc(sizeof (char) * (str_len + 1));
	else
	{
		nbytes = ft_calculate_nbytes(str_len, nbytes, start, len);
		substr = (char *)malloc(sizeof (char) * nbytes);
	}
	if (!substr)
		return (NULL);
	while (i < len && s[start])
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
/*
#include <stdio.h>

int main(void)
{
	
	printf("%s", ft_substr("hola", 0, 18446744073709551615));
}
*/