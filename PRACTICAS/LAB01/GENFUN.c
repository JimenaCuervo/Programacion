#include "stdio.h"
#include "GENFUN.h"



void main ( void )
{
	uint8 var[6]="renata";
	uint8 var2[0]=" ";

	GENFUN_vCapsOn(&var,6);
	
	printf(" cambio %s\n",var);
	var2[0]=GENFUN_u8GetOccurence(var,'A',6);
	printf(" cambio %c\n",var2[0]);

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

void GENFUN_vCapsOff (uint8 *pu8Src, uint8 u8SizeOfList) 
{



}

uint8 GENFUN_u8GetOccurence (uint8 *pu8Src, uint8 u8Target, uint8 u8SizeOfList) 
{
	uint8 var2[0];

	int j=0;
	while(u8SizeOfList!=0)
	{
		if(*pu8Src==u8Target)
		{
			
			j++;

		}
		pu8Src ++;	
		u8SizeOfList --;
	}
	var2[0]='2';
	return var2[0];
}

uint8 GENFUN_u8GetAverage (uint8 *pu8Src, uint8 u8SizeOfList) 
{


}

void GENFUN_u8MemSet (uint8 *pu8Src, uint8 u8Char2Set, uint8 u8SizeOfList) 
{




}

void GENFUN_vSortList (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList) 
{


}

void GENFUN_vSoftSignal (uint8 *pu8Src, uint8 *pu8Dest) 
{


}

void GENFUN_vFilterSignal (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8MaxVal, uint8 u8MinVal) 
{


}
