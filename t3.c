#include <stdio.h>

#define tag __FILE__, __LINE__

int main(int argc, char *argv[]) {
    int result = 0;

    printf("%s:%d %s main entry\n", tag, argv[0]);

    printf("%s:%d %s main exit\n", tag, argv[0]);
    return result;
}
