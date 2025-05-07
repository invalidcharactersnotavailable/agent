#include "ai.h"

#include <stdio.h>
#include <string.h>

char* greet(const char* name) {
    char* greeting = malloc(strlen(name) + 8);
    sprintf(greeting, "Hello, %s", name);
    return greeting;
}
