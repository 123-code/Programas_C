#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 100

void ingresodatos(int[],int[],int[],char[tam][tam],char[tam][tam],int[],int);
void mostrardatos(int[],int[],int[],char[tam][tam],char[tam][tam],int[],int);
void guardardatos(int[],int[],int[],char[tam][tam],char[tam][tam],int[],int);
void leedatos();
int calculacondicion(int[],int[],int[],char[tam][tam],char[tam][tam],int[],int);

void calculadatos(int[],int[],int[],char[tam][tam],char[tam][tam],int[],int);

int calcularcategorias(int[],int[],int[],char[tam][tam],char[tam][tam],int[],int);


int main(void)
{
    int op,cantpac,cedula[tam],edad[tam],condicion[tam],sexo[tam];
    float puntaje[tam];
    char nombre[tam][tam],domicilio[tam][tam];
    do
    {
        printf("\n 1.INGRESO DE DATOS\n 2.MOSTRARDATOS, \n3.SALIR\n");
        printf("Escoja la opción:\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
                    do
                    {
                    	printf("Ingrese la cantidad de pacientes:\n");
                    	scanf("%d",&cantpac);
                    }while(cantpac<=0 || cantpac>100);

					ingresodatos(cedula,edad,condicion,nombre,domicilio,sexo,cantpac);

					getchar();
                    getchar();
                    system("clear");
            break;
            case 2:
                    mostrardatos(cedula,edad,condicion,nombre,domicilio,sexo,cantpac);
                    getchar();
                    getchar();
                    system("clear");
            break;



            case 3:
            leedatos();
            break;

            case 4:
            printf("Fin del programa.");
            break;

            default:
                    printf("Opción inválida.Intente nuevamente\n");
            break;
        }
    }while(op!=3);
}
void ingresodatos(int cedula[],int edad[],int condicion[],char nombre[tam][tam],char domicilio[tam][tam],int sexo[],int cantpac)
{
    int cont;
    for(cont=0;cont<cantpac;cont++)
    {
     getchar();
        printf("Datos del paciente %d\n",cont+1);

        printf("Ingrese el nombre:");
        fgets(nombre[cont],tam,stdin);
        do
        {
           printf("Ingrese la edad del paciente:");
           scanf("%d",&edad[cont]);
        }while(cedula[cont]<0);

      do{
           printf("Ingrese sexo del paciente 1 hombre 2 mujer:");
           scanf("%d",&sexo[cont]);
      }while(sexo[cont]<1 || sexo[cont]>2);





 do
        {
           printf("Ingrese la cedula del paciente:");
           scanf("%d",&cedula[cont]);
        }while(edad[cont]<0);

do{
printf("ingrese condicion del paciente se ingresa 1 minimo grado de gravedad al 5 maximo grado de gravedad:");
scanf("%d",&condicion[cont]);

}while(condicion[cont]<1 ||condicion[cont]>5);

getchar();
printf("Ingrese domicilio del paciente:");
fgets(domicilio[cont],tam,stdin);
    }
    guardardatos(cedula,edad,condicion,nombre,domicilio,sexo,cantpac);
}


int calcularcategorias(int cedula[],int edad[],int condicion[],char nombre[tam][tam],char domicilio[tam][tam],int sexo[],int cantpac){
int cont;
int cat1=0,cat2=0,cat3=0,cat4=0,cat5=0;
for(cont=0;cont<cantpac;cont++){
  if(edad[cont]>0&& edad[cont]<= 19){
cat1++;
  }
  if(edad[cont]>19&& edad[cont]<= 40){
cat2++;
  }
  if(edad[cont]>40&& edad[cont]<= 59){
cat3++;
  }
  if(edad[cont]>59&& edad[cont]<= 80){
cat4++;
  }
  if(edad[cont]>80&& edad[cont]<= 100){
cat5++;
  }

  else if(edad[cont]>100){
    printf("La edad ingresada no es valida");
  }

}
printf("Personas en la categoria 1: %d \n",cat1);

printf("Personas en la categoria 2:%d\n",cat2);

printf("Personas en la categoria 3: %d\n",cat3 );

printf("Personas en la categoria 4:%d\n",cat4);

printf("Personas en la categoria 5: %d \n",cat5);

return cat1;
return cat2;
return cat3;
return cat4;
return cat5;
guardardatos(cedula,edad,condicion,nombre,domicilio,sexo,cantpac);
}
// calcularporcentajes.

int calcularporcentajes(int cedula[],int edad[],int condicion[],char nombre[tam][tam],char domicilio[tam][tam],int sexo[],int cantpac){
  int cont,mujeres=0,hombres=0;
  for(cont=0;cont<cantpac;cont++){
    if(sexo[cont]==1){
hombres++;

    }
    if(sexo[cont]==2){
      mujeres++;
    }
  }
  float p_mujeres=0;
  float p_hombres=0;
  p_mujeres = (mujeres/cantpac)*100;
  p_hombres = (hombres/cantpac)*100;

  guardardatos(cedula,edad,condicion,nombre,domicilio,sexo,cantpac);
  printf("El porcentaje de hombres es:%f\n",p_hombres);
  printf("El porcentaje de mujeres es:%f\n",p_mujeres);
  return p_mujeres;
  return p_hombres;
}



void mostrardatos(int cedula[],int edad[],int condicion[],char nombre[tam][tam],char domicilio[tam][tam],int sexo[tam],int cantpac)
{
    int cont;
    char sexo_p;
    for(cont=0;cont<cantpac;cont++)
    {
            printf("Nombre:%s\n",nombre[cont]);
            printf("Cedula:%d\n",cedula[cont]);
            printf("Domicilio:%s\n",domicilio[cont]);
            printf("Condicion:%d\n",condicion[cont]);
            printf("Edad:%d\n",edad[cont]);
            if (sexo[cont]==1){
            printf("Sexo:Hombre\n");
            }
            if(sexo[cont]==2){
              printf("Sexo:Mujer\n");
            }
printf("sexo:%d",sexo[cont]);
printf("Porcentaje de hombres y mujeres:%d\n",calcularporcentajes(cedula, edad,condicion,nombre,domicilio,sexo,cantpac));

printf("Numero de personas en Cada categoria de edad, se muestran del 1 al 5 1:0-19, 2:20-40, 3:41-59, 4:60-80, 5:81-100: %d \n",calcularcategorias(cedula,edad,condicion,nombre,domicilio,sexo,cantpac));

printf("Numero de personas en cada categoria de condicion: %d \n",calculacondicion(cedula,edad,condicion,nombre,domicilio,sexo,cantpac));




    }

}


void guardardatos(int cedula[],int edad[],int condicion[],char nombre[tam][tam],char domicilio[tam][tam],int sexo[],int cantpac)
{
    int cont;
    FILE *archivo;
    archivo=fopen("Notas.txt","w+");
    for(cont=0;cont<cantpac;cont++)
    {
        fprintf(archivo,"\nDatos del paciente %d\n",cont+1);
        fputs("Nombre: ",archivo);
        fprintf(archivo,"%s",nombre[cont]);
        do
        {
           fprintf(archivo,"Cedula:");
           fprintf(archivo,"%df",cedula[cont]);
        }while(cedula[cont]<0);

fprintf(archivo,"condicion del paciente:%d\n",condicion[cont]);


fprintf(archivo,"domicilio del paciente: %s\n",domicilio[cont]);

do{
  fprintf(archivo,"Edad del paciente: %d\n",edad[cont]);
}while(edad[cont]<=0);

fprintf(archivo,"Sexo del paciente:%d\n",sexo[cont]);


    }
   fclose(archivo);
}

int calculacondicion(int cedula[tam],int edad[tam],int condicion[tam],char nombre[tam][tam],char domicilio[tam][tam],int sexo[tam],int cantpac){
int con1,con2,con3,con4,con5,cont;

for(cont=0;cont<cantpac;cont++){
  if(condicion[cont]==1){
    con1++;
  }
  if(condicion[cont]==2){
    con2++;
  }
  if(condicion[cont]==3){
    con3++;
  }
  if(condicion[cont]==4){
    con4++;
  }
  if(condicion[cont]==5){
    con5++;
  }

}


guardardatos(cedula,edad,condicion, nombre,domicilio,sexo,cantpac);

printf("El numero de pacientes en condicion 1 es: %d\n",con1);

printf("El numero de pacientes en condicion 2 es: %d\n",con2);

printf("El numero de pacientes en condicion 3 es: %d\n",con3);

printf("El numero de pacientes en condicion 4 es: %d\n",con4);

printf("El numero de pacientes en condicion 5 es: %d\n",con5);


return con1;
return con2;
return con3;
return con4;
return con5;

}

void leedatos(){
    FILE * archivo;
    char c;

    archivo = fopen("Notas.txt","r");
    if(archivo != NULL){

        printf("El contenido del archivo es:");
        while(1){

            c = fgetc(archivo);

            if(feof(archivo)){
                break;
            }
            printf("%c",c);
        }
    }
    if(archivo==NULL){
      printf("Ha habido un error al abrir el archivo:(");
    }
}
