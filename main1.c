#include<LPC214x.h>
#define input IOPIN0
int i,j,time;
int delay (int time)
{
	for(i=0;i<=500;i++)
	{
		for(j=0;j<=time;j++);
	}
}
void main()
{
	PINSEL0=0x00000000;
	
	
	IODIR0=0x00002001;
	IODIR1=0x00010000;
	
	
	while(1)
	{
		if(input&(1<<2))
		{
			
		IOSET0=(1<<13);
		delay(500);
			
			
		}
	else if(input&(1<<16))
		{
		IOSET0=(1<<0);
			delay(500);
			IOSET1=(1<<16);
			delay(500);
		}
		else
		{
		IOCLR0=(1<<13);
		delay(500);
		IOCLR0=(1<<0);
			delay(500);
			IOCLR1=(1<<16);
			delay(500);
			
}
}
}

