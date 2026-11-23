#include <stdio.h>
#include <string.h>
typedef struct {
    char nome[80];
    int matricula;
    float nota1,nota2;
} Aluno;
int main(void) {
    Aluno aluno;
    float media;
    printf("Nome: ");
    if(fgets(aluno.nome,sizeof(aluno.nome),stdin)==NULL) return 1;
    aluno.nome[strcspn(aluno.nome,"\n")]='\0';
    printf("Matricula: ");
    if(scanf("%d",&aluno.matricula)!=1) return 1;
    printf("Duas notas (0 a 10): ");
    if(scanf("%f %f",&aluno.nota1,&aluno.nota2)!=2||aluno.nota1<0||aluno.nota1>10||aluno.nota2<0||aluno.nota2>10) {
        puts("Notas invalidas."); return 1;
    }
    media=(aluno.nota1+aluno.nota2)/2.0f;
    printf("Aluno: %s | Matricula: %d | Media: %.2f\n",aluno.nome,aluno.matricula,media);
    puts(media>=7.0f?"Aprovado":(media>=4.0f?"Final":"Reprovado"));
    return 0;
}
