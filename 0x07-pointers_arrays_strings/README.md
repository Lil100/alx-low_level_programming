ALX course on even more pointers, arrays and strings.
I use betty style and _putchar function. There is a main.c file that has the prototypes.
Task 0 writes a function that fills memory with a constant byte with -Prototype: char *_memset(char *s, char b, unsigned int n);
The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
Returns a pointer to the memory area s
Task 1:Writes a function that copies memory area.
Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
The _memcpy() function copies n bytes from memory area src to memory area dest
Returns a pointer to dest
Task 2:Write a function that locates a character in a string.
Prototype: char *_strchr(char *s, char c);
Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
Task 3:Write a function that gets the length of a prefix substring.
Prototype: unsigned int _strspn(char *s, char *accept);
Returns the number of bytes in the initial segment of s which consist only of bytes from accept

