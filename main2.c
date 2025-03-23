
/* programma per determinare se una lista è vuota no*/
// typedef struct Node {
//     int data;
//     struct Node* next;
// } Node;

// Node* iniList(){
//     return NULL;
// }
// bool empty(Node* head){
//     return head = NULL;
// }

// int main(){

// Node* head = iniList();
// if (empty)
// {
//    printf("liste vide\n");
// } else{
// printf("list occupée\n");
// }

//     return 0;
// }

int main(){


    
return 0;

}



                //WOCK SUR MAIN.PDF

int pari_dispari(int y){
if (y < 0)
{
   return -1;
}else if (y % 2 == 0)
{
  return 1;
}else{
    return -1;
}

 }

// int main(){
// printf("%d\n", pari_dispari(4));
//     return 0;
// }


//  int somma(int a){

//     if (a == 0)
//     {
//         return 0;
//     }
//     if (a == 1)
//     {
//         return 1;
//     }
//     if ( a > 1)
//     {
//        return (a+somma(a-1));
//     }
    
    
// }

// int main(){
// printf("%d\n", somma(4));
 //     return 0;
// }

// int prodotto(int n){

// if (n == 1)
// {
//     return 1;
// }

// if (n > 1)
// {
//     return (n * prodotto(n-1));
// }

//     return 0;
// }


// int main(){
// printf("%d\n", prodotto(-4));
//     return 0;
// }


double somma_pari_dispari(int i){
if (i == 0)
{
    return 0;
}
if ( i > 0)
{
    return ( (i * pari_dispari(i)) + somma_pari_dispari(i -1));
}

}

double teta_n(int n){

    if (n == 0)
    {
       return 1;
    
      return teta_n (n-1) * (1 + somma_pari_dispari(n));
    
    }
}

int main(){

printf("%.2f\n", teta_n(1));
    return 0;
}
































int verifica(int *a,int n,int k){
    if(k > n/2){
        return 1;
    }
    if(a[k] != a[n-k-1]){
        return 0;
    }
    return verifica(a,n,k+1);
} 

int palindromo(int *a,int n){
    if(a[0] != a[n-1]){
        return 0;
    }
    return verifica(a,n,1);
}

int main() {
// int a[] = {1, 2, 1, 4, 1, 2};
// int n = sizeof(a) / sizeof(a[0]);
// int f[n];

// calcola_frequenze(a, f, n);

// // Affichage du résultat
// for (int i = 0; i < n; i++) {
// printf("%d ", f[i]);
// }

// printf("\n");

// return 0;

    int a[] = {1,1,2,1,1};
    int dim =sizeof(a)/sizeof(a[0]);
    printf("%d",palindromo(a,dim));
}






/*https://app.minea.com/en/register?from=%2Ffr%2Fproducts%2Ftiktok%3Fref%3Dyomi34

https://go.mindeo.com/order-628168241736067571873

https://go.mindeo.com/plan-action-ecom

https://www.buildyourstore.ai/yomi-denzel/

https://getstarted.tiktok.com/ttam-partners?irclickid=3pxSmOQqjxyKUWvVany9KwyGUks0E9TpF2o0zA0&irgwc=1&attr_source=impact&attr_medium=affiliate-ad&attr_ad_id=1964814&attr_adgroup_id=5989115&ad_group_name=YomiMindeo&lang=fr