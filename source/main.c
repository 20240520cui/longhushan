#include<process_copy.h>

int main(int argc, char** argv)
{
	char *sfile=argv[1];
	char *dfile= argv[2];
	int pronum=(argc > 3)?atoi(argv[3]):3;

	if(pram_check(sfile, argc, pronum) != 0)
	{
		return -1;
	}
	int blocksize = block_cur(sfile,pronum);
	process_creat(sfile,dfile,blocksize,pronum);
	waiting();
	return 0;
}
