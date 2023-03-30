#include <unistd.h>

void ft_hello()
{
	write(1, "Hello, World", 12);
}

int main()
{
	ft_hello();
}
