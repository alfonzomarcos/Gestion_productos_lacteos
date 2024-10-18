#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void funcion1(char *v1, float *v2, char turno, float monto, int j);

void funcion2(char *v1, float *v2, int j);


          

main () 
{  

int  hormas, res=0, i=0;
char turno, queso, ve1[50]={};  //cambie la variable turno a tipo char (anterioremente era cadena de caracter)
float valor, acuMV, ve2[50]={0};
/*cree un menu con tres opciones, op1 para cargar ventas, op2 para informes sobre: la cantidad 
de respartos durante el turno tarde y el promedio de todas las ventas. */
/* cree dos funciones: 1-primer funcion para ir guardando el turno y el monto de cada venta en su respectivo vector puntero
                       2-segunda funcion pide la direccion de memoria de los dos punteros vectores anteriores
					    y pide calcular cantidad de repartos durante turno tarde, y el promedio de todas las ventas */
    
       	
    while(res != 3)
    
	{    printf("DISTRIBUIDORA DE QUESOS\n");
         printf("********************\n\n\n");
         printf("1-Cargar ventas\n");
         printf("2-Informe\n");
         printf("3-Salir\n");
         fflush(stdin);
         scanf("%d",&res);
         
      switch(res)
      {
              case 1: 
               
			   
			   acuMV=0;
    
     
	         
	           for(int x=0;x<2;x++) {
		    
	     			
       	       printf("\nVENTA %d:\n",x+1);
       	      
	           printf("\nIngrese el tipo de queso: 'c'-cremoso 'm'-mozzarela p'-parmesano 'r'-roquefort  \n");
               fflush(stdin);
       	       scanf("%c",&queso);
       	       
       	       printf("\nIngrese la cantidad de hormas vendidas: \n");
               fflush(stdin);
       	       scanf("%d",&hormas);
       	       
       	       
       	       printf("\nIngrese turno de reparto: 't'-tarde/ 'm'-maniana \n");
               fflush(stdin);
       	       scanf("%c",&turno);  //cambie la variable turno a tipo char (anterioremente era cadena de caracter)
				 
       	       
       	       
       	       switch (queso) { 
             
               case 'c' : valor=hormas * 2000; break;
               case 'm' : valor=hormas * 2100; break;
               case 'p' : valor=hormas * 2200; break;
               case 'r' : valor=hormas * 2300; break;  } ;
               
               
               acuMV=acuMV+ valor;
               
               funcion1(ve1,ve2,turno,valor,i);
               i++;
                 }
                 
                 
                 printf("\nSu total recaudado es: %f \n",acuMV);
                 
                 system("pause");
                 
                 system("CLS");
	
       	         break;
       	         
       	         case 2: 
       	         funcion2(ve1,ve2,i);
       	         break;
       	         
       	    
	
	 };
	                                   
	 
	
	 system("pause");
	
	
}
}

void funcion1(char *v1, float *v2, char turno, float monto, int j)
       {
			*(v1+j)=turno;
			*(v2+j)=monto;
				            }   


void funcion2(char *v1, float *v2, int j)
      { int x, contTT=0; //repartos turno tarde
        float acuM=0, promedio;
        for(x=0;x<j;x++)
          { 
          	 if (*(v1+x) == 't') {
          	 	
          	 	contTT++;
			   }
			acuM=acuM+(*(v2+x));
		  }
		  promedio=acuM/j;
		  printf("\nTotal de repartos turno tarde: %d\n",contTT);
		  printf("\nPromedio de todas las ventas: %f\n",promedio);
		  
      	
			}      
