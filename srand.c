#include<time.h>
#include<stdlib.h>

//获取随机数，使用srand作为随机种子 
int main (void)
{
    int i ,j;
    srand((int)time(0));
    for(i=0;i<15;i++)
	{
	j=1+(int)(36.0*rand()/(RAND_MAX+1.0));
	printf("%d \n",j);
	}
}

