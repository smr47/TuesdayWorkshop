#include <stdio.h>

#include "viz.h"

/* #define tag __FILE__, __LINE__ */

/* #define logentry printf("%s:%d %s entry\n", tag, __FUNCTION__); fflush(stdout) */
/* #define logexit printf("%s:%d %s exit\n", tag, __FUNCTION__); fflush(stdout) */
/* #define logevt(evt) printf("%s:%d %s\n", tag, evt); fflush(stdout) */

/* #define logi(i) printf("%s:%d %s=%d\n", tag, #i, i); fflush(stdout) */
/* #define logf(f) printf("%s:%d %s=%f\n", tag, #f, f); fflush(stdout) */
/* #define logf2(f) printf("%s:%d %s=%.2f\n", tag, #f, f); fflush(stdout) */
/* #define logs(s) printf("%s:%d %s=\"%s\"\n", tag, #s, s); fflush(stdout) */

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
