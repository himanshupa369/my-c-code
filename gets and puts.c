#include <stdio.h>

int main() {
    char buffer[100];
    
    puts("Enter a line of text:");
    gets(buffer); // Reads a line of text using gets()
    
    puts("You entered:");
    puts(buffer);
    
    puts("Enter a character:");
    int ch = getchar(); // Reads a single character using getchar()
    
    puts("You entered the character:");
    putchar(ch);

    return 0;
}
