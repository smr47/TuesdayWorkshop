#include <stdio.h>

#define tag __FILE__, __LINE__

#define logentry printf("%s:%d %s entry\n", tag, __FUNCTION__)
#define logexit printf("%s:%d %s exit\n", tag, __FUNCTION__)

#define logi(i) printf("%s:%d %s=%d\n", tag, #i, i)
#define logf(f) printf("%s:%d %s=%f\n", tag, #f, f)
#define logf2(f) printf("%s:%d %s=%.2f\n", tag, #f, f)
#define logs(s) printf("%s:%d %s=\"%s\"\n", tag, #s, s)

int main(int argc, char *argv[]) {
    logentry;

    int result = 0;

    int i = 42; logi(i);
    float f = 123.0; logf(f); logf2(f);
    char *s = "hello"; logs(s);

    logexit;
    return result;
}
