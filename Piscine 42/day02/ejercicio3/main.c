#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main()
{
    int i, j, k, hip, catop, catcont, sum_cuadrados;

    printf("Ternas pitagoricas\n");


    for(i=1;i<=500;i++){
        hip=i*i; //Eleva hipotenusa al cuadrado//
        for(j=1;j<=500;j++){
            catop=j*j; //Eleva catop al cuadrado//
            for(k=1;k<=500;k++){
                catcont=k*k; //Eleva catcon al cuadrado//
                sum_cuadrados=catcont+catop;
                if(sum_cuadrados==hip){
                    printf("Cateto opuesto = %d\n", i);
                    printf("Cateto contiguo = %d\n", j);
                    printf("Hipotenusa = %d\n", k);
                    printf("Comprobacion: %d + %d = %d\n", catop, catcont, hip);
                }


            }
        }
    }



    return 0;
}
