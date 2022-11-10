#include "../libft.h"

int main(void)
{
	char	*str1 = "1234";
	char	*str2 = "1235";
	int	r_result = strncmp(str1, str2, 3);
	int	m_result = ft_strncmp(str1, str2, 3);
	
	printf("\n");
	printf("FT_STRNCMP : \n");
	printf("\tM_RESULT : %d\n", m_result);
	printf("\tR_RESULT : %d\n", r_result);
	return 0;
}

