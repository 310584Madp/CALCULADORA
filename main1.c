/* programa para resolver la formula general con un flotante*/
#include<stdio.h>
#include <conio.h>  // agregamos librerias                  
#include<math.h>

int main() 
{
 float a, b , c , res1 , res2 , res3 , res4 , res5; 
  printf("Uso de formula general para resolver ecuacion cuadratica ""Ax^2+bx+c" "\n");
  printf("\nIngrese el termino de la seccion cuadratica\n ");
  scanf("%f",&a);
  printf("Ingrese el termino de la seccion lineal \n");
  scanf("%f",&b);
  printf("Ingrese el termino de la seccion independiente \n");
  scanf("%f",&c);
  if (a!=0)
   {
   res3=pow(b,2);
   res4=(4*a*c);
   res5=(res3-res4);     
   if(res5<0)
   {
    printf("No existen raices Negativas");
    printf("\a");
   }
   if (res5>=0){
   res1=((-b+(sqrt(res5)))/(2*a));
   res2=((-b-(sqrt(res5)))/(2*a));     
    if(res1==res2){
     printf("\n El resultado es igual para x1 y x2 y es:  %.4f",res1); 
    }       
   if (res1!=res2){
    printf("\nEl resultado de x1 es %.4f",res1);
    printf("\nEl resultado de x2 es %.4f",res2);
       }
                  }
      }
     if(a==0) {
       printf("No es posible realizar la operacion");
       printf("\a");
              }
 return 0;
}
