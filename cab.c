#include <stdio.h>

int main(void) {
    int t,x,y;
    printf("test case");
	scanf("%d",&t);
    printf("price");
	scanf("%d%d",&x,&y);
	
	while(t>0)
	{
	    if(x<y)
	    printf("FIRST");
	    if(x==y)
	    printf("ANY");
	    if(x>y)
	    printf("SECOND");
	    t=t-1;
	}
	return 0;
}

