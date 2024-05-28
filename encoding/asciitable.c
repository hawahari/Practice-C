#include <stdio.h>
#include <string.h>

void main()
{
	int z;
printf("C Hex Oct Dec \
C Hex Oct Dec \
C Hex Oct Dec \
C Hex Oct Dec\n");
for(z=0;z<32;z++)
{
printf("- %3x %3o %3d |",z,z,z);
printf("%c %3x %3o %3d |",z+32,z+32,z+32,z+32);
printf("%c %3x %3o %3d |",z+64,z+64,z+64,z+64);
printf(" %c %3x %3o %3d \n",z+96,z+96,z+96,z+96);
}
}
