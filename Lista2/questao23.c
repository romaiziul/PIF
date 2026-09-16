#include <stdio.h>

int main(void)
{
    int hora, minuto, segundo, duracao, total_segundos;
    int final_hora, final_minuto, final_segundo;

    printf("Digite a hora inicial: ");
    scanf("%d", &hora);

    printf("Digite o minuto inicial: ");
    scanf("%d", &minuto);

    printf("Digite o segundo inicial: ");
    scanf("%d", &segundo);

    printf("Digite a duração em segundos: ");
    scanf("%d", &duracao);

    total_segundos = hora * 3600 + minuto * 60 + segundo;
    total_segundos += duracao;

    final_hora = (total_segundos / 3600) % 24;
    final_minuto = (total_segundos % 3600) / 60;
    final_segundo = total_segundos % 60;

    printf("Horário de término: %02d:%02d:%02d\n",
           final_hora, final_minuto, final_segundo);

    return 0;
}
