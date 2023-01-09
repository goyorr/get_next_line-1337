/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:25:36 by zel-kach          #+#    #+#             */
/*   Updated: 2022/12/01 19:25:38 by zel-kach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line_bonus.h"

char	*ft_strjoin(char *stash, char *buffer)
{
	char	*newstash;
	int		i;
	int		j;

	if (!stash && buffer)
		return (buffer);
	if (stash && !buffer)
		return (stash);
	if (stash && buffer)
	{
		newstash = (char *)malloc(((ft_strlen(stash) + ft_strlen(buffer)) + 1));
		if (!newstash)
			return (free(stash), free(buffer), NULL);
		i = -1;
		j = -1;
		while (stash[++i])
			newstash[i] = stash[i];
		while (buffer[++j])
			newstash[i + j] = buffer[j];
		newstash[i + j] = '\0';
		return (free(stash), free(buffer), newstash);
	}
	return (free(stash), free(buffer), NULL);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

int	newline(const char *stash)
{
	int		i;

	i = -1;
	if (!stash)
		return (0);
	while (stash && stash[++i])
		if (stash[i] == '\n')
			return (1);
	return (0);
}

char	*ft_strdup(char *s1)
{
	int		i;
	char	*s2;

	i = ft_strlen(s1);
	s2 = malloc(i + 1);
	if (!s2)
		return (NULL);
	i = -1;
	while (s1[++i])
		s2[i] = s1[i];
	s2[i] = 0;
	return (s2);
}
