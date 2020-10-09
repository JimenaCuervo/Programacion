#include "stdio.h"
#include "GENFUN.h"



void main ( void )
{
	uint8 var[6]="renata";
	GENFUN_vCapsOn(&var,6);
	printf(" cambio %s\n",var);




}

void GENFUN_vCapsOn (uint8 *pu8Src, uint8 u8SizeOfList) 
{
	while(u8SizeOfList!=0)
	{
		if(*pu8Src>INICIOASCII_MINUSC && *pu8Src<INICIOASCII_MAYUSC)
		{
			*pu8Src-=FACTORCONVERSASCII;

		}
		else
		{

		}	
		pu8Src ++;
		u8SizeOfList --;
	}

}