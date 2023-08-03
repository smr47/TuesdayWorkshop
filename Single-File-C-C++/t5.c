#include <stdio.h>

#include "viz.h"

void counting(int n) {
    logentry;
    for (int i = 0; i < n; i++) {
	logi(i);
    }
    logexit;
}

int main(int argc, char *argv[]) {
    logentry;

    int result = 0;

    logevt("begin decl/def");
    int i = 42; logi(i);
    float f = 123.0; logf(f); logf2(f);
    char *s = "hello"; logs(s);
    logevt("end decl/dev");

    counting(7);

    logexit;
    return result;
}
