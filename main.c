// test comment
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h> // for perror

#include <stdlib.h>
#include <string.h>

#include <sys/wait.h>

int main (int argc, char *argv[]) {

    pid_t childpid = 0;
    int counter1, counter2;
    int n, k, m;

    // checks for proper number of args
    if (argc != 4) {
        fprintf(stderr, "Invalid number of command line args.");
        return 1;
    }

    // get command line values
    n = atoi(argv[1]);
    k = atoi(argv[2]);
    m = atoi(argv[3]);


    for (counter1 = 1; counter1 < n; counter1++) {
        sleep(2);
    if((childpid = fork()))
        break;
    }


    for (counter2 = 0; counter2 < k; counter2++) {

//        fprintf(stderr, "i:%d process ID:%ld parent ID:%ld child ID:%ld\n", counter1,
//                (long) getpid(), (long) getppid(), (long) childpid);

        fprintf(stderr, "i:%d", counter1);
        fprintf(stderr, "process ID:%ld ", (long)getpid());
        fprintf(stderr, "parent ID:%ld ", (long)getppid());
        fprintf(stderr,"child ID:%ld\n", (long)childpid);

        sleep(m);
    }

//int main (void) {

//    // gets pid and ppid
//    printf("process id: %ld\n", (long)getpid());
//    printf("parents process id: %ld\n", (long)getppid());
//
//    // fork example
//    int x;
//     x = 0;
//     fork();
//     x = 1;
//     printf("process: %ld, x: %d\n\n", (long)getpid(), x);
//
//
//     // ex 3.6
//     // fork and perror
//     int childpid = fork();
//     if (childpid == -1) {
//         perror("Fork Failed.\N");
//         return 1;
//     }
//     if (childpid == 0)
//         printf("Child at: %ld\n", (long)getpid());
//     else
//         printf("Parent at: %ld\n", (long)getpid());
//
//     // how does everything from here up work TOGETHER???

     //ex 3.7
//     pid_t childpid;
//     pid_t mypid;
//
//     mypid = getpid();
//     childpid = fork();
//
//     if(childpid == -1) {
//         perror("Fork Failed.");
//         return 1;
//     }
//     if(childpid == 0)
//         printf("child: %ld, ID = %ld\n", (long)getpid(), (long)mypid);
//     else
//         printf("parent: %ld, ID = %ld\n", (long)getpid(), (long)mypid);
//
//    return 0;
}


//    // gets pid and ppid
//    printf("process id: %ld\n", (long)getpid());
//    printf("parents process id: %ld\n", (long)getppid());
//
//    // fork example
//    int x;
//     x = 0;
//     fork();
//     x = 1;
//     printf("process: %ld, x: %d\n\n", (long)getpid(), x);
//
//
//     // ex 3.6
//     // fork and perror
//     int childpid = fork();
//     if (childpid == -1) {
//         perror("Fork Failed.\N");
//         return 1;
//     }
//     if (childpid == 0)
//         printf("Child at: %ld\n", (long)getpid());
//     else
//         printf("Parent at: %ld\n", (long)getpid());
//
//     // how does everything from here up work TOGETHER???
//
//     //ex 3.7
//     pid_t childpid;
//     pid_t mypid;
//
//     mypid = getpid();
//     childpid = fork();
//
//     if(childpid == -1) {
//         perror("Fork Failed.");
//         return 1;
//     }
//     if(childpid == 0)
//         printf("child: %ld, ID = %ld\n", (long)getpid(), (long)mypid);
//     else
//         printf("parent: %ld, ID = %ld\n", (long)getpid(), (long)mypid);

