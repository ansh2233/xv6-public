#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
	// toggle();	// toggle the system trace on or off
	// ps();
	
	create_container(1);
	create_container(2);
	create_container(3);
	create_container(4);
	
	// if(fork()==0){

	// }


	join_container(1);
	// sleep(2);
	ps();
	
	// while(1);

	exit();

}
