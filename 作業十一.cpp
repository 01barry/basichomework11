#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int h,k,z;
printf("叫块俱计计\n");
scanf("%d%d%d",&h,&k,&z);
if(h>k)
if(h>z)
if(k>z)
printf("计パ=%d,%d,%d\n",z,k,h);
else
printf("计パ=%d,%d,%d\n",k,z,h);
else
printf("计パ=%d,%d,%d\n",k,h,z);
else
if (k>z)
if (h>z)
printf("计パ=%d,%d,%d\n",z,h,k);
else
printf("计パ=%d,%d,%d\n",h,z,k);
else
printf("计パ=%d,%d,%d\n",h,k,z);
system("pause");
return 0;
}
