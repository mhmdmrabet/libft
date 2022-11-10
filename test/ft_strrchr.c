#include "../libft.h"

int main(void)
{
	char	*string = "This is my string !";
	char	*r_result = strrchr(string, 'i');
	char	*m_result = ft_strrchr(string, 'i');
	
	if (!m_result)
	{
		printf("M_RESULT : NULL\n");
	}
	else 
	{
		printf("M_RESULT : %s\n", m_result);
	}
	printf("--------------------\n");
	if (!r_result)
	{
		printf("R_RESULT : NULL\n");
	}
	else 
	{
		printf("R_RESULT : %s\n", r_result);
	}
	return 0;
}

