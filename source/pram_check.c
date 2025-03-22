#include<process_copy.h>


int pram_check(char *sfile,int argc,int pronum)
{
	if(argc < 3)
	{
		printf("参数数量不足\n");
		return -1;
	}
	if(access(sfile,F_OK) == -1)
	{
		printf("源文件不存在\n");
		return -1;
	}
	if(pronum <= 0)
	{
		printf("进程数量无效\n");
		return -1;
	}
	return 0;

}
