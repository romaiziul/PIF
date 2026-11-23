#include <stdio.h>
#define ALUNOS 5
#define PROVAS 4
void lerNotas(float m[][4],int alunos);
float mediaAluno(float m[][4],int aluno);
float mediaProva(float m[][4],int alunos,int prova);
int main(void) {
    float notas[ALUNOS][PROVAS];
    lerNotas(notas,ALUNOS);
    for(int i=0;i<ALUNOS;i++) printf("Media aluno %d: %.2f\n",i+1,mediaAluno(notas,i));
    for(int j=0;j<PROVAS;j++) printf("Media prova %d: %.2f\n",j+1,mediaProva(notas,ALUNOS,j));
    return 0;
}
void lerNotas(float m[][4],int alunos) {
    for(int i=0;i<alunos;i++) for(int j=0;j<4;j++) {
        while(1) {
            printf("Aluno %d, prova %d (0 a 10): ",i+1,j+1);
            if(scanf("%f",&m[i][j])!=1) {
                int c;
                if(feof(stdin)) { puts("Entrada encerrada."); return; }
                while((c=getchar())!='\n'&&c!=EOF) {}
                puts("Entrada invalida.");
                continue;
            }
            if(m[i][j]>=0&&m[i][j]<=10) break;
            puts("Nota deve estar entre 0 e 10.");
        }
    }
}
float mediaAluno(float m[][4],int aluno) {
    float soma=0;
    for(int j=0;j<4;j++) soma+=m[aluno][j];
    return soma/4;
}
float mediaProva(float m[][4],int alunos,int prova) {
    float soma=0;
    for(int i=0;i<alunos;i++) soma+=m[i][prova];
    return soma/alunos;
}
