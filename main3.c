#include <stdio.h>

void funzione_1(int n){
printf("%p", &n);

}


int main(){
    int x;
printf ("inserisci un numero !");
scanf("%d", &x);
funzione_1( x ); 
printf ("l indirizzo di quel numero è %p\n", &x);


    return 0;
}