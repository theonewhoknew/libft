/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtome-pe <dtome-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:05:07 by dtome-pe          #+#    #+#             */
/*   Updated: 2023/05/10 10:41:45 by dtome-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{	
	const char	*ptr;
	int			n;

	n = 0;
	ptr = s;
	while (*ptr != '\0')
	{
		if (*ptr == (char)c)
			return ((char *)ptr);
		ptr++;
	}
	if (*ptr == '\0' && (char) c == 0)
		return ((char *) ptr);
	return (NULL);
}
/*
#include "string.h"
#include <stdio.h>
int main(void)
{
 	//strchr(s, 't' + 256);
 	ft_strchr("teste", '\0');

}
*/