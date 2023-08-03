# pragma once

#include <stdio.h>

#define tag __FILE__, __LINE__

#define logentry printf("%s:%d %s entry\n", tag, __FUNCTION__); fflush(stdout)
#define logexit printf("%s:%d %s exit\n", tag, __FUNCTION__); fflush(stdout)
#define logevt(evt) printf("%s:%d %s\n", tag, evt); fflush(stdout)

#define logi(i) printf("%s:%d %s=%d\n", tag, #i, i); fflush(stdout)
#define logf(f) printf("%s:%d %s=%f\n", tag, #f, f); fflush(stdout)
#define logf2(f) printf("%s:%d %s=%.2f\n", tag, #f, f); fflush(stdout)
#define logs(s) printf("%s:%d %s=\"%s\"\n", tag, #s, s); fflush(stdout)
