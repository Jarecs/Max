#include <unistd.h>

void ft_print_alphabet(void){
	for (char i = 'a'; i <= 'z'; i++) {
		write(1, &i, 1);
	}	
}

int main(void)
{
	ft_print_alphabet();
	return 0;
}