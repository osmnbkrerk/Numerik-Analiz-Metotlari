#include <stdio.h>
#include <math.h>
float a,b,c;
int iterasyon=0;
float f(float x){return pow(x,3) -2* pow(x,2) -5;}

float mutlakDeger(){         /* Formule gore X-Xn mutlak deger icinde oldugundan degeri pozitif olarak gonderiyoruz */
if(2.6906-c<0){return -1*(2.690677-c);}
else{return 2.690677-c;}
}

void yazdir(){
printf("%d                  %f           %f          0.01\n",iterasyon,a,c);
}

void islem(){
c=(a*f(b)- b*f(a))/(f(b)-f(a)); /* bu formule gore c'nin ilk degeri 2.5555 tir */
while(1){
yazdir();

if(mutlakDeger()<pow(10,-2)){break;}
if(f(c)*f(b)<0){ /* f(2.5555).f(3) < 0 ise alt sinir c'ye esit olacak */
a=c;
}
else{b=c;} /* degilse ust sinir c'ye esit olacak */
iterasyon++; //
c=(a*f(b)- b*f(a))/(f(b)-f(a));   /* bu islem kosul saglanana kadar devam eder  */

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
