#include <stdio.h>
#include <math.h>
float a,b,c;

float f(float x){return pow(x,3)- 7*pow(x,2)+14*x-6;}
void deneme(){

     int iterasyon=1;
    printf("Girdiginiz alt ve ust sinirlar icerisinde kok vardir.\n");
while(1){
    c = (a+b)/2;
     if(f(c) <0){
         a=c;
     }

     else{
         b=c;
     }
      printf("A'nin degeri: %f, B'nin degeri: %f, C'nin degeri: %f\n",a,b,c);

     if((b-a) / pow(2,iterasyon)< pow(10,-2)){
        break;
     }
     iterasyon+=1;
}

 printf("Denklemin yaklasik kok degeri: %f",c);
}


int main(){

 while(1){
      printf("Alt siniri giriniz: ");
 scanf("%f",&a);
 printf("Ust siniri giriniz: ");
 scanf("%f",&b);
     if(f(a)*f(b)<=0){
     deneme();
     break;
     }
     else{printf("Tekrar giriniz....\n");}
 }

}
