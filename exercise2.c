#include <stdio.h>
#include <stdbool.h>


int main()
{
	bool t = true;
	bool f = false;

        printf("size of true: %ld bytes\n", sizeof(t));
	printf("size of false: %ld bytes\n", sizeof(f));
	bool *p = &t;
        printf("hex of true: %x\n", *p);
	printf("hex of false: %x\n", f);
        
	
	*p = 0xff3;
	
        printf("hex of true: %x\n", *p);

	return 0;
}


