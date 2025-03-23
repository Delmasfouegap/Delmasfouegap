#include <stdio.h>
#include <std.lib>

// // // int main(){

// // // int n;
// // // printf("inserire valore dell'array\n");
// // // scanf("%d", &n);
// // // int* a=(int*)malloc(n*sizeof(int));
// // // for (int i = 0; i < n; i++)
// // // {
// // //     printf("inserire i valori dell'array \n");
// // //     scanf("%d", &a[i]);
// // // }



// // // int a[4]={2,1,1,4};
// // // printf("%d\n", conto(a, 4));
// // //     return 0;
// // // }



// // // int conto(int* a, int n){
// // //  int x, c_x=0;
// // //     for (int i = 0; i <n; i++)
// // //     {
// // //        if (*(a+i)== x)
// // //        {
// // //         c_x+=1;
      
// // //     }
// // //     return c_x;
// // //     }
// // // }




// // // // int comprimo(int* a, int n){
// // // //     for (int i = 0; i <n; i++)
// // // //     {
// // // //         if (*(a+i) == *(a+i+1))
// // // //         {
// // // //            *(a+i)*
// // // //         }
        
// // // //     }
    
// // // // }








// // // int equazione(int a, int b, int c){
// // //     int delta;
// // //     if (a = 0)
// // //     {
// // //      printf("il numero deve essere diverso da 0\n");
// // //     } else{
        
// // //          printf("deve inserire i valori di a, b e c. si nota che a deve essere diverso da 0 ! \n");
// // //     printf("inserire il valore di a\n");
// // //     scanf("%d", &a);
// // //     printf("inserire il valore di b\n");
// // //     scanf("%d", &b);
// // //     printf("inserire il valore di c\n");
// // //     scanf("%d", &c);
   

// // //     if (delta > 0);
// // //      delta = pow(b,2)+(4*a*c);
// // //     {
// // //        printf("l'equazione ammette 2 soluzioni\n");
// // //        double x_1= ( (-b) - (sqrt (delta)) ) / 2*a;
// // //        int x_2 =( (-b) + (sqrt (delta)) ) / 2*a; 
// // //        printf("quei soluzione sonne x_1=%d e x_2=%d\n", x_1, x_2);
// // //     } else if (delta < 0)
// // //     {
// // //         printf("l'equazione no ammette di soluzione\n");
// // //     } else{
// // //         printf("l'equazione ammette 1 soluzione\n");
// // //         int x_unica = -b/2*a;
// // //         printf("quest'unica soluzione è x =%d\n", x_unica);
// // //     }
    
// // //     }
// // //     }









// // //     //occorenza
    
// // // int b[]={4,1,1,1,2,3,3,4,5,7};
// // // int y=1;
// // // printf("%d\n", (b, 10, y));
 
// // // int occorenza(int *a, int n, int x){
// // //     int count=0;
    
// // //     for(int i=0 ;i<n; i++)
// // //     {
// // //         if(a[i] == x)
// // //         {
// // //            count++;
             
// // //         }
   
// // //   return count;
// // // }
// // //     }





// // //     /*fonction pour retourner vrai ou faux si besoin*/
// // // // typedef enum{
// // // //     false, 
// // // //     true
// // // // }bool;


// // // typedef struct ListeElement
// // // {
// // //     int data;
// // //     struct ListElement *next;
// // // }ListElement, *list;


// // // /*fonction pour creer o retourner une liste vide*/
// // // list new_list(void){
// // //     return NULL;
// // // }



// // // /*fonction pour verifier si la structure est vide*/
// // // bool empty(nome_list){
// // //     if (nome_list == NULL)
// // //     {
// // //         return true
// // //     }else{
// // //         return false
// // //     }
    
// // // }

// // // bool empty(list li){
// // //     if ( li == NULL)
// // //     {
// // //         return true;
// // //     }else {
// // //         return false;
// // //     }
// // // }




// // // int main(){
// // // list new_list(void);
// // // bool empty(list li);


// // //     return 0;
// // // }



// // // //

// // // void scambia(int* a, int* b){
// // //     int tmp =0;
// // //      tmp = *a;
// // //     *a=*b;
// // //     *b=tmp;
// // // }

// // // int main(){

// // //    int x=5;
// // //    int y = 2;
   
// // // scambia(*x, *y);
// // //    int s=x-y;
   
// // // printf("%d\n", s);
// // //     return 0;
// // // }



// // // /*primo parziale TAF*/
// // // //1-B
// // // float tn_ric(int n){


// // //     if (n==1)
// // //     {
// // //         return 1;
// // //     }
// // //     if (n==2)
// // //     {
// // //        return 2;
// // //     }
// // //     if (n>2)
// // //     {
// // //      return ((tn_ric(n-1)*tn_ric(n-2))+1)/n;
// // //     }
// // //   }

// // // //B-2 ricorsiva

// // // /*verifier si un nombre est paire de facon high*/
// // // int pari_dispari(int y){
// // //     if (y < 0  )
// // //     {
// // //        printf("inserire un valore >= 0!");
// // //     }
// // //     if (y == 0)
// // //     {
// // //         return 1;
// // //     } else if (y ==1)
// // //     {
// // //         return -1;
// // //     } else
// // //     {
// // //         return pari_dispari(y-1)*-1;
// // //     }
    
// // // }


// // // //C-2 ricorsiva per pi-n
// // // /*una funzione somma*/
// // // int somma(int n){
// // //     if (n == 0)
// // //     {
// // //        return 0;
// // //     }
    
// // //     if (n==1)
// // //     {
// // //        return -1;
// // //     } else
// // //     {
// // //         return (n*(pari_dispari(n)+somma(n-1)));
// // //     }
    
    
// // // }

// // // int main(){
// // // int x =3;
// // // printf("%d\n", (somma(x)*(pari_dispari(x-1)*-1)));

// // //     return 0;
// // // }
// // // /*una funzione per prodotto*/

// // // // int prodotto (int n){
// // // //     if (n==1)
// // // //     {
// // // //         return 1;
// // // //     }else{
// // // //         return n*prodotto(n-1);
// // // //     }
    
// // // // }
// // //  /*fuzione finale*/
 




















// void calcola_frequenze(int a[], int f[], int n) {
//     // Initialisation de l'array f avec 0
//     for (int i = 0; i < n; i++) {
//         f[i] = 0;
//     }

//     // Parcours de l'array a pour calculer les fréquences
//     for (int i = 0; i < n; i++) {
//         // Si f[i] est déjà marqué à une valeur différente de 0, cela signifie qu'on a déjà traité cet élément
//         if (f[i] == 0) { // Seulement traiter les éléments non traités
//             // Calcul du nombre d'occurrences de a[i] dans a
//             int count = 0;
//             for (int j = 0; j < n; j++) {
//                 if (a[i] == a[j]) {
//                     count++;
//                 }
//             }

//             // Affecter la fréquence de l'élément a[i] à f[i]
//             f[i] = count;

//             // Marquer les autres occurrences de a[i] comme déjà traitées
//             for (int j = i + 1; j < n; j++) {
//                 if (a[i] == a[j]) {
//                     f[j] = 0; // Mettre 0 pour toutes les occurrences suivantes
//                 }
//             }
//         }
//     }
// }






class CSVTimesSeriesFiles:
    def __init__(self, my_files):
        self.name = my_files

    def get_gata(self):
        with open(self.name, "r") as files:
            my_lista = []
            for linea in files:
                linea = linea.strip().split(",")
                if linea[0] != "Date":
                    linea[1] = float(linea[1])
                    my_lista.append(linea)
            return my_lista
        
times_series_files = CSVTimesSeriesFiles(r"C:\Users\delma\Downloads\shampoo_sales.csv")
times_series = times_series_files.get_gata()
# print(times_series)

##------>la funzione per calcolare la media

def compute_variations(my_seriesFiles, firstyear, lastyear, N):

#prima parte per stampare ogni data con le sue vallori
    my_dict = {}
    for item in my_seriesFiles:
        anno = item[0].split("-")
        valore = item[1]
        data = int(anno[2])
        if data not in my_dict:
            my_dict[data] = []
        my_dict[data].append(valore)

    new_dict = {}
    
    for item in my_dict.keys():
    
        for i in range(firstyear, lastyear +1):
            if item  == i:
                new_dict[item] = my_dict[item]
    return new_dict
    ----------------------------------------------------------------------------
    for dati in dictionary.keys():
        table = []
        for i in range(N):
            try:
                table.append(dictionary[dati-i-1])
            except:
                continue
        try:
            if len(table) == 0:
                dictionary_2[dati] = 0
            else:
                media_mobile = sum(table)/len(table)
                dictionary_2[dati] = media_mobile
        except:
            continue
    ##return dictionary_2
    my_dict_finaly = {}
    for dates in dictionary.keys():
        chiave = str(dates)
        val = dictionary[dates] - dictionary_2[dates]
        my_dict_finaly[chiave] = val
    
    return my_dict_finaly



#-****************************************************************************************************************************************
#*************************************************************************************************







