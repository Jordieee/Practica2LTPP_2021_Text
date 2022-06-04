//---------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
//---------------------------------------------------------------
__int64 mm7Inicial = 0x11FFFF007A23B7CE;
__int64 mm6Inicial = 0x77012345FDAAF088;
__int64 mm5Inicial = 0x11CA0DFF000098A1;
__int64 mm4Inicial = 0x10C70346F1346231;
__int64 mm3Inicial = 0x0F2845E82945C80F;
__int64 mm2Inicial = 0x8000C0008000B000;
__int64 mm1Inicial = 0xA3C5DDA1234A315A;
__int64 mm0Inicial = 0x0101AFFAFEA20931;
__int64 Resultado;
//---------------------------------------------------------------
//--- PROGRAMA PRINCIPAL
//---------------------------------------------------------------
int suma(int a , int b){
    return a+b;
}

int main(void){
    printf("La suma es: %d\n", (suma)(3, 5));
    return(0);
}
