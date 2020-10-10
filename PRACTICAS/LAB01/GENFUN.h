typedef unsigned char uint8;
typedef unsigned short uint16;


#define ASCII_HIGH_THRESHOLD_CAPSON_TO_OFF        122           
#define ASCII_TARGET_CODE						108
#define ASCII_LOW_THRESHOLD_CAPSON_TO_OFF        97            

#define ASCII_LOW_TRESHOLD_TO_ON                65  
#define ASCII_CONVERSION_FACTOR					32    
#define ASCII_HIGH_TRESHOLD_TO_ON				90
#define ASCII_CODE_MEMSET						36
#define CHAR_HIGH_THRESHOLD						256
#define ASCII_CODE_MEMSET                       36   
#define UPPER_BOUND								180         
#define LOWER_BOUND                             80            





void GENFUN_vCapsOn ( uint8 *pu8Src, uint8 u8SizeOfList ); 
void GENFUN_vCapsOff ( uint8 *pu8Src, uint8 u8SizeOfList ); 
uint8 GENFUN_u8GetOccurrence ( uint8 *pu8Src, uint8 u8Target, uint8 u8SizeOfList ); 
uint8 GENFUN_u8GetAverage( uint8 *pu8Src, uint8 u8SizeOfList );
void GENFUN_u8MemSet (uint8 *pu8Src, uint8 u8Char2Set, uint8 u8SizeOfList); 
void GENFUN_u8MemCopy (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList); 
void GENFUN_vSortList (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList);
void GENFUN_vSoftSignal (uint8 *pu8Src, uint8 *pu8Dest); 
void GENFUN_vFilterSignal (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8MaxVal, uint8 u8MinVal); 


