#include <stdio.h>

int main (void)
{
	short i = 0x1234;
	char x = -127;
	long sn1 = 1024726;
	long sn2 = 1023775;
	int y[2] = {0x11223344,0x44332211};
	char *p = &x;
        int j;


	printf("---------------------------------------------------\n");	
        printf("address           content (hex)       content (dec)\n");
	printf("---------------------------------------------------\n");

	for (j=0; j<27;j++ ){
	
		printf("%p         %x                %d\n",p,*p,*p);	
		p++; 		
			
	}

	printf("---------------------------------------------------\n");

	printf ("i address: %p\n", &i);
	printf ("x address: %p\n", &x);
	printf ("sn1 address: %p\n", &sn1);
	printf ("sn2 address: %p\n", &sn2);
	printf ("y[] address: %p\n", &y);

	printf("---------------------------------------------------\n");

	printf("x is: %ld bytes \n", sizeof(x));
	printf("i is: %ld bytes \n", sizeof(i));
	printf("sn1 is: %ld bytes \n", sizeof(sn1));
	printf("sn2 is: %ld bytes \n", sizeof(sn2));
	printf("y[] is: %ld bytes \n", sizeof(y));	

	return 0;	

}
