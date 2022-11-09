#include "./../libft.h"

int	main(void)
{
	const char * oussama = "tripouille";
	char * result = ft_strchr(oussama, 'z');
	if (result)
	{
		printf("%s\n", result);
	}
	else 
		printf("NULL\n");
	return (0);
}