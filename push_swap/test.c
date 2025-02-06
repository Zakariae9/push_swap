// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int	is_num_duplicate(char **str)
{
	int	i;
	int	j;
	int	counter;
	int	len;

	i = 0;
	while (str[i])
	{
		len = strlen(str[i]);
		j = 0;
		counter = 0;
		while (i > j)
		{
			if (strncmp(str[i], str[j], len) == 0)
				counter++;
			if (counter == 2)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int main() {
char *str[] = {"10", "43", "33", "10", NULL};  

    printf("%d\n", is_num_duplicate(str));

    return 0;
}