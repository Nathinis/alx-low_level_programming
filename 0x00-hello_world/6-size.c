#include <stdio.h>
/**
 * 
 *
 *
*/
int main(void)
{
	char character;
	int integer;
	long along;
	long long alonglong;
	float afloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(character));
	printf("Size of an int: %lu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", sizeof(along));
	printf("Size of long long int: %lu byte(s)\n", sizeof(alonglong));
	printf("Size of a float: %lu byte(s)\n", sizeof(afloat));

	return (0);
}
