#include <stdio.h>
#include <ctype.h>

/**
 * main - program entry
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int lowerCase = 'a';
while (lowerCase <= 'z')
{
putchar(lowerCase);
lowerCase += 1;
}
putchar('\n');
 return (0);
}
