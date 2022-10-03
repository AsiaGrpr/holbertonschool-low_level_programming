  1 #include <stdio.h>
  2 /**
  3  * main - print the lowercase numbers of base 16
  4  *@void: Null value
  5  *
  6  * Return: Zero value
  7 */
  8 
  9 int main(void)
 10 {
 11     char i;
 12 
 13     for (i = 0 ; i <= 9 ; i++)
 14         putchar (i);
 15 
 16     for (i = 'a' ; i <= 'f' ; i++)
 17         putchar (i);
 18 
 19     putchar ('\n');
 20 
 21     return (0);
 22 }
