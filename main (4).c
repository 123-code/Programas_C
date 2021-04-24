#include <stdio.h>
#include <math.h>
int main()
{
int v1,v2,v3;
float area,p;
  printf("ingrese el primer valor:");
  scanf("%d",&v1);
  printf("ingrese el segundo valor:");
  scanf("%d",&v2);
  printf("ingrese el tercer valor:");
  scanf("%d",&v3);
//  Si se cumple la propiedad de que la suma de los dos lados menores es menor a la del lado restante, es un triángulo.
if((v1 + v2 < v3) || (v2 + v3 < v1) || (v1 + v3 < v2)){
  printf("Ha ingresado los valores de un triangulo !");
  p= (v1 +v2 +v3)/2;}
else {
  printf("No ha ingresado los valores de un triangulo")
  ;
}
if(v1==v2 && v2 ==v3 && v3==v1){
   printf("Triangulo equilatero");
   area = sqrt(p * (p-v1)*(p-v2)*(p-v3));
   printf("Area:%f",area);

 }
// si dos lados diferentes y uno igual isoceles.
 else if ((v1 == v2 && v1 != v3) || (v2==v3 && v2 !=v1)){
   printf(" Triangulo Isoceles");
   area = sqrt(p * (p-v1)*(p-v2)*(p-v3));
   printf("Area:%f",area);
 }
 else if(v1 != v2 && v2 != v3){
   printf("Triangulo escaleno");
   area = sqrt(p * (p-v1)*(p-v2)*(p-v3));
   printf("Area:%f",area);
 }


}