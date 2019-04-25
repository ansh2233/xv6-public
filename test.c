#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
    // toggle();    // toggle the system trace on or off
    ps();
    sleep(1);
    scheduler_log_on();
    create_container(1);
    scheduler_log_off();
    create_container(2);
    scheduler_log_on();
    create_container(3);
    sleep(2);
    create_container(4);
    scheduler_log_off();
    
    // if(fork()==0){

    // }


    join_container(1);
    // sleep(2);
    ps();
    
    // while(1);

    exit();

}
