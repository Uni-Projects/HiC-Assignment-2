#include <stdio.h>

void addvector(int *r, const int *a, const int *b, unsigned int len)
{
	unsigned int i;

	for(i=0 ; i<len ; i++)
	{
		*r = *a + *b;
		printf(" %d ",*r);
                r++;
                a++;
                b++;
	}
}

int memcmp(const void *s1, const void *s2,  size_t n)
{
	unsigned char a;
	unsigned char b;

   	for(int i=0 ; i<n ; i++)
	{
		unsigned char a = *(unsigned char *)s1; 
		unsigned char b = *(unsigned char *)s2;

		if(a!= b)
			return a - b;
                s1++;
                s2++;
	}
	return 0;
}

int memcmp_backwards(const void *s1, const void *s2,  size_t n)
{
	unsigned char a;
	unsigned char b;

        s1 = s1+n-1;
	s2 = s2+n-1;

   	for(int i=0 ; i<n ; i++)
	{
		unsigned char a = *(unsigned char *)s1; 
		unsigned char b = *(unsigned char *)s2;

		if(a!= b)
			return a - b;
                s1--;
                s2--;
	}
	return 0;
}

int main()
{
	int len = 5;
	int q[5] = {1,2,3,4,6};
	int w[5] = {1,2,3,4,6};
	int e[5];
	int *r = (int*)&e;
	int *a = (int*)&q;
	int *b = (int*)&w;

        //addvector(r,a,b,len);
        int res = memcmp_backwards(a,b,sizeof(w));	
	printf("%d\n",res);							
	return 0;
}

