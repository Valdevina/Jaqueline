#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//IMC é sempre peso/(altura*altura
float calculaImc(float peso,float altura){
    float imc = 0;
    imc = peso/(altura*altura);
    return(imc);

}
float mensagemAdulto(float imc){
    printf("Seu imc e: %.2f,imc");
    if (imc<=18.5){
        printf("*****IMC abaixo do normal \nProcure um médico!****");
        
}
else if(imc >18.5 && imc <= 24.9){
    printf("******IMC normal |nQue bom que voce esta com o peso normal!");
}
else if(imc > 24.9 && imc <=29.9){
    printf("****** voce está com sobrepeso |nna verdade, uma pre-obesidade");

}
else if(imc > 29.9 && imc <=34.9){
    printf("Obesidade grau I |nSinal de alerta!");

}
else if (imc > 34.9 && imc<=39.9){
    printf("obesidade grau II \nMesmo que seus exames aparentem estar");
}
}