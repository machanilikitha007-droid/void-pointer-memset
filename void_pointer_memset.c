#include <stdio.h>
#include <string.h>

int main()
{
    char message[20] = "Hello";

    void *ptr = message;

    memset(ptr, '*', 5);

    printf("Modified string: %s\n", message);

    return 0;
}
