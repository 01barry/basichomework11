#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int h,k,z;
printf("�п�J�T�Ӿ�ƼƦr\n");
scanf("%d%d%d",&h,&k,&z);
if(h>k)
if(h>z)
if(k>z)
printf("�T�ƥѤp��j=%d,%d,%d\n",z,k,h);
else
printf("�T�ƥѤp��j=%d,%d,%d\n",k,z,h);
else
printf("�T�ƥѤp��j=%d,%d,%d\n",k,h,z);
else
if (k>z)
if (h>z)
printf("�T�ƥѤp��j=%d,%d,%d\n",z,h,k);
else
printf("�T�ƥѤp��j=%d,%d,%d\n",h,z,k);
else
printf("�T�ƥѤp��j=%d,%d,%d\n",h,k,z);
system("pause");
return 0;
}
