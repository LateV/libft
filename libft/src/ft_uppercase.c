#include "libft.h"

void	ft_uppercase(char **str)
{
	int i;

	i = 0;
	while ((*str)[i] != '\0')
	{
		(*str)[i] = ft_toupper((*str)[i]);
		i++;
	}
}
