#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (9.0 * celsius / 5.0) + 32.0;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

float kelvinToCelsius(float kelvin) {
    return kelvin - 273.15;
}

float celsiusToReaumur(float celsius) {
    return celsius * 4.0 / 5.0;
}

float reaumurToCelsius(float reaumur) {
    return reaumur * 5.0 / 4.0;
}

float kelvinToRankine(float kelvin) {
    return kelvin * 1.8;
}

float rankineToKelvin(float rankine) {
    return rankine / 1.8;
}

int main() {
    int opcao;
    float temperatura;

    printf("Escolha a opcao de conversao:\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    printf("3. Celsius para Kelvin\n");
    printf("4. Kelvin para Celsius\n");
    printf("5. Celsius para Reaumur\n");
    printf("6. Reaumur para Celsius\n");
    printf("7. Kelvin para Rankine\n");
    printf("8. Rankine para Kelvin\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    switch (opcao) {
        case 1:
            printf("%.2fC = %.2fF", temperatura, celsiusToFahrenheit(temperatura));
            break;
        case 2:
            printf("%.2fF = %.2fC", temperatura, fahrenheitToCelsius(temperatura));
            break;
        case 3:
            printf("%.2fC = %.2fK", temperatura, celsiusToKelvin(temperatura));
            break;
        case 4:
            printf("%.2fK = %.2fC", temperatura, kelvinToCelsius(temperatura));
            break;
        case 5:
            printf("%.2fC = %.2fRe", temperatura, celsiusToReaumur(temperatura));
            break;
        case 6:
            printf("%.2fRe = %.2fC", temperatura, reaumurToCelsius(temperatura));
            break;
        case 7:
            printf("%.2fK = %.2fR", temperatura, kelvinToRankine(temperatura));
            break;
        case 8:
            printf("%.2fR = %.2fK", temperatura, rankineToKelvin(temperatura));
            break;
        default:
            printf("Opcao invalida!");
    }

    return 0;
}

