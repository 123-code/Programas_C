/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
// datos de entrada.
int opcion,n_clientes,c_facturados=1,cant_p,p_contados=1,cantidad,p_unitario;
char nombre,nombre_p[30];
float Iva,total;
//proceso
printf("Que desea hacer?");
scanf("%d",&opcion);
// inicializacion de sentencia switch
switch(opcion){
    case 1:
    printf("ingrese el numero de cilentes:");
    scanf("%d",&n_clientes);
    if(n_clientes>=0){
        n_clientes = (n_clientes*-1);
    }
    
    
    
    /**c_facturados aumenta en cada iteracion, cuando c_facturados es igual
 a n_clientes establecido, esta while loop finaliza**/
 
    while(c_facturados != n_clientes){
        printf("cliente %d\n",c_facturados);
        
        printf("ingrese el nombre del cliente:");
        scanf("%s",&nombre);
        
        printf("ingrese cantidad de productos:");
        scanf("%d",&cant_p);
/* la segunda while loop realiza uhn proceso similar de acuerdo al numero
de producto p_contados es aumentada con cada iteracion, cuando sea igual a 
la cantidad establecida termina.*/

        while(cant_p != p_contados){
            printf("producto %d",p_contados);
            printf("ingrese cantidad:");
            scanf("%d",&cantidad);
            printf("ingrese nombre del producto;");
            scanf("%d",&nombre_p);
            printf("ingrese precio del producto:");
            scanf("%d",&p_unitario);
            // calculo del total, actualizado en cada iteracion.
            total += cantidad * p_unitario;
            // se suma 1 a los productos contados.
            p_contados+=1;
        }
        // se suma 1 a los clientes facturados.
        c_facturados+=1;
        
    }
    // datos de salida 
    printf("%s debe pagar un subtotal de %d $\n",nombre,total);
    // calculo de IVA
    Iva = (total * 0.12);
    printf("IVA:%f",Iva);
    total = (total + Iva);
    //total a pagar.
    printf("total a pagar: %f\n",(total+Iva));
    case 2:
    // se imprime cuando el programa finaliza. 
    printf("Ha Salido");
}

    return 0;
}
