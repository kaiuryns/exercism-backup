#include "phone_number.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

static int jump(char c) {
    return strchr(" +-().", c) != NULL;
}

static char *error(char *err) {
    memset(err, '0', 10);
    return err;
}

char *phone_number_clean(const char *input) {
    char *ptr = malloc(11);
    if (!ptr)
        return NULL;

    ptr[10] = '\0';

    int count = 0;
    for (int i = 0; input[i]; i++) {
        if (jump(input[i]) ||
            (count == 0 && input[i] == '1'))
            continue;

        if (!isdigit(input[i]) ||
            ((count == 0 || count == 3) && input[i] < '2')
            || count == 10)
            return error(ptr);

        ptr[count] = input[i];
        count++;
    }
    if (count < 10)
        return error(ptr);
    
    return ptr;
}