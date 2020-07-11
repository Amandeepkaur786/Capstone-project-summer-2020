#include<LPC214x.h>
int i,j,k,time;
int delay (int time)
{
	for (i=0;i<500;i++)
	{
		for (j=0;j<time;j++);
	}
}
int main()
{
	while(1)
	{
			PINSEL0=0x00000000;
		IODIR0=0X0000003f;
		
		for(k=0;k<=5;k++)
		{

		IOSET0=(1<<k);
		delay(500);
		IOCLR0=(1<<k);
	  delay(500);
		}
	}
}

		
		