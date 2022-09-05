#include <stdlib.h>
#include <stdio.h>

void funcao(){
    printf("Funcao normal");
}

void callback(void (*ptr)()){
    printf("Chamei a funcao callback e o parametro e outra funcao\n");
    (*ptr)();
}

int main(void){

    void (*ptr)() = &funcao;
    callback(ptr);
}