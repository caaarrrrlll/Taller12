#include <stdio.h>
#include <math.h>
void calcularPrecio(int cant, float *precioxpro, float precio);

int main (int argc, char *argv[]){

    char producto [3][50]= {"Producto1","Producto2","Producto3"};
    float Precio[3]={30,40,50};
    int cant=10;
    float precioxprod;

    calcularPrecio(cant,&precioxprod,Precio[0]);
    printf("el precio es: %f", precioxprod);
}

void calcularPrecio(int cant, float *precioxpro, float precio){
    *precioxpro=cant*precio;
}