#include<process_copy.h>


int block_cur(char *sfile, int pronum)
{
	struct stat st;
	if(stat(sfile, &st) == -1)
	{
		perror("stat");
		return -1;
	}
	int blocksize = st.st_size/pronum;
	if(st.st_size % pronum != 0)
	{
		blocksize++;
	}
	return blocksize;
}
