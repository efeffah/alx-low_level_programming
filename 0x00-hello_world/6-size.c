#include <stdio.h>
/**
 * main - A program that prints the size of various types of computer
 * Return: 0 (Successs)
 */
int main(void)
{
char a;
int b;
long int l;
long long int d;
float f;
printf("Size of a char: %li byte(s)\n" , (unsigned long)
sizeofof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
