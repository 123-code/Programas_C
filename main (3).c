/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int monto;
    float total,descuento;
    printf("ingrese el monto de la compra:");
    scanf("%d",&monto);
    if(monto <= 800){
        
        printf("su descuento es de 0$");
        
    }
    
    else if(monto > 800 && monto < 1500){
        descuento=(monto*10)/100;
        printf("su descuento es de %f $",descuento);
        
    }
    else if(monto > 1500 && monto < 5000){
        descuento = (monto*15)/100;
        printf("su descuento es de %f $",descuento);
        
        
    }
    
    else if(monto > 5000){
        descuento = (monto*20)/100;
        printf("su descuento es de %f $",descuento);
        
    }

    return 0;
}
