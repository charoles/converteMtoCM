/*Implente um sistema que o usu�rio dite um valor em metros (m) e converta para centimetros (cm)

--Digite o valor em (m)
--O valor convertido de X(m) � Y(cm)
*/
#include <stdio.h>

int main()


{
    
    float metro, centimetro;
    
    printf("digite o valor em (m): \n");
    
    scanf("%f",&metro); //recebe o valor do usuario
    
    centimetro = (metro * 100); //soma das variaveis
    
    printf("o valor convertido em %f(m) e %f(cm)", metro, centimetro);
    
    return 0;
    
}
