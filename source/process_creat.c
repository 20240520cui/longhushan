#include<process_copy.h>

void process_creat(char* sfile, char* dfile,int blocksize,int pronum)
{
	pid_t pid;
	for(int i=0;i<pronum;i++)
	{
		pid= fork();
		if(pid == 0)
		{
			int pos = i* blocksize;
			char pos_str[20];
			char blocksize_str[20];
			snprintf(pos_str,sizeof(pos_str),"%d",pos);
			snprintf(blocksize_str,sizeof(blocksize_str),"%d",blocksize);
			execl("/home/colin/20240520f/process_copy/mod/copy","copy",sfile,dfile,pos_str,blocksize_str,NULL);
		}else if(pid <0){
			perror("fork failed");
			exit(0);
		}
	}
}

