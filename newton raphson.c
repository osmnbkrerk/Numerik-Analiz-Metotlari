#include <stdio.h>
#include <math.h>
float a,b,c;
int iterasyon=0;
float f(float x){return pow(x,3) -2* pow(x,2) -5;}

float turevAl(float x){return 3*pow(x,2)- 4*x;}

float mutlakAC(){
if(c-a<0){return -1*(c-a);}
else{return c-a;}
}

void yazdir(){
printf("%d                  %f           %f          0.01\n",iterasyon,a,c);
}

void islem(){
c=a-f(a)/turevAl(a);/* a = 2 iken 0. iterasyonda C degeri*/

while(1){
yazdir();  /* 1. adimda a(x0), c(x1) degerlerini gormek icin yazdiriyoruz*/

if(mutlakAC()<pow(10,-2)){break;} /* Eger durma kosulu true dondururse son bir defa daha yazdiriyoruz ve break ediyoruz*/
a=c;  /* a'nin degeri 2 iken 3.25 oluyor */
iterasyon++;
c=a-f(a)/turevAl(a); /* bu islem dongude durma kosulu saglanana kadar devam edecek c=3.25-f(3.25)/f'(3.25)*/

}

}

int main(){
a=2; b=3; /*a=alt sinir, b=ust sinir*/
  if(f(a)*f(b)<=0){
printf("Iterasyon#            x_n               x_n+1          Hata\n");
printf("**************************************************************\n");
     islem();
     printf("\n~Denklemin kok degeri %d. iterasyonda %f olarak bulunmustur.~\n",iterasyon,c);
     }

}
