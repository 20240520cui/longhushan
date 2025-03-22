#include<process_copy.h>

void waiting(){
	pid_t pid;
	if(pid >0)
	{
		pid_t zpid;
		zpid = wait(NULL);
		while(1)
			sleep(1);
	}else if(pid == 0)
	{
		exit(0);
	}else{
	}
}
