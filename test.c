#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

// #define MSGSIZE 8

int main(void)
{   
    create_container(1);
    create_container(2);
    create_container(3);

    int cid = fork();
    if(cid==0){
        join_container(1);
        // open("a.txt", O_CREATE);
        // ls();
        leave_container();
        exit();
    }
    else{
        join_container(2);
        
        int fd = open("b.txt", O_CREATE|O_WRONLY);
        char *buff = "hello";
        write(fd, buff, sizeof(char)*5 );
        
        // close(i);
        // open("b.txt", O_WRONLY);
        // printf(1, "jd\n");
        leave_container();
        exit();
    }   
    

}













// #include "types.h"
// #include "stat.h"
// #include "user.h"


// int
// main(void)
// {
//     printf(1, "----------start----------\n");
//     ps();

//     // sleep(1);
//     create_container(1);
//     create_container(2);
//     create_container(3);
//     create_container(4);
    
//     if(fork()!=0){
//         join_container(1);
//         printf(1,"1\n");
//     }
//     else{
//         join_container(3);
//         printf(1,"2\n");
//     }
//     scheduler_log_on();

//     // sleep(2);
//     // sleep(5);

//     printf(1, "exiting\n");
//     exit();
//     exit();
//     exit();

// }
