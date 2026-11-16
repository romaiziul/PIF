#include <stdio.h>
float celsiusParaFahrenheit(float c);
float celsiusParaKelvin(float c);
float fahrenheitParaCelsius(float f);
float kelvinParaCelsius(float k);
int main(void) {
    int opcao;
    float temperatura;
    printf("1 Celsius->Fahrenheit\n2 Celsius->Kelvin\n");
    printf("3 Fahrenheit->Celsius\n4 Kelvin->Celsius\nEscolha: ");
    scanf("%d", &opcao);
    printf("Temperatura: ");
    scanf("%f", &temperatura);
    switch (opcao) {
        case 1: printf("%.2f F\n", celsiusParaFahrenheit(temperatura)); break;
        case 2: printf("%.2f K\n", celsiusParaKelvin(temperatura)); break;
        case 3: printf("%.2f C\n", fahrenheitParaCelsius(temperatura)); break;
        case 4: printf("%.2f C\n", kelvinParaCelsius(temperatura)); break;
        default: printf("Opcao invalida.\n");
    }
    return 0;
}
float celsiusParaFahrenheit(float c) { return c * 9.0f / 5.0f + 32.0f; }
float celsiusParaKelvin(float c) { return c + 273.15f; }
float fahrenheitParaCelsius(float f) { return (f - 32.0f) * 5.0f / 9.0f; }
float kelvinParaCelsius(float k) { return k - 273.15f; }
