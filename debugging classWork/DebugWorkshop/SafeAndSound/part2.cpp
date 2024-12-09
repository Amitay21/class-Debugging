#include "part2.h"
#include <iostream>
#include <stdexcept>

char* safe_string_copy(char* dest, unsigned int destsize, const char* src)
{
	unsigned int srcsize = (unsigned int)strlen(src);
	if (srcsize + 1 > destsize) // +1 עבור '\0'
		throw std::overflow_error("possible buffer overflow");

	char* ret = dest;
	while ((*dest++ = *src++)); // העתקה כולל '\0'
	return ret;
}



#define BUF_SIZE 20
void part2()
{
	char password[] = "secret";
	char dest[BUF_SIZE];
	char src[] = "hello world!";

	safe_string_copy(dest, BUF_SIZE, src);

	std::cout << src << std::endl;
	std::cout << dest << std::endl;
}
