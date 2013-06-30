#include <stdio.h>

//Variables
int subnets=2, hosts=2, steping=2, prefix, subnet_addr[64],broadcast_addr[64];

void main()
{
	int i,tmp;
	printf("Subnetworking exercise\n\n");
	printf("Input a prefix number between [25,30] that matches a class C network.\n");
	scanf("%d",&prefix);
	tmp=prefix-24;
	for(i=1;i<tmp;i++)
		subnets*=2;
	printf("Subnets: %d\n", subnets);

	hosts=32-prefix;
	for(i=1;i<hosts;i++)
		steping*=2;
	hosts=steping-2;
	printf("hosts/subnet: %d\nsubnet address (last byte):\t", hosts-=2);
	
	subnet_addr[0]=0;
    broadcast_addr[0]=steping-1;
	for(i=0;i<subnets;i++)
    {
    	broadcast_addr[i+1]=broadcast_addr[i]+steping;
		subnet_addr[i+1]=subnet_addr[i]+steping;
		printf("%d\t", subnet_addr[i]);
	}
	
	printf("\nbroadcast address (last byte):\t");
    for(i=0; i < subnets; i++)
		printf("%d\t", broadcast_addr[i]);
}