#include<stdio.h>
#include<stdlib.h>
main(){
    int Idade;
   printf("Digite sua Idade");
   scanf("%d,&Idade");
   switch (Idade)
   {
   case 0 ... 11 :
   printf ("criança");

   case 12 ... 17 :
   printf("Adolescente");
   case 18 ... 64:
   printf("Adulto");
   case 65 ... 150: 
   printf("Idoso");

   )
    /* code */
    break;
   
   default: printf('outro valor - idade inválida*/");

    break;
   }
   


   }
}