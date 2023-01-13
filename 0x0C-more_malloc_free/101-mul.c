#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int _isnum(const char *str) {
    int i = 0;

    while (str[i]) {
        if (!isdigit(str[i])) {
            return 0;
        }
        i++;
    }

    return 1;
}

int _mul(const char *n1, const char *n2) {
    return atoi(n1) * atoi(n2);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    if (!_isnum(argv[1]) || !_isnum(argv[2])) {
        printf("Error\n");
        return 98;
    }

    int result = _mul(argv[1], argv[2]);
    printf("%d\n", result);
    return 0;
}
