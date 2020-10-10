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

     while( u8SizeOfList != 0 )

     {

         if( *pu8Src INICIOASCII_MINUSC >=  && *pu8Src <= INICIOASCII_MAYUSC )

         {

             *pu8Src += FACTORCONVERSASCII    ;

         }

         pu8Src++;

         u8SizeOfList--;

     }

 }
 
uint8 GENFUN_u8GetOccurrence ( uint8 *pu8Src, uint8 u8Target, uint8 u8SizeOfList )

 {

     uint8 u8ArrayOcurrences = 0;
 
    while ( u8SizeOfList != 0 )

     {

         if( *pu8Src ==  u8Target )

         {

             u8ArrayOcurrences++;

         }

     pu8Src++;

     u8SizeOfList--;

     }

 return u8ArrayOcurrences;

 }
 /*
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

*/
 
uint8 GENFUN_u8GetAverage( uint8 *pu8Src, uint8 u8SizeOfList )

 {

     uint8 AverageOfArray = 0;
 
    while ( u8SizeOfList != 0 )

     {

         AverageOfArray += *pu8Src;

         pu8Src++;

         u8SizeOfList--;

     }

     AverageOfArray = AverageOfArray / u8SizeOfList;

     return AverageOfArray;

 }
 
void GENFUN_u8MemSet (uint8 *pu8Src, uint8 u8Char2Set, uint8 u8SizeOfList)

 {

     uint8 *pu8Dest = pu8Src;
 
    while ( u8SizeOfList-- > 0 )

     {

         *pu8Dest++ = u8Char2Set;

     }

     return *pu8Src;

 }

[10:31] JIMENA CUERVO ESQUIVEL
void GENFUN_u8MemCopy (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList)

{

    for ( int i = 0; i < u8SizeOfList; i++ )

    {

        pu8Src[i] = pu8Dest[i];

    } 

} void GENFUN_vSortList (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList)

{

    for ( int i = 0; i < u8SizeOfList; ++i ) 

    {         for ( int j = i + 1; j < u8SizeOfList; ++j )

        {             if ( pu8Src[i] > pu8Src[j] ) 

            {

                uint8 u8TemporalVar =  pu8Src[i];

                pu8Src[i] = pu8Src[j];

                pu8Src[j] = u8TemporalVar;

            }

        }

    }

} void GENFUN_vSoftSignal (uint8 *pu8Src, uint8 *pu8Dest)

{

    for ( int i = 0; i<256; i++ )

    {

        pu8Dest[i]=(pu8Src[i] + pu8Src[i+1])/2;

    } } void GENFUN_vFilterSignal (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8MaxVal, uint8 u8MinVal)

{

for ( int i = 0; i < CHAR_HIGH_THRESHOLD; ++i ) 

    {

        for ( int j = i + 1; j < CHAR_HIGH_THRESHOLD; ++j )

        {

            if ( pu8Src[i] > UPPER_BOUND )  

            {

                pu8Src[i] = UPPER_BOUND;

            }

            else if ( pu8Src[i] < LOWER_BOUND )

            {

                // nothing to do//

            }

        }

    }

}

