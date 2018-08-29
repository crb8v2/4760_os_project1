
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h> // for perror

int main (void) {

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
     pid_t childpid;
     pid_t mypid;

     mypid = getpid();
     childpid = fork();

     if(childpid == -1) {
         perror("Fork Failed.");
         return 1;
     }
     if(childpid == 0)
         printf("child: %ld, ID = %ld\n", (long)getpid(), (long)mypid);
     else
         printf("parent: %ld, ID = %ld\n", (long)getpid(), (long)mypid);


     
    return 0;
}
