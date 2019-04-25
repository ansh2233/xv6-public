#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
	// toggle();	// toggle the system trace on or off
	// scheduler_log_on();

	int c1 = create_container(1);
	int c2 = create_container(2);
	int pid = fork();

	if(c1<0 || c2<0){
		printf(1, "Error\n");
	}
	if(pid==0){
		join_container(2);
		sleep(1);
		printf(1,"I am a child\n");
	}
	else{
		join_container(1);
		sleep(1);
	}

	// sleep(5);
	ps();
	// wait();
	exit();
}
