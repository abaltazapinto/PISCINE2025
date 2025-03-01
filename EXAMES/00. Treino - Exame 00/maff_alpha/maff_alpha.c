#include <unistd.h>

int main()
{
	char i = 'a';

	while(i <= 'z'){
	
		if((i - 'a') % 2 != 0){
			
			char upper = i - 32;
			write(1, &upper,1);
		}else {
			write(1, &i, 1);
		}
		i++;
	}
	return (0);
}
