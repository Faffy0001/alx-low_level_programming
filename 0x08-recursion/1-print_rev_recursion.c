#include <stdio.h>

void _print_rev_recursion(char *s) {
    // Base case: if the string is empty, return
    if (*s == '\0') {
        return;
    }
    
    // Recursively call the function with the next character in the string
    _print_rev_recursion(s + 1);
    
    // Print the current character in the string
    putchar(*s);
}

int main() {
    char str[] = "Hello, world!";
    _print_rev_recursion(str);
    putchar('\n');
    return 0;
}
