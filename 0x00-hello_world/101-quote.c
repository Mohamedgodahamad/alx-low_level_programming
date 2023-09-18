#include <unistd.h>

/* Prototype for the _putchar function */
int _putchar(char c);

int main(void) {
    char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    int i;

    for (i = 0; text[i] != '\0'; i++) {
        _putchar(text[i]);
    }

    return (0);
}

/* Definition of the _putchar function */
int _putchar(char c) {
    return write(2, &c, 1);  // Write to standard error (file descriptor 2)
}
