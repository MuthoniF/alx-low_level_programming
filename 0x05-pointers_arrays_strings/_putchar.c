#include <unistd.h>

/**
 * Writes a single character to the standard output stream.
 * @param c the character to write
 * @return the character written, or -1 on error
 */
int _putchar(char c) {
    return write(STDOUT_FILENO, &c, 1);
}
