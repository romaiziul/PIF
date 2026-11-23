#include <stdio.h>
float celsiusParaFahrenheit(float c);
float celsiusParaKelvin(float c);
float fahrenheitParaCelsius(float f);
float kelvinParaCelsius(float k);
int main(void) {
    int op;
    float t,r;
    puts("1 - Celsius para Fahrenheit\n2 - Celsius para Kelvin\n3 - Fahrenheit para Celsius\n4 - Kelvin para Celsius");
    printf("Opcao: ");
    if(scanf("%d",&op)!=1||op<1||op>4) { puts("Opcao invalida."); return 1; }
    printf("Temperatura: ");
    if(scanf("%f",&t)!=1) return 1;
    if((op==2&&t< -273.15f)||(op==4&&t<0.0f)||(op==3&&t< -459.67f)||(op==1&&t< -273.15f)) {
        puts("Temperatura abaixo do zero absoluto.");
        return 1;
    }
    switch(op) {
        case 1: r=celsiusParaFahrenheit(t); break;
        case 2: r=celsiusParaKelvin(t); break;
        case 3: r=fahrenheitParaCelsius(t); break;
        default: r=kelvinParaCelsius(t);
    }
    printf("Convertida = %.2f\n",r);
    return 0;
}
float celsiusParaFahrenheit(float c) { return c*9.0f/5.0f+32.0f; }
float celsiusParaKelvin(float c) { return c+273.15f; }
float fahrenheitParaCelsius(float f) { return (f-32.0f)*5.0f/9.0f; }
float kelvinParaCelsius(float k) { return k-273.15f; }
