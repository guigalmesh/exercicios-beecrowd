#include <stdio.h>

void print_spaces(int n) {
    for (int i = 0; i < n; i++) {
        printf(" ");
    }
}

void print_line(int leading_spaces, char letter, int middle_spaces) {
    print_spaces(leading_spaces);
    printf("%c", letter);
    if (middle_spaces > 0) {
        print_spaces(middle_spaces);
        printf("%c", letter);
    }
    printf("\n");
}

int main() {
    print_line(7, 'A', 0);
    print_line(6, 'B', 1);
    print_line(5, 'C', 3);
    print_line(4, 'D', 5);
    print_line(3, 'E', 7);

    print_line(4, 'D', 5);
    print_line(5, 'C', 3);
    print_line(6, 'B', 1);
    print_line(7, 'A', 0);

    return 0;
}
