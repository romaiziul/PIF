#include <stdio.h>
#include <string.h>
#define MAX_LIVROS 10
#define TAM_TEXTO 100
typedef struct {
    char titulo[TAM_TEXTO];
    char autor[TAM_TEXTO];
    int ano;
    int disponivel;
} Livro;
void lerLinha(char destino[],int capacidade);
void cadastrarLivro(Livro livros[],int *quantidade);
void listarLivros(Livro livros[],int quantidade);
int buscarPorTitulo(Livro livros[],int quantidade,const char titulo[]);
void buscarLivro(Livro livros[],int quantidade);
void emprestarLivro(Livro livros[],int quantidade);
void devolverLivro(Livro livros[],int quantidade);
int main(void) {
    Livro livros[MAX_LIVROS];
    int quantidade=0,opcao;
    do {
        puts("\n1 - Cadastrar livro\n2 - Listar todos\n3 - Buscar por titulo\n4 - Emprestar\n5 - Devolver\n0 - Sair");
        printf("Opcao: ");
        if(scanf("%d",&opcao)!=1) { puts("Entrada invalida."); return 1; }
        int c; while((c=getchar())!='\n'&&c!=EOF) {}
        switch(opcao) {
            case 1: cadastrarLivro(livros,&quantidade); break;
            case 2: listarLivros(livros,quantidade); break;
            case 3: buscarLivro(livros,quantidade); break;
            case 4: emprestarLivro(livros,quantidade); break;
            case 5: devolverLivro(livros,quantidade); break;
            case 0: puts("Encerrado."); break;
            default: puts("Opcao invalida.");
        }
    } while(opcao!=0);
    return 0;
}
void lerLinha(char destino[],int capacidade) {
    if(fgets(destino,capacidade,stdin)==NULL) { destino[0]='\0'; return; }
    char *quebra=strchr(destino,'\n');
    if(quebra) *quebra='\0';
    else { int c; while((c=getchar())!='\n'&&c!=EOF) {} }
}
int buscarPorTitulo(Livro livros[],int quantidade,const char titulo[]) {
    for(int i=0;i<quantidade;i++) if(strcmp(livros[i].titulo,titulo)==0) return i;
    return -1;
}
void cadastrarLivro(Livro livros[],int *quantidade) {
    if(*quantidade>=MAX_LIVROS) { puts("Biblioteca cheia."); return; }
    Livro novo;
    printf("Titulo: "); lerLinha(novo.titulo,TAM_TEXTO);
    if(novo.titulo[0]=='\0') { puts("Titulo vazio nao permitido."); return; }
    if(buscarPorTitulo(livros,*quantidade,novo.titulo)>=0) { puts("Titulo ja cadastrado."); return; }
    printf("Autor: "); lerLinha(novo.autor,TAM_TEXTO);
    printf("Ano: ");
    if(scanf("%d",&novo.ano)!=1) { puts("Ano invalido."); return; }
    int c; while((c=getchar())!='\n'&&c!=EOF) {}
    if(novo.ano<=0) { puts("Ano invalido."); return; }
    novo.disponivel=1;
    livros[(*quantidade)++]=novo;
    puts("Livro cadastrado.");
}
void listarLivros(Livro livros[],int quantidade) {
    if(quantidade==0) { puts("Nenhum livro cadastrado."); return; }
    for(int i=0;i<quantidade;i++) printf("%d. %s - %s (%d) [%s]\n",i+1,livros[i].titulo,livros[i].autor,livros[i].ano,livros[i].disponivel?"Disponivel":"Emprestado");
}
void buscarLivro(Livro livros[],int quantidade) {
    char titulo[TAM_TEXTO];
    printf("Titulo a buscar: "); lerLinha(titulo,TAM_TEXTO);
    int i=buscarPorTitulo(livros,quantidade,titulo);
    if(i<0) puts("Livro nao encontrado.");
    else printf("%s - %s (%d) [%s]\n",livros[i].titulo,livros[i].autor,livros[i].ano,livros[i].disponivel?"Disponivel":"Emprestado");
}
void emprestarLivro(Livro livros[],int quantidade) {
    char titulo[TAM_TEXTO];
    printf("Titulo a emprestar: "); lerLinha(titulo,TAM_TEXTO);
    int i=buscarPorTitulo(livros,quantidade,titulo);
    if(i<0) puts("Livro nao encontrado.");
    else if(!livros[i].disponivel) puts("Livro ja emprestado.");
    else { livros[i].disponivel=0; puts("Emprestimo realizado."); }
}
void devolverLivro(Livro livros[],int quantidade) {
    char titulo[TAM_TEXTO];
    printf("Titulo a devolver: "); lerLinha(titulo,TAM_TEXTO);
    int i=buscarPorTitulo(livros,quantidade,titulo);
    if(i<0) puts("Livro nao encontrado.");
    else if(livros[i].disponivel) puts("Livro ja esta disponivel.");
    else { livros[i].disponivel=1; puts("Devolucao realizada."); }
}
