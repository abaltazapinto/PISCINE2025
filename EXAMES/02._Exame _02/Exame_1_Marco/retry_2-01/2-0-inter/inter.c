#include <unistd.h>

void solve(char *str1, char *str2) {
	int i;
	int ascii[256] = {0}; // tabela ascii para marcar os caracteres presentes
	

	//percorre str2 e marca os caracteres presentes
	i = 0;
	while(str2[i])
	{
		ascii[(int)str2[i]] = 1;
		i++;
	}

	i = 0;
	while(str1[i])
	{
		if(ascii[(int)str1[i]] == 1)
		{
			ascii[(int)str1[i]] = 2;
			write(1,&str1[i],1);
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if(ac == 3)
		solve(av[1], av[2]);
	write(1, "\n", 1);
	return 0;
}
