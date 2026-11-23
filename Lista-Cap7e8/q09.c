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
        do { printf("Aluno %d prova %d (0 a 10): ",i+1,j+1); if(scanf("%f",&m[i][j])!=1) { puts("Entrada invalida."); m[i][j]=-1; return; } } while(m[i][j]<0||m[i][j]>10);
    }
}
float mediaAluno(float m[][4],int aluno) { float s=0; for(int j=0;j<4;j++) s+=m[aluno][j]; return s/4; }
float mediaProva(float m[][4],int alunos,int prova) { float s=0; for(int i=0;i<alunos;i++) s+=m[i][prova]; return s/alunos; }
