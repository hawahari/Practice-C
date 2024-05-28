#include <stdio.h>
char *binString(char a)
{
	static char b[9];
	int i;
	i = 0;
	while( i<8 )
	{
		b[i] = a&0x80 ? '1' : '0';
		a <<= 1;
		i++;
	}
	b[i] = '\0';

	return(b);
}

int main()
{
	int a;
	printf("Input a character:");
	scanf("%d",&a);
	printf("%02x %d %c %s\n",a,a,a,binString(a));
	return(0);
}
