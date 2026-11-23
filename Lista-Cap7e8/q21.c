#include <stdio.h>
typedef struct { int horas,minutos,segundos; } Tempo;
Tempo somaTempo(Tempo a,Tempo b);
int main(void) {
    Tempo a,b,c;
    printf("Primeiro tempo (horas minutos segundos): ");
    if(scanf("%d %d %d",&a.horas,&a.minutos,&a.segundos)!=3) return 1;
    printf("Segundo tempo (horas minutos segundos): ");
    if(scanf("%d %d %d",&b.horas,&b.minutos,&b.segundos)!=3) return 1;
    if(a.horas<0||b.horas<0||a.minutos<0||b.minutos<0||a.segundos<0||b.segundos<0||
       a.minutos>=60||b.minutos>=60||a.segundos>=60||b.segundos>=60) {
        puts("Tempo invalido."); return 1;
    }
    c=somaTempo(a,b);
    printf("%02d:%02d:%02d\n",c.horas,c.minutos,c.segundos);
    return 0;
}
Tempo somaTempo(Tempo a,Tempo b) {
    Tempo t={a.horas+b.horas,a.minutos+b.minutos,a.segundos+b.segundos};
    t.minutos+=t.segundos/60;
    t.segundos%=60;
    t.horas+=t.minutos/60;
    t.minutos%=60;
    return t;
}
