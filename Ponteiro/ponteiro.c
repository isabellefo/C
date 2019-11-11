#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void estat(int a, int b, float *media, float *mediag);

int main(){
int a;
int b;
float ma;
float mg;


scanf("%d %d", &a, &b);

estat(a,b,&ma,&mg);

printf("Media aritmetica: %.2f\n", ma);
printf("Media geometrica: %.2f\n", mg);


return 0;
}

void estat(int a, int b, float *media, float *mediag){
    *media = (a+b)/2;
    *mediag = sqrt((a*b));
}
