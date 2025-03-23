#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//programma exo 12.1 dispense ssettembre


// float media(int a [], int m){
//     int somma = 0;
//     float medi;

//     for (int i= 0; i < m; i++)
//     {
//         somma += a[i];

//         }
//     medi = somma / m;
//   return medi;
// }

// float var (int a[], int n){
//  float result = 0;
//    float s;
// for (int i = 0; i < n; i++)
// {
//  result += pow (  (a[i] -  media( a, n ) ) , 2 )  ;
// }
// s = result / n;

// return s ;
// }
//     int c;
//     int x[2]={1, 2};
//     printf ("%f\n", var (a, n) );



//programma dell'esercizio 12.4 dispense**

// void funzione ( int n ){
// printf("l'indirizzo della funzionne è %p\n", &n);

// }


// int main(){

// int x;
// printf("%p\n", &(x));



//exo 9.1


// int x, y, somma, n;
// float media;
// printf("insrire il numero di numero \n");
// scanf("%d", &n);
// printf("inserire il numero!\n");
// scanf ("%d", &x);
// printf("inserire il seconde numero!\n");
// scanf ("%d", &y);
// somma=x+y;
// media= somma / n;
// printf ("il risultato della somma è %d\n", somma);
// printf("la media è %f\n", media);


//exo 11.1 dispense**

// float an_ric(int n){

//    if( n == 1)
//     {
//     return 0.5;
//   } else {
//     return ( (an_ric(n-1) ) +(1) ) / 2;
//   }

// }
// printf (" %.2f\n", an_ric (1) );


// float an_it(int n){
//   float an_1 = 0.5;
//   float an_n;
//   for (int i = 2; i <=n; i++)
//   {
//   an_n =( an_1 + 1) / 2;
//    an_1 = an_n;
//   }
//  return an_n;
// }
// //printf("%.3f\n", an_it ( 3 ) );


// float verificca (int epsilon, int n){
// int l, x;
// if (epsilon < 0)
// {
//   return epsilon = - epsilon;
// }
// if fabs( an_it(n + 1) + an_it (n) ) < epsilon
// {
//   return l =fabs( an_it(n + 1) - an_it (n) );
// }
//  return l;
// }

// float limite(int l){
//   int epsilon;
//   return verificca(esilon, 1);

// }
// float epsilon = 10;
// printf("il limite della succesione è %d\n", limite(epsilon, 1));




//esercizio 11.2 dispense settembre

//return 0;



//correzione dell'eso 11.1 settembre


// float successione(int n){
//     if (n <= 0){
//         printf("Il numero inserito non è valido. Inserire un numero maggiore di zero.");
//         return 0;
//     }
//     float a_n;
//     if (n == 1){
//         return 0.5;
//     }
//     else{
//         a_n = (successione(n - 1) + 1)/2;
//         return a_n;
//     }
// }

// int main(){
//     int n = 200;
//     float succ = successione(n);
//     printf("Il valore della successione con n = %d è pari a: %f\n", n, succ);
//     return 0;
// }

// int test_primo(int n, int m){
//  if ( n ==0 || n == 1 );
//  {
//    printf("il numero non primo\n");
//    return 0;
//  }
//  if ( n % m == 0)
//  {
//    printf("il numero no è primo\n");
//    return 0;
//  }
// if (m > sqrt (n) )
// {
//    printf("il numero è primo \n");
//    return 0;
// } else {
//    return test_primo(n, m+1);
// }


// }


// int primo( x ){
//    return test_primo(x, 2);
// }


// int  a=31;
// printf("il rusltato è %d", primo ( a ) );



// int occorenza(int a[], int n ){
//    int x = 0;
//    int b = 0;
//    int minimo;
//    for (int i = 1; i <n; i++)
//    {
//       if ( a[i] < a[b] )
//       {
//          b == i;
//       }
//    }
//    minimo = a[b];

//    for (int j = 0; j<n; j++)
//    {
//       if (a[j] == minimo)
//       {
//          x++;
//       }

//    }
//    return x;
// }




//non validato**


//     int a[8];
//     int tmp, i, j;
//     printf("inserire i valori!\n");
//     for ( i = 0; i <8; i++)
//     {
//    printf("a[%d]=", i+1);
//    scanf("%d", &a[i]);
//     }
//     for ( i = 0; i < 8; i++){
//     for(j=i+1; j <8; j++){
//     if (a[i]>a[j])
//     {
//         tmp ==a[i];
//         a[i] ==a[j];
//         a[j] ==tmp;
//     }

//    }
//   }
// printf("il risultato in ordine crescente  è\n");
// for ( i = 0; i <8; i++)

// printf("%d\n", a[i]);


// int a[];
// int n;
// printf(" quale è la dimensione del array !\n");
// scanf("%d", &n);
// int *p=(int*) malloc (n*sizeof(int));
// for (int i = 0; i <n; i++)
// {
//     printf("a[i%d]\n", i+1);
//     scanf("%d", &a[i] );
// }


//      return 0;
// }


//esercitazioni

//char a[6];


// a[0] = 'A';
// a[1] = 'B';
// a[2] = 'C';
// a[3] = 'D';
// a[4] = 'E';
// a[5] = 'F';
//     printf("i sei numeri sono\n");
//     for (int i = 0; i < 6; i++)
//         printf(" %c \n", a[i] );

    //

    // int a[5];
    // int somma, prodotto;
    // float media;

    // printf("inserire un numero!\n" );
    // for (int i = 0; i < 10; i++)
    // {
    // printf("a[%d]=", i);
    // scanf("%d", &a[i]);
    //    }
    // somma =0;
    //   for (int i = 0; i < 5; i++)
    //   {
    //     somma +=a[i];
    //   }


    //   printf("la somma dei numeri inseriti è %d\n", somma);





//programma per malloc-1.



//   int n;
//   printf("inserire la dimensione dell'array :");
//   scanf("%d",&n);
//   printf("il valore dell'array è %d\n", n);
//   int *a= (int*)malloc(n*sizeof(int));
//    int i;
//   for (i=0; i<n; i++)
//   {
//     printf("inserire un valore !\n");
//     scanf("%d", &a[i]);
//   }
//   for (int j=0;j<n;j++)
//   {
//     printf ("a[%d]=%d\n",j,a[j]);
//   }
// printf("l'addresse de a è %p\n", &a);



//programme per determinare se un numero è presente in un array

// int minimo(int a[], int n){
// int m=0;
// for (int i = 0; i <n; i++)
// {
//     if (a[i] < a[m])
//     {
//         m = i;
//     }

// }
// return a[m];
// }

// int x[5]={2,5,4,1,10};
// printf("%d\n", minimo (x, 5));

//da ricontrolare**
// int palindromo(int* a, int n){
//     if (a[i]!=a[n-1])
//     {
//         return 0;
//     } else{
//         retu
//     }

// }






// int n;
// printf("inserire valore dell'array\n");
// scanf("%d", &n);
// int* a=(int*)malloc(n*sizeof(int));
// for (int i = 0; i < n; i++)
// {
//     printf("inserire i valori dell'array \n");
//     scanf("%d", &a[i]);
// }



//funzione per determinare il minimo


//     int minimo(int *a,int n ){
//     int min=a[0];
//     for (int  i =1; i < n; i++)
//     {
//         if (a[i]<min )
//         {
//             min = a[i];
//         }

//     }
//      return min;
// }


//programma per ordinare gli elementi di un array

// void ordina(int a[], int n){
//     for (int i = 0; i < n; i++){
//        for (int j = 0; j < n-i; j++){
//            if (a[j] > a[j+1]){
//                 int tmp = a[j];
//                 a[j] = a[j+1];
//                 a[j+1] = tmp;
//             }

//         }

//     }
// }



//     int main(){


//     int a[]={5,4,-2,1,6,7};
//     int n=sizeof(a)/sizeof(a[0]);

//     ordina(a, n);

//     printf("voici le trie effectué \n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     printf ("\n");

//     return 0;


//     }

//a refaire*
// void inversa (int*  a, int n){
//     for (int i = 0; i < n/2 ; i++)
//     {
//         int tmp = a[i];
//         a[i]=a[n-i];
//         a[n-i]=tmp;
//     }

// }



//a refaire*
//     int a[]={5,4,-2,1,6,7};
//     int n=sizeof(a)/sizeof(a[0]);

//     inversa(a, n);

//     printf("ecco l'inversa effettuato \n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     printf("\n");








// //PROGRAMMA PER LA SUCCESSIONE DI FIBONACCI
// int i, F,F_0, F_1;
// do
// {
// printf("inserire valore di i :\n");
// scanf ("%d", &i);
// } while (i < 2 );
//  F_0 = 0;
//  F_1 = 1;
// printf("F(0)= %d \n", F_0);
// printf("F(1)= %d \n", F_1);
// for (int j = 2; j <=i; j++)
// {
//     F = F_0 + F_1;
// printf("F(%d)=%d\n",j,F );
//    F_0=F_1;
//    F_1=F;
// }

// int t[]={2,4,3,1,6,8};
// printf("il risultato è %d\n", predicone(t,6));

//     }






/*esercizio sull APELLO.pdf*/
//A1-1 e 2



// int somma(int a[], int n){
//     int s=0;
//     for (int i = 1; i <n; i++)
//     {
//        s+=a[i];
//     }
//   return s;
// }

// int predicone(int b[], int m){
// int tmp_1=0, tmp_2=0, i, cal;


// for (i = 1; i <=m; i++)
// {
//    if (b[i] < somma(b, i)  )
//    {
//    tmp_1++;
//    }
// }

//  for (int i = 3; i <=m; i++)
//  {
//     for (int j = i-2; j <=i; j++)
//     {
//         if (b[i]>=b[j])
//         {
//             tmp_2++;
//         }
       
//     }

//  }
//  if ((tmp_1 !=0) && (tmp_2 !=0))
//  {
//     return true;
//  } else{
//     return false;
//  }

// }



// int main(){
//   //  int *c=(int*)malloc(o*sizeof(int));
//   int c[]={2,3,4,6,8};
//   int dim =5;
//   printf("%d\n", predicone(c,dim));
//   return 0;
// }




/*esercizio sull 1.pdf*/
//Es.A1

/*funzione per la potenza*/

// int potenza(int x, int y){
//     if (y==0)
//     {
//      return 1;
//     } else{
//         return x*potenza(x, y-1);
//     } 
// }

/*funzione per la somma*/

// int somma(int n){
//     if (n == 1)
//     {
//         return n;
//     } else
//     {
//         return n+somma(n-1);
//     }
    
// }

// int s_n_ric(int n){
//     int s_n;
//     s_n = potenza(2,n)*somma(n);
//     return s_n;
// }

// int main (){
//  int n=6;
//  printf("%d\n", s_n_ric(n));
//     return 0;
// }



//Es. A2(1.pdf)

/*funzione per il prodotto*/

/*int prodotto(int n){
    if (n == 1)
    {
       return n;
    } else{
        return n*prodotto(n-1);
    }
    
}*/
// int sn_ric (int* a, int n){
//     if (n == 2)
//     {
//     return (a[0] + a[1]);
//     }else
//     {
//         return ((a[n-1] + a[n-2])* sn_ric(a, n-1));
//     }
     
// }

// int main(){
//     int a[]={1,2,3,4,5,6};
//     printf("%d\n", sn_ric(a,6));
// }






/*lavoratino sulle liste linkate preso sul NET*/

//1
//  struct personne{
//     char nom[25];
//     int age;
//     float taille;   
// };
// //  2//

//  struct point {
//     int x;
//     int y;
//  };
//  //3

//  struct rettangolo
//  {
//   struct  point A;
//    struct point B;
//  };
//  //4
//  struct Etudiant
//  {
//     struct personne personne;
//     float moyenne;
//  };
//  5

//  int main(){

// struct personne personne1={"Delmas", 24, 1.71 };
// struct personne personne2={"Audrey", 23, 1.81};
//  printf("personne-1:  nom: %s, age: %d, taille: %.2f\n", personne1.nom, personne1.age, personne1.taille);
//  printf("personne-2:  nom: %s, age: %d, taille: %.2f\n", personne2.nom, personne2.age, personne2.taille);

// return 0;
//  }

//  //6
    // typedef struct rettangolo
    // {
    // int longueur;
    // int largeur;
    // }rettangolo;


    // int area(rettangolo abcd){
    // int L = abcd.longueur;
    // int l = abcd.largeur;
    // int s=L*l;
    // return s;
    // }

//     int main(){
//     rettangolo efgh;
//     efgh.longueur=10;
//     efgh.largeur=8;  
//     printf("l'area vaut %d\n", area(efgh));
    
//     return 0;
//     }



//7
 
//   struct personne
//  {
//     char nom [50];
//     int age;
//     float taille;
//  };
 

//  struct Etudiant
// {
// struct personne personne;
// float moyenne;
// };


// int main(){

// struct Etudiant list_etudiants[3];

// strcpy(list_etudiants[0].personne.nom, "Delmas");
// list_etudiants[0].personne.age=24;
// list_etudiants[0].personne.taille=1.71;
// list_etudiants[0].moyenne=15.75;

// strcpy(list_etudiants[1].personne.nom, "Audrey");
// list_etudiants[1].personne.age=26;
// list_etudiants[1].personne.taille=1.77;
// list_etudiants[1].moyenne=16.41;

// strcpy(list_etudiants[2].personne.nom, "Fouegap");
// list_etudiants[2].personne.age=23;
// list_etudiants[2].personne.taille=1.85;
// list_etudiants[2].moyenne=18.99;

// for (int  i = 0; i <3; i++)
// {
//     printf("Etudiant%d : nom:%s , age:%d ans ,taille:%.2f mètre, moyenne:%.2f \n", i+1, list_etudiants[i].personne.nom, list_etudiants[i].personne.age,
//         list_etudiants[i].personne.taille, list_etudiants[i].moyenne );
// }



//     return 0;
// }
 
//8

//  struct personne
// {
//     char nom[20];
//     int age;
//     float taille;
// };


// struct personne  modifica (struct personne *model, int x){
//     model->age = x;
//     return *model;
// }

// int main(){
    
//     struct personne *delmas;
//     strcpy(delmas->nom, "sonkeng");
//     delmas->age = 22;
//     delmas->taille = 1.85;
//         printf("avant modication :nom %s age %d taille %.2f m\n", delmas->nom, delmas->age, delmas->taille);
        
//      modifica(delmas, 24);
//         printf("après  modication :nom %s age %d taille %.2f m\n", delmas->nom, delmas->age, delmas->taille);

//     return 0;
// }


//9
//struct rettangolo
//{
 // int lon;
 // int lar;
//};



// struct rettangolo* creer(int lo, int la){

//     struct rettangolo* new_rettangolo = (struct rettangolo*)malloc(sizeof(struct rettangolo));
//      if (new_rettangolo != NULL)
//      {
//        new_rettangolo->lon= lo;
//        new_rettangolo->lar= la;
//      }
//     return new_rettangolo; 
// }


// int main(){

// struct rettangolo* abcd= creer(5,4);
// if (abcd != NULL)
// {
//     int area = abcd->lon * abcd->lar;
//     printf("creazione riuscita, l'area vale :%d\n", area);
//     free(abcd);
// }else{
//     printf("creazione non fatta\n");
// }


//     return 0;
// }



//10
// struct point
// {
//    int x;
//    int y;
// };


// int main(){

// struct point table[5];
// table[0].x=2;
// table[0].y=1;
// table[1].x=1;
// table[1].y=2;
// table[2].x=4;
// table[2].y=3;
// table[3].x=4;
// table[3].y=5;
// table[4].x=8;
// table[4].y=9;
// for (int  i = 0; i <5; i++)
// {
//    printf("point %d:ha per coordonati (%d,%d)\n", i+1, table[i].x, table[i].y);
// }


// return 0;
// }


//11

// struct personne
// {
//     int age;
// };


// struct personne age_moyen(struct personne nbre_personne ){




// }



// int main(){
// struct personne lamdas[4];
// lamdas[0].age=10;
// lamdas[1].age=15;
// lamdas[2].age=20;
// lamdas[3].age=14;

// printf("l'age moyen est :%d", age_moyen(struct personne.lamdas, 4));



//     return 0;
// }



// void ordina(int* a, int n){
   
    
// for (int i = 0; i <n; i++){
//     for (int j =0; j <n+1; j++){
         
//         if (a[j] > a[j+1])
//         {
//             int tmp = a[j];
//             a[j]=a[j+1];
//             a[j+1]=tmp;
//         }
        
//     }
   
// }
 
// }


// int main(){

// int a[5]={5,4,3,2,1};
// int dim =5;
// int r;
// ordina(a,dim);
// printf("ordinato \n");


//     return 0;
// }




// //ordinare un array
//     void ordina(int*a, int n){
//       for (int i = 0; i <n; i++){
//         for (int j = 0; j <n-1; j++){
//         if (a[j]> a[j+1])
//         {
//            int tmp =a[j];
//            a[j]=a[j+1];
//            a[j+1]=tmp;
//         }
        
//     }
    
// }



//     }


// int main(){

// int a[]={20,4,3,58,763,-5,4};
// int n=7;
// ordina(a,n);

//    printf("dopa l ordinamento abbiamo questo: ");
// for (int i = 0; i <7; i++)
// {
    
//    printf(" %d ", a[i]);
// }




//     return 0 ;
// }






// // //A

// int controlla_diff(int* a, int n, int gamma, int betta){

// int test =0;
// for (int i = 0; i <n; i++){
//     //ordina(a,n);
  
//     for (int j = 0; j <n; j++){
//         int max =a[j];
//         int min=a[i];
//         if ((max - min == gamma - betta)|| (max - min == gamma + betta))
//         {
//           test++;
//           break;
           
//         }
//         //if (test)break;
  
//     }
    
// }
// if (test!=0)
// {
//    printf("esiste un sotto-array!\n");
// }else{
//     printf("non esiste un sotto array!\n");
   
    
// }
//  printf("ciao ☻\n");
// }




// int main(){
// int a[]={2,51,5,12,11};
// int n= 5;
// int b[5];
// int m=5;
// int gamma =4 ;
// int betta = 22;
// int r;

//  controlla_diff(a,n,gamma,betta);
//   for (int i= 0; i <n; i++)
//     {
//         printf("a[%d]=%d \n",i, a[i] );
//     }
    
 
//     return 0;
// }

// //B


// void somma_cumultativa(int* a, int n, int*b, int m){
//     int somma=0;
//   m=n;
// for (int i = 0; i <n; i++)
// {
//   somma +=i;
// if (i < m)
// {
//    b[i] = somma;
//       } 
//    }

//  }



// int main(){
// int a[]={2,4,8,7,11};
// int n=5;
// int m;
// int b[m];
// somma_cumultativa(a,n,b,m);
// for (int j= 0; j <m-1; j++)
// {
//    printf("b[%d]=%d\n", j ,a[j]);
// }
// printf("ecco il risultato ! ☻ ");
//     return 0;
// }





// //esercizio 8-1. 1 caravagna


// typedef struct node
// {
//     int data;
//     struct node* next;
// } node;


// //funzionne per mostrare gli elementi di una lista

// void mostra_elementi(node* head){
// node* current = head;
// while (current != NULL)
// {
//    printf("%d->", current->data) 
// current = current->next;
// }
//     printf (" NULL ");

// }

// //FUNZIONNE PER mostrare gli elementi in modo ricorssiva

// void mostra_elementiRec(node* head){
// if (head != 0)
// {
//  printf("%d ->", head ->data);
//  mostra_elementiRec("head->next")
// }else{
//     printf("NULL");
// }

// }

// //mostrare gli elementi di una lista a partire dell'ultimo elemento in mode ricorssiva

// void print_list_last(node* head)
// {
// if (head != NULL)
// {
//     print_list_last(head ->next);
//     printf("<- %d", head->data );
// }else{
//    printf("NULL");
// }




/*funzione per i numeri primi*/


// int primo(int n)
// {int count = 0;
// if (n <= 1)
// {
//    return 0;
// }
//     for (int i = 2; i <=sqrt(n); i++)
//     {
        
//         if (n % i == 0)
//         {
//            count ++;
//         }
//     }
//         if (count ==0)
// {
//    printf("il numero è primo!\n");
// }else
// {
//     printf("il numero non è primo\n");
// }
        
        

// }

// int main(){

// int x =25;
// primo(x);

//     return 0;
// }











// //corezione 2nd compito-20/12--A

// int verifica_sottoArray(int* a, int n, int o, int s)
// {
// for (int i = 0; i <n; i++){
//     int somma=0;
//         for (int j = i; j <n; j++){
//             somma +=a[j];
//             if ((somma == s) && ((j-i+1) == o))
//             {
//              printf("essiste il sotto array!\n");
             
//                for (int k = i; k <=j; k++)
//                {
//                 printf("%d ",a[k]);
              
//                }
           
//               printf("\n");
//               return i; 
//             }
            
            
//         }
        
// }

//   return -1;
  
// }


// int main(){


//     int x[]={3,5,8,2,10};
//     int t= 6;
//     int b= 3;
//     int c=15;
//    int r = verifica_sottoArray(x,t,b,c);
    
// if  (r == -1)
// {
//     printf("non esiste sotto array\n");
// }else
// {
//     printf("esiste e il suo indiche è: %d\n ☻ ", r);
// }


//     return 0;
// }


//--B






// void verifica_2 (int* a, int* b, int n){
//      b[0] = a[0];
//  for (int i = 1; i <n; i++)
//    {
//       b[i]= b[i-1]+ a[i];
//    }

// }

// int main(){
// int a[]={0, 0, 1, 1, 1};

// int n=5;
// int b[n];

// verifica_2(a,b,5);

// printf("ecco il nuovo array!: \n");
// for (int j = 0; j <n; j++)
// {
//    printf("%d ",b[j]);
// }
// printf("\n");

//     return 0;
//}



// int conta_cumulativa_maggiori (int* x, int n, int* y, int m){
//   m=n;
//   int x[]={3,5,8,2,10};
// int n= 5;
// int b[m];
// verifica_sottoArray(x,n,y,m);
// verifica_2(x,n,y,m);

//     return 0;
// }




    /*
int n;
int x;
float tot = 0;
printf("qual è i numeri di numero? ");
scanf("%d", &n);
printf("inserire un numero !");
scanf("%d", &x);

while (x != 0)
{
   printf("inserire un numero !");
   scanf("%d", &x);
   tot +=x;
}

float media = tot/n;
printf("la media è %.1f\n", media); */

/*
    int n, x, max, min;
        printf("inserie il valore di n ");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("il numero deve essero > 0 ! ");
            return 1;
        }

        printf("inserire un valore (1) ");
        scanf(" %d ", &x );

        max = x; 
        min = x;
        for (int i = 2; i <= n; i++)
        {
        printf(" inserire il valore (%d) ", i);
        scanf(" %d ", &x);

        if ( x > max)
        {
            max = x;
        }
        if (x < min)
        {
            min = x ;
        }
        }

        printf("il numero max è : %d !\n", max);
        printf("il numero min è : %d !\n", min);
    */




/*
// int fattoriale (int n){

// if ((n == 1) || (n == 0))
// {
//    return 1;
// }
// if (n < 0)
// {
//    return 0;
// } else{

// return n*fattoriale(n-1);
// }
// return n;
// }


int main(){
int n = 3;
int k = 2;

int result= (fattoriale(n)) / ((fattoriale(k)) * (fattoriale(n-k)));

printf("%d\n",result);

 return 0; 
}
*/





                //FUNZIONE PER DETERMINARE SE PALINDROME
/*int palindrome(int* a, int n){


    int inizio = 0;
    int fine = n-1;
    while (inizio < fine)
    {
       if (a[inizio] != a[fine])
       {
       return 0;
       }else
       {
        inizio ++;
        fine --;
       }
       
    }
   return 1; 
}
int main(){
int a[] = {1,2,1,7,1,2,1};
int dim = sizeof(a) / sizeof(0);
if (palindrome(a,dim))
{
   printf("è palimdromo!\n");
}else{
    printf("non è palindromo!\n");
}

    return 0;
}*/


                        //FUNZIONE PER VERIFICARE PALINDROMO RICORSIVAMENTE

/*int palindromo_ric(int*a, int n){
if (n <= 1)
{
    return 1;
}
if (a[0] != a[n-1] )
{
    return 0;
}
return palindromo_ric( a+1, n-2 );

}


int main(){
int a[] = {1,2,1,1,7,1,1,2,1};
int dim = sizeof(a) / sizeof(0);
if (palindromo_ric (a,dim))
{
   printf("è palindromo!\n");
}else{
    printf("non è palindromo!\n");
}

    return 0;
}*/




                    //entrenement giusto

/*float sommatoria_tn(int n){
if (n == 1)
{
   return 1;
}
if (n == 2)
{
    return 2;
}
if (n > 2)
{
   return ((sommatoria_tn(n-1)) * (sommatoria_tn(n-2)) + 1) / n ;
}



}

int main(){

printf("il risultato è : %.2f\n", sommatoria_tn(2));

    return 0;
}*/


                    //STESSA FUNZIONNE MA ITERATIVA

/*float sommatoria_tn_it(int n){
   float tn_1 = 1;
    float tn_2 = 2;
    float tn_n;
    if (n < 1)
    {
        return -1;
    }
    
if (n == 1)
{
   return 1;
}
if (n == 2)
{
   return 2;
}

     tn_1 =1.0 ;
     tn_2 = 2.0;
     tn_n; 

   for (int i = 3; i <=n; i++)
   {
    tn_n = ((tn_2 * tn_1) + (1)) / i;

   tn_1 = tn_2;
   tn_2 = tn_n;
   }
     
 return tn_n;   



}

int main(){
    printf("il risultO è :%.2f\n", sommatoria_tn_it(3));

    return 0;
}*/









                    //LAVORATINO SULLE LISTE LINKATE

//1)

// struct node
// {
//    int data;
//    struct node* next; 
// };

//             //FUNZIONE PER CREARE UN NUOVO NODE

// struct node* new_node(int valeur){

//     if (new_node == NULL)
//     {
//         printf ("ERROR!")
//         exit(1);
//     }
//     new_node -> data = valeur;
//     new_node -> next* = NULL;
//     return new_node;    
// }





                   // SIMULAZIONE (MOD A)
/*void verifica_frequenza(int *a, int n){

    int *visited = (int *)calloc(n,sizeof(int));
    int *frequenza = (int *)calloc(n, sizeof(int));

        for (int i = 0; i <n; i++)
    {
      if (visited [i] == 0)
      {
       int count = 1;
        for (int j = i+1; j < n; j++)
       {
        if (a[i] == a[j])
       {
       count ++;
       visited[j] = 1;
       }
       
       }
       frequenza[i] = count;
      
      //remplir les indice deja visite avec des 0 
      for (int j = 0; j < n; j++)
      {
        if ((a[i] == a[j]) && (i !=j) )
        {
           frequenza[j]=0;
        }
        
      }
      
    }
    }
    

    for (int k = 0; k < n; k++)
    {
        printf(" %d ", frequenza[k]);
    }
    
} 




int main(){

int a[] = {1,2,1,4,1,2};
int n = 6;
verifica_frequenza(a,n);

    return 0;
}
*/

//A2)

/*
int calcolo_sn_ric(int *a, int n){

    if (n == 1)
    {
        return 0;
    }
   return (a[n-1] * a[n-2] + calcolo_sn_ric(a, n-1)); 
}


int main(){

int a[] = {1,2,3,4,5,6};
int n = sizeof(a)/sizeof(0);
printf("%d\n",calcolo_sn_ric(a,n));

    return 0;
}*/


//A3)

// void ordina(int *a, int n){

// for (int i = 0; i <n; i++){
//     for (int j = 0; j < n-1; j++){

//         if (a[j] > a[j+1])
//         {
//             int tmp = a[j];
//             a[j] = a[j+1];
//             a[j+1] = tmp;
//         }
        
//     }
    
// }


// }

// int main(){
// int a[]= {3,1,2,0,4,1,6};
// int n = sizeof(a)/sizeof(0);
// ordina(a,n);
// for (int i = 0; i <n; i++)
// {
//     printf("%d ",a[i]);
// }


//     return 0;
// }





//        // ESERCICE DU mAIN PDF

//     //Parte-1

// int calcolo_succezioni_a(int n);
// int calcolo_succezioni_b(int n);


// int calcolo_succezioni_a(int n){
// if (n == 0) {
//    return 2;
// }
// if (n >= 1){
//     return 3 * calcolo_succezioni_a(n-1) + calcolo_succezioni_b(n-1);
// }
// }



// int calcolo_succezioni_b(int n){
//     if (n == 0)
//     {
//         return 3;
//     }
//     if (n >= 1)
//     {
//       return 2 * calcolo_succezioni_b(n-1) - calcolo_succezioni_a(n-1);
//     }
        
// }

// int main(){
// int n = 3;
// printf("%d\n", calcolo_succezioni_a(n));
// //printf("%d\n", calcolo_succezioni_b(n));
    
//     return 0;
// }



               
               
               
               
               
                //PARTE 2


/*void ordina_D(int *D, int r){
    int tmp;
    for (int i = 0; i < r-1; i++){
        for (int j = 0; j <r-1; j++){
        if (D[j] > D[j+1])
        {
            tmp = D[j];
            D[j] = D[j+1];
            D[j+1] = tmp;
        }
        
         
        }
        
    }
   for (int i = 0; i < r; i++)
   {
   printf("%d ", D[i]);
   }
    
}


void cerca_maggiori(int *a, int r, int *b, int s, int *b_2, int *s_2){

    ordina_D(a,r);
    int count = 0;
    for (int i = 0; i <s; i++){
        
            if (b[i] > a[r-1])
            {
               b_2[count ++] = b[i];
               
            }   
    }
    *s_2 = count;
   for (int k = 0; k < *s_2; k++)
   {
    printf("%d ",b_2[k]);
   }
    printf("\n");

}


void considera_solo (int *a, int n, int *b){
   int count =0;
    for (int i = 0; i <n; i++)
    {
        if (a[i] != 0)
        {
            b[count++] = a[i];
            
        }
        
    }
    
     for (int i = 0; i < count; i++)
 {
    printf("%d ", b[i]);
 }
    printf("\n");
 
}


        //funzione finale

void combine(int *a, int n, int *b, int m){
int *a_b;
a_b = (int*)malloc((m+n)* sizeof(int));
for (int i = 0; i <n; i++)
{
   a_b[i] = a[i];
}
for (int  j = 0; j <m; j++)
{
    a_b[n+j] = b[j];
}

for (int k = 0; k <m+n; k++)
{
   printf("%d ",a_b[k]);
}

    printf("\n");

}



int main(){
int a[]={2, 1, 6, 4, 3};
int n = sizeof(a) / sizeof(a[0]);
int b[]={3,8,15,12,2,20};
int m = sizeof(b) / sizeof(b[0]);
 
    //ordina_D(a,n);
int dim = m;
int *arr =(int*)malloc(dim*sizeof(int));

int s_2 = 0;

 cerca_maggiori(a, n, b, m, arr, &s_2);
int *b_non_nuls = (int*)malloc(n * sizeof(int));
considera_solo(a,n,b_non_nuls);
free(b_non_nuls);

combine(a,n,b,m);
free(arr);
    return 0;
}*/


    //QUESTION -2)

    //funzione per cambiere elementi del suo array aumen_0



/*int inserire_senza_2(int *a, int n, int *b){

    int j = 0;
    for (int i = 0; i <n; i++)
    {
       b[j] = a[i];
       j +=2;  
    }

   for (int k = 1; k < 2*n; k+=2)
   {
    b[k] = 0;
   }
    
     for (int l = 0; l <2*n; l++)
    {
        printf("%d ", a[l]);
    }
  return 0; 
}


void combine_alterna(int *a, int n, int *b, int m){

    int j =0;   
   
for (int i = 0; i < n && j < m; i++){
    if (a[i] == 0)
    {
      b[j] = a[i];
        j++;
    }
  
}
 for (int k = 0; k <n; k++)
    {
        printf("%d ", b[k]);
    }


}

int main(){

int a[]={2, 6, 4, 8, 10, 20};
int n = sizeof(a) / sizeof(a[0]);
int b[2*n];

int c[]={1,5,7,3,11, 21};
int dim = sizeof(c) / sizeof(c[0]);

inserire_senza_2(a,n,b);

combine_alterna(b, 2* n, c, dim);


    return 0;
}*/     //NON FINITO------------------->DA RIFARE






//NEW TAF
                    //EXO TAF main 2.pdf


    //1-


/*int calcolo_A_n(int n);
int calcoloB_n(int n);

 int calcolo_A_n(int n){

    if (n == 0)
    {
        return 1;
    }
      return (n - calcoloB_n (calcolo_A_n(n-1)));
     
}

               
        
 int calcoloB_n(int n){

    if (n == 0)
    {
      return 0;
    }
        return(n - calcolo_A_n(calcoloB_n(n-1)));
    
    
}


int main(){

int n = 3;
int result_1= calcolo_A_n(n);
printf("%d\n",result_1);

int result_2 = calcoloB_n(n);
printf("%d\n",result_2);

    return 0;
}*/


        //2-A


// void ordina(int *a, int n){
//     int tmp;
// for (int i = 0; i < n-1; i++){
//     for (int j = 0; j < n-1; j++){
//        if (a[j] > a[j+1])
//        {
//         tmp = a[j];
//         a[j] = a[j+1];
//         a[j+1] = tmp;
//        }
        
//     }  
// }
// }



// //funzione per cancellare i numeri che si ripetono
// void elimina(int *a, int n ){
// int trovato;
// for (int i = 0; i < n; i++){
//     trovato = 0;
//     for (int j = 0; j < i; j++){
//         if (a[i] == a[j])
//         {
//             trovato = 1;
//         }
        
//     }
//     if (trovato == 0)
//     {
//         printf("%d ", a[i]);
//     }
// }
// printf("\n");
// }



 
// void differnza_simetrica(int *a, int n, int *b, int m){

// int dim = m + n;
// int *tab = (int*)malloc(dim * sizeof(int));

// for (int i = 0; i < n; i++){
//    tab[i] = a[i];
// }

// for (int j = 0; j < m; j++){

//         tab[n+j] = b[j];
// }

// ordina(tab, dim);



// elimina(tab,dim);

// free(tab);

// }



// int main(){
// int a[]={-2,2,3,5,7,8,14,152,3};
// int n = sizeof(a) / sizeof(a[0]);

// int b[]={1,2,4,9};
// int m = sizeof(b) / sizeof(b[0]);

// printf("il nuovo array concatenato ed ordinato è:\n");

// differnza_simetrica(a,n,b,m);

// return 0;
// }




//2-B seconda domanda(determinare il massimo nel array)


/*int massimo(int *a, int n){
    int max = a[0];

    for (int i = 1; i <n; i++)
    {
     if (a[i] > max)
     {
     max = a[i];
     }
        
    }
   return max; 
}


int main(){

int a[] ={-2,1,2,3,4,5,520,7,8,9,14,152};
int dim = sizeof(a) / sizeof(a[0]);
printf("%d\n",massimo(a,dim));
    return 0;
}*/

//C
/*void fusione(int *a, int n, int *b, int m){
int dim = m + n;

int *arr = (int*)malloc(dim * sizeof(int));

for (int i = 0; i < dim; i++){
    arr[i] = a[i];
}
for (int k = 0; k < m; k++)
{
    arr[n+k] = b[k];
}

for (int i = 0; i < dim; i++)
{
   printf("%d ", arr[i]);
}

free(arr);
}


int main(){

 int a[]={-2,2,3,5,7,8};
 int n = sizeof(a) / sizeof(a[0]);

 int b[]={1,2,4,9};
 int m = sizeof(b) / sizeof(b[0]);
 
 fusione(a,n,b,m);

    return 0;
}*/


            //NEXT ESERCICE

        //A)
/*int controlla_diff(int *a, int n, int lamda, int better){

for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
        if ((a[j] - a[i] == lamda + better) || (a[j] - a[i] == lamda - better))
        {
           return 1;
        }
        
    }
    
}
return 0;
}



int main(){
int a[]={2,4,5,7,11};
int n = sizeof(a) / sizeof(a[0]);
int lamda = 4;
int bet = 1;
int result = controlla_diff(a,n,lamda,bet);
printf("%d\n", result);



    return 0;
}*/


    //B)


/*void somma_cumulatativa(int *a, int n){
    int dim = n;
    int *arr=(int*)malloc(dim * sizeof(int));
    arr[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        arr[i] = a[i] + a[i-1];
    }
    for (int j = 0; j <n; j++)
    {
       printf("%d ", arr[j]);
    }
    
}

int main(){

int a[]={2,4,5,7,11};
int n = sizeof(a) / sizeof(a[0]);
somma_cumulatativa(a,n);

    return 0;
}*/



        //B)
/*struct node
{
    int data;
    struct node *next;
};

    //funzione per afficher gli elementi di una lista

void print_list(struct node *mia_list){
if (mia_list->next == NULL)
{
   return;
}
while (mia_list != NULL)
{
    printf("%d",mia_list->data);
    if (mia_list->next != NULL)
    {
       printf("-> ");
    }
    
mia_list = mia_list->next;

}
printf("\n");
}

    //funzione per cancellare l ultimo elemento della lista

void cancella(struct node mia_lista){
    if (mia_lista.next == NULL)
    {
        mia_lista.data = 0;
    }
    mia_lista = mia_lista.next;
}

int main(){

struct node n1 ={1,NULL};
struct node n2 ={4,NULL};
struct node n3 ={50,NULL};
struct node n4 ={9,NULL};

n1.next = &n2;
n2.next = &n3;
n3.next = &n4;

//print_list(&n1);
    return 0;
}*/



    //funzione per cancellare l ultimo elemento di una lista




/*struct node
{
    int data;
    struct node *next;
};





void print_list(struct node *mia_list){
if (mia_list->next == NULL)
{
   return;
}
while (mia_list != NULL)
{
    printf("%d",mia_list->data);
    if (mia_list->next != NULL)
    {
       printf("-> ");
    }
    
mia_list = mia_list->next;

}
printf("\n");
}




void cancella (struct node **testa){
if (*testa == NULL)
{
   printf("lista vuota\n");
   return;
}

if ((*testa)->next == NULL)
{
   free(*testa);
   *testa = NULL;
   return;
}
struct node *current = *testa;
while (current->next != 0 && current->next->next != 0)
{
    current = current->next;
}

free(current->next);
current->next  = NULL;

}


int main(){

struct node *testa = malloc(sizeof(struct node));
testa->data = 2;
testa->next = malloc(sizeof(struct node));
testa->next->data = 3;
testa->next->next = malloc(sizeof(struct node));
testa->next->next->data = 4;
testa->next->next->next = NULL;


printf("la lista inziale è :\n");

print_list(testa);


cancella(&testa);

printf("la lista dopo aver cancellato è:\n");

print_list(testa);



    return 0;
}*/





        //esercizio Apello.pdf

    //A-1

/*int predicone(int *a, int n){
    int test_1 = 0;
    for (int i = 1; i < n; i++){
        int somma = 0;
        for (int j = 0; j < i; j++){
            somma += a[j];
        }
        if (a[i] < somma)
        {
            test_1 = 1;
            break;
        }
        
    }
    
    int test_2 = 1;
    for (int i = 3; i < n; i++){
        int tmp = 0;
        for (int j = i-2; j < i; j++){
            if (a[i] >= a[j])
            {
                tmp = 1;
                break;
            }
            
        }
       if (tmp == 0)
       {
        test_2 = 0;
        break;
       }
        
    }
    
return test_1 && test_2;
}



int main(){

int a[]={1,3,2,4,5};
int n = sizeof(a) / sizeof(a[0]);

if (predicone(a,n))
{
    printf(" vero !\n");
}else{
    printf("falso !");
}


    return 0;
}*/



    //A-2


/*void calcolo_sucessione(int n){

    int s_1 = 0, s_2 = 0, s_n;
if (n < 3)
{
   printf("il numero deve essera >= 3\n");
   return;
}

printf("s_1 = %d\n", s_1);
printf("s_2 = %d\n", s_2);
for (int i = 3; i <= n; i++)
{
    if (s_2 >= 3*(s_1+1))
{
s_n = (s_1 - s_2)/ i;
}else{
    s_n = (s_1 * s_2 ) /i;
}

printf("s_%d = %d\n", i,s_n);
s_1 = s_2;
s_2=s_n;
}

}*/





/*typedef struct node
{
    int data;
    struct node *next;
}node;

        //funzione per creare un node

node* creat_list(int value){
     node *mia_lista = (node*)malloc(sizeof(node));
    mia_lista->data = value;
    mia_lista->next = NULL;
    return mia_lista;
}


        //funzione per mettere un elemento all'inizio

void add_inTesta(node** testa,int value){

    node *new_element = creat_list(value);
    new_element->next = *testa;
    *testa = new_element;
}



        //funzione per stampare la lista

void stampa_lista( node *lista){

    while (lista!= NULL)
    {
       printf("%d ", lista->data);
    
    if (lista->next != NULL)
    {
       printf("-> ");
    }
    lista = lista->next;
    }
    printf("\n");

}



int main(){

    node *lista = (node*)malloc(sizeof(node));

    lista->data = 2;
    lista->next = (node*)malloc(sizeof(node));
    lista->next->data = 1;
    lista->next->next = NULL;

     add_inTesta(&lista,5);

     stampa_lista(lista);
     
    node* tmp;
    while (lista != NULL)
    {
       tmp = lista;
       lista = lista->next;
       free(tmp);
    }
    

    return 0;
}*/




    //funzione (iterative) per calcolarei numeri di numeri dispari nella lista

/*int calcolo_dis(node *mia_lista){
    int count = 0;
    while (mia_lista != NULL)
    {
        if ((mia_lista->data) % (2) != 0)
        {
           count ++;
        }
      mia_lista = mia_lista->next;  
    }
    return count;
}



        //stessa funzione ma (ricorsiva)

int calcolo_dis_ric(node* my_list){
  int count = 0;

    if (my_list == NULL)
    {
        return 0;
    }
   
    return ((my_list->data) % 2 + calcolo_dis(my_list->next));
    
}      


int main(){

    node *lista = (node*)malloc(sizeof(node));

    lista->data = 2;
    lista->next = (node*)malloc(sizeof(node));
    lista->next->data = 3;
    lista->next->next = (node*)malloc(sizeof(node));
    lista->next->next->data = 1;
    lista->next->next->next = (node*)malloc(sizeof(node));
    lista->next->next->next->data = 11;
    lista->next->next->next->next = (node*)malloc(sizeof(node));
    lista->next->next->next->next->data = 7;
    lista->next->next->next->next->next = NULL;

   printf("%d\n",  calcolo_dis_ric(lista));

   node *tmp;
   while (lista != NULL)
   {
   tmp = lista;
   lista = lista->next;
   free(tmp);
   }
    return 0;
}*/




        //TAF(6.PDF)

/*void metti_insieme(int *a, int n, int *b, int m){

int dim = m + n;
    int *arr = (int*) malloc(dim * sizeof(int));

for (int i = 0; i < n; i++){
   arr[i] = a[i];  
}

for (int j = 0 ; j < m; j++){
    
      arr [n + j] = b[j];
}

for (int i = 0; i < dim; i++)
{
    printf("%d ",arr[i]);
}

free(arr);
printf("\n");
}


void verifica(int *a, int n, int *b, int m){

int *b_2 = (int*)malloc(m*sizeof(int));

for (int l = 0; l < m; l++)
{
    b_2[l] = b[l];
}

    for (int i = 0; i < n; i++){
       for (int j = 0; j < m; j++){
        if (a[i] == b_2[j])
        {
            b_2[j] = 0;
        }
        
       }
       
    }

   for (int i = 0; i < m; i++)
   {
    if (b_2[i] != 0)
    {
      printf("%d ", b_2[i]);
    }
    
   }

    printf("\n");
    free(b_2);
}







int main(){
int a[]={1,2,3,4,5};
int n = sizeof(a) / sizeof(a[0]);
int b[] = {3,4,5,6,7,8,9,10,11,12};
int m = sizeof(b) / sizeof(b[0]);

verifica(a,n,b,m);
verifica(b,m,a,n);
    return 0;
}*/



        //exo 6.pdf

 /*   //A-1
int is_inside(int x, int y, int z){

    if (x >= y && x <= z)
    {
        return 0;
    }
    return -1;
}


    //funzione per finire

int overlap_size(int i, int j, int t, int u){
    int count = 0;
for (int x = i; x <= j; x++)
{
if (is_inside(x, t, u)== -1)
{
   count ++;
}

}


for (int x = t; x <= u; x++)
{
   if (is_inside(x,i,j) == -1)
   {
    count ++;
   }
   
}
return count;

}



int main(){

int i = 1, j= 5, t = 3,  u =12;
int result = overlap_size(i, j, t, u);
printf("la dimensione cercata è: %d \n", result);
    return 0;
}*/



    //A-2

/*int main(){

int n, tot;
int s_n;
int cal = 1;


printf("inserire il numero totale di numeri: ");
scanf("%d", &tot);

int *arr = (int*)malloc(tot * sizeof(int));


for (int  i = 0; i < tot; i++)
{
    printf("inserire un numero %d ",i+1);
    scanf("%d", &arr[i]);
}
for (int k = 0; k < tot; k++)
{
    printf("%d ", arr[k]);

}
printf("\n");

for (int j = 0; j < tot; j++)
{
 cal *= arr[j];
}
   

printf("il risultato è : %d\n", cal);
free(arr);
    return 0;
}*/



//A-3

/*double calcolo_ric(double n){

    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 12;
    }
if (n >= 2)
{
   return (3 * (calcolo_ric(n-1)-calcolo_ric(n-2)) + (calcolo_ric(n-2) - (calcolo_ric)(n-1)) * (n-calcolo_ric(1)));
}

}


 //stessa fun ma iterativa


double calcolo_ite(int *x, int n){

    double F_n, tmp;
    double F_0 = 1, F_1 = 12;
    double somma = 0;
for (int i = 0; i < n; i++)
{
    int idx = x[i];
    if (idx == 0)
    {
       F_n = F_0;
    }else if(idx == 1)
    {
       F_n = 12; 
    }else{

        for (int j = 0; j <= idx; j++)
        {
            F_n = 3*(F_1 - F_0) + (F_0 - F_1) * (j - F_1);
            
        }
        
    }
    somma += F_n;
    
}

return somma;

}


int main(){
    int x[]={1,2,0};
double n = sizeof(x) / sizeof(x[0]);
double result = calcolo_ite(x,n);

printf("%.2f\n", result);

    return 0;
}*/






//     //esercizi opzionali

//  //3.1
//  struct elemento{
//     int *arr;
//     int dim;
//   struct elemento* Next;  

//  };

//  typedef struct elemento ElementoDiLista;
//  typedef ElementoDiLista* ListaDiElementi;


//     //funzione per creare un elemeto(del tipo array)


// ListaDiElementi init(int size){

//     ListaDiElementi my_list = (ListaDiElementi)malloc(sizeof(ElementoDiLista));
//     if (my_list == NULL)
//     {
//         printf("errore di allocazione della memoria ! ");
//         return NULL;
//     }

// my_list->arr = (int*)malloc(size * sizeof(int));

// if (my_list->arr == NULL)
// {
//    printf("errore di allocazione della memoria ! \n ");
//    return NULL;
// }

// my_list->dim = size;
// my_list->Next = NULL;

// return my_list;
    
// }



//     //funzione per aumentare un elemento alla fine della lista


// void add_in_fine(ListaDiElementi *lista, int size_newEl){

// ListaDiElementi new_element = init(size_newEl);
// if (new_element == NULL)
// {
//    return;
// }

// ListaDiElementi current = *lista;
// if (current == NULL)
// {
//   *lista = new_element;
// }else{

// while (current->Next != NULL)
// {
//     current = current->Next;
// }
// current->Next = new_element;
// }

// }


//     //funzione per determinare la dim totale degli nella lista

// int ntot(ListaDiElementi lista){

//     int count = 0;
//     if (lista == NULL)
//     {
//       printf("la lista è vuota ! \n");
//       return 0;
//     }
// while (lista != NULL)
// {
//     count += lista->dim;
//     lista = lista->Next;
// }
//  return count;
// }

 
//     //funzione per stampare la lista

// void stampa_lista(ListaDiElementi my_lista){
// while (my_lista != NULL)
// {
//   for (int i = 0; i < my_lista->dim; i++)
//   {
//    printf("%d ", my_lista->arr[i]);
//   }
//   printf("\n");
//   my_lista = my_lista->Next;
// }


// }


//     //funzione per dire qual'elemento della lista a piu grande dimensione

// int largest(ListaDiElementi my_lista){
//    int max = my_lista->dim;
//    if (my_lista == NULL)
//    {
//     printf("la listwa è vuota\n");
//    }
//    my_lista = my_lista->Next;
//    while (my_lista != NULL)
//    {
//    if (my_lista->dim > max)
//    {
//     max = my_lista->dim;
//    }
//    my_lista = my_lista->Next;
//    }
     
// return max;
// }

// int main(){

// ListaDiElementi mia_lista = init(4) ;

// mia_lista->arr[0] = 2;
// mia_lista->arr[1]= 4;
// mia_lista->arr[2]= 3;
// mia_lista->arr[3]= 8;

// add_in_fine(&mia_lista, 3);
// mia_lista->Next->arr[0]= 2; 
// mia_lista->Next->arr[1]= 22;
// mia_lista->Next->arr[2]= 5;

// add_in_fine(&mia_lista, 2);
// mia_lista->Next->Next->arr[0]= 0;
// mia_lista->Next->Next->arr[1]= 3;

// printf("ecco gli elementi della lista :\n");
// stampa_lista(mia_lista);

// int result = ntot(mia_lista);

// printf("la dimenzione di quest lista è : %d\n", result);

// int massimo = largest(mia_lista);
// printf("il piu grande vale %d \n", massimo);

// //liberer l'espace

// ListaDiElementi current = mia_lista;
// while (current != NULL)
// {
//     ListaDiElementi next = current->Next;
//     free(current->arr);
// free(current);
// current = next;
// }
//     return 0;
// }





        //ESERCIZIO DEL 4.pdf

/*//A-1

int primo(int n, int i){
if (i > n)
    {
        i = n-1;
    }

if ( i == 1)
    {
        return 1;
    }

if (n % i == 0)
    {
    return 0;
    }
    return primo(n, i-1);
    
}

//funzione per verificare i numeri primi in un intervalo dato

int my_function(int x, int y){

    int count = 0;
for (int i = x+1; i < y; i++)
{
    if (primo(i,i-1))
    {
       count +=1;
    }
    
}

return count;
}




int main(){
int a = 2;
int b = 5;
 
 int result = my_function(a, b);
 printf("%d\n", result);

    return 0;
}*/


/*//A-2

int suc_iterativo(int n){

    int a_1 = -1, a_2 = 0;
    int a_n, tmp;

if (n == 1)
{
   return a_1;
}
if (n == 0)
{
  return a_2;
}

    for (int i = 2; i < n; i++)
    {
       if (a_1 > a_2)
       {
         a_n = (2*a_1 - a_2 +1) * i;
       }else{
        a_n = (2*i + a_2 + 1) * a_1;
       }
       tmp = a_1;
       a_1 = a_2;
       a_2 = tmp;
    }
   return a_n; 

}

int main(){
int n = 3;
int result = suc_iterativo(n);
printf("%d\n", result);


    return 0;
}*/

//A-3



       
       
       
       /*// ESERCITAZIONE SULLE LISTE



typedef struct Nodo
{
   int data;
   struct Nodo* Next;
}Nodo;

//funzione per creare un nodo


Nodo* creare_nodo(int valore){

    Nodo* new_nodo = (Nodo*)malloc(sizeof(Nodo));
    if (new_nodo == NULL)
    {
        printf("errore di allocazione della memoria !");
        return NULL;
    }

    new_nodo->data = valore;
    new_nodo->Next = NULL;
    return new_nodo;
    
}




//funzione per add un nodo alla fini di una lista


void add_in_fine(Nodo* lista, Nodo* new_element){

    //new_element = creare_nodo(2);
    if (lista == NULL)
    {
       printf("le lista è vuota !\n");
       lista = new_element;
       return;
    }

    while (lista->Next!= NULL)
    {
       lista = lista ->Next;
    }
   lista->Next = new_element; 
    
}


//funzione per visionare la lista
void stampa_lista(Nodo* lista){
    if (lista == NULL)
    {
       printf("la lista è vuota ");
       return;
    }

    while (lista != NULL)
    {
        printf("%d", lista->data);
    
    if (lista->Next != NULL)
    {
      printf(" -> ");
    }
     lista = lista->Next;
    }
    printf("\n");
}


//funsìzione per cancellare un elemento in una lista

void cancella_elemento(Nodo** lista, int elemento){
if (*lista == NULL)
{
    printf("la lista è vuota! \n");
    return;
}

Nodo* current = *lista;
Nodo* prev = NULL;

if (current != NULL && current ->data == elemento)
{
  *lista = current->Next;
   free(current);
   return;
}

while (current!= NULL && current->data != elemento)
{
    prev = current;

    current = current->Next;
}

if (current== NULL)
{
   printf("la lista non contiene questo elemento \n");
   return;
}

prev->Next = current->Next;
free(current);

return;
}



int main(){

Nodo* mia_list = (Nodo*)malloc(sizeof(Nodo));

mia_list->data = 3;
mia_list->Next =(Nodo*)malloc(sizeof(Nodo));
mia_list->Next->data =5;
mia_list->Next->Next= NULL;

Nodo* nuovo_el = creare_nodo(2);

add_in_fine(mia_list, nuovo_el);

//stampa_lista(mia_list);

cancella_elemento(&mia_list, 2);

stampa_lista(mia_list);

    return 0;
}*/




        /*//ESERCITAZIONE SULLE LISTES


//

typedef struct Nodo
{
  int data;
  struct Nodo* Next; 
}Nodo;


//funzione per creare un nodo


Nodo* creare_nodo(int valore){

    Nodo* new_nodo = (Nodo*)malloc(sizeof(Nodo));
    if (new_nodo == NULL)
    {
        printf("errore di allocazione della memoria !");
        return NULL;
    }

    new_nodo->data = valore;
    new_nodo->Next = NULL;
    return new_nodo;
    
}

//funzione per aumentare un elemento alla testa della lista

void add_in_testa(Nodo** head, int valore){

    Nodo* new_element = creare_nodo(valore);
    if (new_element == NULL)
    {
        printf("l'elemento è vuoto !");
    return;
    }

    new_element->Next = *head ;
    *head = new_element;
    
}


//funzione per aumentare un elemento alla fini

void add_inFine(Nodo* lista, int value){
    Nodo* new_elemento = creare_nodo(value);
    if (lista == NULL)
    {
        lista = new_elemento;
    }

   while (lista->Next != NULL)
   {
    lista = lista->Next;
   }
  lista->Next = new_elemento;  
}



//funzione per cancellare la testa della lista

void cancella_testa(Nodo** lista){
    if (*lista == NULL)
    {
        printf("la lista è vuota ");
        return;
    }
   Nodo* temp = *lista; 
   *lista = (*lista)->Next;
   free(temp);
}


//funzione per cancellare l'ultimo elementlo

void cancella_last(Nodo* lista){
    if (lista == NULL)
    {
        printf("la lista è vuota ");
        return;
    }
  if (lista->Next == NULL)
  {
  free(lista);
  }
  
  Nodo* tmp = lista;
  while (tmp->Next != NULL && tmp->Next->Next != NULL)
  {
    tmp = tmp->Next;
  }
   free(tmp->Next);
   tmp->Next = NULL; 
}

// funzione per stampare la lista

void stampa_lista(Nodo* lista){
    if (lista == NULL)
    {
       printf("la lista è vuota ");
       return;
    }

    while (lista != NULL)
    {
        printf("%d", lista->data);
    
    if (lista->Next != NULL)
    {
      printf(" -> ");
    }
     lista = lista->Next;
    }
    printf("\n");
}





int main(){
Nodo* my_list = (Nodo*)malloc(sizeof(Nodo));
my_list->data = 2;
my_list->Next = (Nodo*)malloc(sizeof(Nodo));
my_list->Next->data = 7;
my_list ->Next->Next = NULL;

add_in_testa(&my_list, 5);

stampa_lista(my_list);

add_inFine(my_list, 12);
stampa_lista(my_list);

cancella_testa(&my_list);
stampa_lista(my_list);

cancella_last(my_list);
stampa_lista(my_list);
    return 0;
}*/




//EXO CHATGPT
/*
//1*
//-----------------------------------------
int cerca_elementi(int *a, int n, int x){
    int y = 0;
    for (int i = 0; i < n; i++)
    {
       if (a[i] == x)
       {
        y = 1;
       }
       
    }
   if (y != 0)
   {
    printf ("elemento trovato\n");
   } else{
    printf("non c'è questo elemento\n");
   }
   
}
//-----------------------------------------

int media(int *a, int n){
int media, r = 0;
for (int i = 0; i < n; i++)
{
  r += a[i];  
}
media = r/n;
return media;

}

//-----------------------------------------

int somma(int *a, int n){
    int som = 0;
    for (int  i = 0; i < n; i++)
    {
       som += a[i];
    }
    return som;

}

int main(){
int arr[]={1,2,3,4,5};
int n = sizeof(arr) / sizeof (arr[0]);

int r = somma(arr, n);
printf("%d\n", r);

int s =media(arr, n);
 printf("%d\n", s);

 cerca_elementi(arr, n, 1);
    return 0;
}*/


/*//2*

void coppia_all(int *a, int n){
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
       arr[i] = a[i];
    }
    
    for (int j  = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    free(arr);
}
//-----------------------------------
void inversa(int *a, int n){

    int tmp;
    for (int i = 0; i < n/2; i++)
    {
        tmp = a[i];
        a[i] =  a[n -i -1] ;
       a[n -i -1] = tmp;;
    }
    for (int j  = 0; j < n; j++)
    {
        printf("%d ", a[j]);
    }
     
}
//-----------------------------------
void ordina_cre(int *a, int n){
    for (int i = 0; i < n-1; i++){
        for (int j =0; j < n-1; j++){
            if (a[j] > a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
            
        }
        
    }
    
}
//-----------------------------------
void ordina_decre(int *a, int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-1-i; j++){
            if (a[j] < a[j + 1])
            {
               int tmp = a[j];
               a[j] = a[j+1];;
               a[j+1] = tmp;
            }
            
        }
        
    }
    
}
//-----------------------------------

void fusione(int *a, int n, int *b, int m){
    int *arr = (int*)malloc((n + m) * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        arr[i] = a[i];
    }
    
    for (int j = 0; j < m; j++){
       
        arr[n+j] = b[j];
       
    }

    for ( int i = 0; i < n+m; i++)
{
    printf("%d ", arr[i]);
}
}


//-----------------------------------

int trova_magggiore(int *a, int n){
    int max = a[0];
    for (int i = 1; i < n; i++)   {
      if (a[i] > max)
      {
        max = a[i];
      }
      
    }
    return max;
}
//-----------------------------------
int trova_minore(int *a, int n){
 int min = a[0];
 for (int i = 1; i < n; i++)
 {
    if (a[i] < min)
    {
       min = a[i];
    }
    
 }
 
return min;
}

int main(){

int a[]={2,5,4,-5,16,28,9};
int n = sizeof(a) / sizeof(a[0]);
int b[]={4,8,6,3};
int m = sizeof(b) / sizeof(b[0]);
 int *arr = (int*)malloc((n + m) * sizeof(int));

// coppia_all (a, n);
// printf("\n");
// inversa(a, n);
// printf("\n");
// ordina_cre(a, n);
// for ( int i = 0; i < n; i++)
// {
//     printf("%d ", a[i]);
// }

// printf("\n");
// ordina_decre(a, n);
// for ( int i = 0; i < n; i++)
// {
//     printf("%d ", a[i]);
// }

// printf("\n");
// fusione(a,n,b,m);

int result = trova_magggiore(a,n);
//printf("%d ", result);

int results = trova_minore(a,n);
printf("%d ", results);


    return 0;
}*/


//3*vC:\Users\delma\OneDrive\Bureau\ProgrammingLab\main.c