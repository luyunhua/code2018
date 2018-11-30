#include <unistd.h>

int main() {
    int a = 4;
    pid_t pid = fork();
    if(pid == 0) {
        a = 5;
        printf("child process, a = %d", a);
    } else {
        printf("parent process,a = %d", a);
    }
    return 0;
}