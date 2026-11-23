#include <stdio.h>
typedef struct { float x,y; } Ponto;
typedef struct { Ponto inf_esq; Ponto sup_dir; } Retangulo;
float area(Retangulo r);
float perimetro(Retangulo r);
int contemPonto(Retangulo r,Ponto p);
int main(void) {
    Retangulo r1,r2;
    Ponto p;
    printf("Canto inferior esquerdo (x y): ");
    if(scanf("%f %f",&r1.inf_esq.x,&r1.inf_esq.y)!=2) return 1;
    printf("Canto superior direito (x y): ");
    if(scanf("%f %f",&r1.sup_dir.x,&r1.sup_dir.y)!=2) return 1;
    if(r1.sup_dir.x<r1.inf_esq.x||r1.sup_dir.y<r1.inf_esq.y) { puts("Retangulo invalido."); return 1; }
    printf("Ponto (x y): ");
    if(scanf("%f %f",&p.x,&p.y)!=2) return 1;
    r2=r1; /* Copia toda a estrutura numa unica atribuicao. */
    printf("Area: %.2f\nPerimetro: %.2f\n",area(r2),perimetro(r2));
    puts(contemPonto(r1,p)?"Ponto dentro (incluindo bordas).":"Ponto fora.");
    return 0;
}
float area(Retangulo r) { return (r.sup_dir.x-r.inf_esq.x)*(r.sup_dir.y-r.inf_esq.y); }
float perimetro(Retangulo r) { return 2*((r.sup_dir.x-r.inf_esq.x)+(r.sup_dir.y-r.inf_esq.y)); }
int contemPonto(Retangulo r,Ponto p) {
    return p.x>=r.inf_esq.x&&p.x<=r.sup_dir.x&&p.y>=r.inf_esq.y&&p.y<=r.sup_dir.y;
}
