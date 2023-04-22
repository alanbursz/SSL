#include <stdio.h>

int main(void) 
{
freopen("output.txt", "w", stdout);
printf("Hello, World!\n");
fclose(stdout);
return (0);
}