#include <stdio.h>

int potencia(int base, int exp){
    if(exp == 0) {return 1; }
    return base * potencia(base, exp - 1);
}

int main() { 
    // ru 1480020
    int base = 1; // primeiro dígito do RU
    int exp = 0; // último dígito do RU
    int result = potencia(base, exp);
    printf("%d elevado a %d: %d\n", base, exp, result);
}
