#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {

    printf("%d \n", getpid());

    pid_t pid;

    pid = fork(); 

    if (pid > 0) {

        printf ("I am the parent of pid=%d!\n", pid);

    } else if (pid == 0) {

        printf("child %d \n", getpid());

        printf("parent %d \n", getppid());



        printf ("I am the child!\n"); 

    } else if (pid == -1) {

        perror ("fork");

    }

    sleep(5);

}
