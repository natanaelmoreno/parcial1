#include<stdio.h>



int i,j,k;
int f,c;
int fila,columna, suma=0,sumac=0, sumab=0,sp=0,ss=0,contador=0,x,y;

int main(){


	
int horizontal[columna];
int vertical[fila];

//llenado de la matriz
printf("ingrese el numero de filas");
scanf("%d", &fila);
printf("ingrese el numero de columnas");
scanf("%d", &columna );
int matriz[fila][columna];

//recorre la matriz y la llena

for (f=0; f<fila;f++){
for (c=0; c<columna;c++){
printf("ingrese los valores %d%d", f+1,c+1);
scanf("%d", &matriz[f][c]);
}
printf("\n");
}

//imprimir la matriz
printf("matriz M1: \n");
for (f=0; f<=fila-1;f++){
for (c=0; c<=columna-1;c++){
printf("%d\t",matriz[f][c]);
}
printf("\n");
}
//Bucle que suma las filas y registra el resultado en el vector vertical
for(f=0;f<fila;f++)
{
    suma=0;
    for(c=0;c<columna;c++)
    {
        suma+=matriz[f][c];
    }
    vertical[f]=suma;
}


printf("sumatoria de filas es:\n");

/*Recorre el vector vertical y muestra los resultados*/
for(i=0;i<fila;i++)
{
    printf("%d\n",vertical[i]);
}

/*Bucle que suma las columnas y registra el resultado en el vector horizontal*/
for(c=0;c<columna;c++)
{
    suma=0;
    for(f=0;f<fila;f++)
    {
        suma+=matriz[f][c];
    }
    horizontal[c]=suma;
}
printf("sumatoria de columnas es:\n");
/*Recorre el vector horizontal y muestra los resultados*/
for(i=0;i<columna;i++)
{
    printf("%d\t",horizontal[i]);
    
   
}
 printf("\n");
    printf("\n");
    
   
for(f=0;f<fila;f++)
{
for(c=0;c<columna;c++)
{
if(f==c){
sumab=sumab+matriz[f][c];
}
}
}
printf("la suma de la diagonal principal es: %d\n",sumab);
contador=columna;


for(f=0;f<fila;f++)
	
	
	{
		
		sumac=sumac+matriz[f][--columna];

}
printf("la suma de la diagonal segundaria es: %d\n",sumac);


	int bandera=0;
	
	//bucle para verificar si la matriz s amigable o no 
	for(x=0;x<fila;x++){
		
		if(sumac==sumab && vertical[x]==vertical[x+1] && horizontal[x]==horizontal[x+1]){
		
			printf("La matriz ingresada es amiga");
			
			}else {
				printf("La matriz ingresada no es amiga");
			
}
}
}
