


# #y=2
# #x = 15
# #z=x**y

# #print('il risultato è {}  '.format(z))
# #if (x+y ) > z:
#        # print("oullalaa")

# #elif(y+ x) == 20:
#     #    print("buongiorno")
# #else:
#     #    print("riprendere tutto")
#      #   i=2
#       #  while i<14:
#               #  print(i)
#            #    # i=i+2

# #esercizio 1

# print("l'equivalente di 538 minuti è {}h:{}min ". format(538//60, 538%60))

# def quante_volte(parola, lettera):
#         conta=0
#         for caratere in parola:
#                 if caratere == lettera:
#                         conta +=1
#         return conta

# print(quante_volte ('ciao_aaaaaa', 'a'))


# # #3

# def palindromo(stringa):
#     for i in range (len(stringa)):
#         if stringa [i] != stringa[-i-1]:
#                     return False
#     return True        

# print(palindromo ('313'))

#per leggere una parolla in contrario
#s = "ciao"6
#print (s[-1::-1])
#potremmo quindi..(fare la domanda 3 cosi)
# def palindromo(stringa):
#         if stringa == stringa[::-1]:
#                 return True
#         else:
#                 return False       
# print(palindromo ('313'))


##esercizio sul tipo di triangolo

# def tipo_triangolo(a, b, c):
#     if(a+b > c and a+c >b and b+c >a):
#         print("quei numeri possono essere un triangolo")
#         if a==b==c:
#             return " triangolo equilatero "
#         if(a==b or a==c or b==c):
#             return " triangolo isocele"
#         if(a**2==b**2 + c**2 or b**2==a**2 + c**2 or c**2== a**2+b**2):
#             return " triangolo rettangolo"
#         if(a !=b !=c ):
#           return "triangolo qualunque" 
#         if((a==b)>c or (b==c)>a or (a==c)>b):
#             return "è un triangolo rettantogolo isocelo"
#     else:
#         return False
# print(tipo_triangolo (7,8,4))
        


##esercizio per scambiare gli elementi 

# def scambio(list,i,j):
#     tmp=list[i]
#     list[i]=list[j]
#     list[j]=tmp
#     return list

# lista=[1,4,3,7,8,9]
# print(scambio(lista, 0,4))
    
#     ##esercizio per fattoriale

# def fattoriale(n):
#     if n < 0:
#         return "il numero deve essere >=0"
#     if n == 0:
#         return 1
#     if n ==1:
#         return 1
#     if n > 1:
#         return n*fattoriale(n-1)

# print(fattoriale(3))            




##programma per deter se due liste hanno un elemento in commune

# def elemento_com(list_1, list_2):
#     for i in range(len(list_1)):
#        for j in range(len(list_2)):
#         if list_1[i]==list_2[j]:
#             return True

        

# lista_1=[2,3,8,12,7]
# lista_2=[5,6,4,2]
# print(elemento_com(lista_1, lista_2))


#programma per fare la somma degli elementi di una lista
# def sum_list(my_list=[]):
#   somma=0
#   for elemento in my_list: 
#     somma=somma+elemento
#   return somma

# lista=[5,7,3,20]
# print(sum_list(lista))


#elementi pari di una lista*

# def solo_pari(list=[]):
#  list_pari=[]
#  for elemento in list:
#   if elemento%2==0:
#     list_pari.append(elemento)    
#  return list_pari

# lista=[1,2,3,4,5,6,7,8,9]
# print(solo_pari(lista))


#valutation
# re=True
# age =40
# print(age)     
# print(type(re))
# nome="Delmas"
# valure=50

# print("il nome della personne è {} et il suo valure è {}\n".format(nome, valure))

#joueur1=input()
#print("il s'agit bien de", joueur1)



##programma di esercitazionni
# userName = "delmas"
# password= "12345"
# print ("benvenuto nell'interfacia !")


# use_pas=input("inserire il suo password!\n:")

# if (use_pas==password): #and 
#    use_name=input("inserire l'id\n :")
#    print("bene! next\n")

# if (use_name==userName):
#    print("benvenuto signore! ")
# else:
#    print("error!\n")



##les mots cles pour gli eccezioni

# prezzo_prodotto=input("inserire il prezzzo del prodoto\n")
# try:
#    prezzo_prodotto=int(prezzo_prodotto)
#    print("questo prodotto costa:{} euro \n".format(prezzo_prodotto))
# except:
#    print("il prezzo deve essere dei ciffre! riscrivere. \n")
# else:
#    print("questo prodotto è unico")
# finally:
#    print("ecco un buon lavoro! fino del programma ☻\n")   










# class veicolo:
#     def __init__(self):
#         print("lancement....")
#         self.colore= "nero"
#         self.potenza=850
#         self.orine="Allemagne"
 
 
# class veicolo2:
#     numeroDiVeicolo=0
#     def __init__(self):
#         print("lancement....")
#         self.colore= "roso"
#         self.potenza=820
#         self.orine="Italia"
#         self.proprietaro= "Delmas"
#         veicolo.numeroDiVeicolo +=1
        
# print("costruzione in corso\n")
# v1=veicolo()
# print("v1 :colore ->{}, potenza->{} chevaux, origine ->{}".format (v1.colore, v1.potenza, v1.orine))
# print("il numeri de veicolo sonne:{}".format(veicolo.numeroDiVeicolo))
# v2=veicolo2() 
# print("v2 :colore ->{}, potenza->{} chevaux, origine ->{}, per ->> {}".format (v2.colore, v2.potenza, v2.orine, v2.proprietaro))
# #print("il numeri de veicolo sonne:{}".format(veicolo.numeroDiVeicolo))


# class studente:
  
#     def __init__(self, nome, taglia, tipo="F"):
#         pass
#         self.nome=nome
#         self.taglia=taglia
#         self.tipo=tipo
       
# print(" inizio....")  

# st1=studente("Fouegap", 1.74, "M")
# print("nome è -> {} , taglia -> {} m, tipo-> {}\n".format(st1.nome, st1.taglia,st1.tipo))










#          #les boucles





# studente = {
#     "delmas": 4,
#     "loic" : 0.25,
#     "claudia" : 20
# }

# for studente in studente.values():
#     print(studente)

# print(round (sum(studente.values()) / len(studente) )) 


# def somma(a,b):
#     return a+b


# import unittest
# from hello import somma
#  # Testing
# class TestSomma(unittest.TestCase):
#     def test_somma(self):
#         self.assertEqual(somma(1,1), 2)
#         self.assertEqual(somma(1.5,2.5), 4)

# m = TestSomma(unittest.somma )









#wock sur all(formazione python)
   #gezione dei eccezioni


# def demander_nome():
#     reponse_nome =""
#     while reponse_nome == "":
#         reponse_nome = input("qual è il tuo nome ? ")

#     return reponse_nome





# def demander_age():
#     age = input("qual è tuo eta ? ")

#     try:
#         age = int(age)
#     except: 
#         raise(print("deve inserire dei numeri interi solo ! ") )
   

#     return age





# nome = demander_nome()
# age  = demander_age()

# #else:    
    
# print("il tuo eta è : {} e il tuo nome è".format(nome), format(age)) 
# print("l'anno prossima avrai : {} anni".format(age+1))

# b = "cIAo ragazzi".title()
# print(b)

# a = "delmas".replace("d", "D")
# print(a)

# for i in range(100):
#     print (str(i).zfill(4))

# print("ciao".islower()) 





         #TRAVAIL SUR LES CLAS


# class chien:
#     def __init__(self, nome, età):
#        self.nome=nome
#        self.età=età
#     def aboie(self):
#         print("{} aboie !".format(self.nome))  

#    #esempio di erediterietà
# class chien_sauvage(chien):
#     def protege(self):
#         print("{} attque !".format(self.nome))



# mon_chien =chien("MAX", 3)
# mon_chien.aboie()  
# print("e toi")   
# chien_guardia = chien_sauvage("BETOVEN",4)
# chien_guardia.protege()




         #SERIE D EXERCICES 

# class vehicolo:
#     def __init__(self, marque, model, annee):
#         self.marque = marque
#         self.model = model
#         self.annee = annee
#     def description(self):
#       print("Marque: {}, Modele: {}, Anne: {}".format(self.marque, self.model, self.annee)) 

# machina = vehicolo("Mercedes","GLE 63 s", 2024)
# machina.description()

   #esercizio 2

# class rettangolo:
#    def __init__(self, lunghezza, larghezza):
#       self.lunghezza = lunghezza
#       self.larghezza = larghezza

#    def calculer_surface(self):
#       s = self.lunghezza * self.larghezza
#       print("l'area del rettangolo è: {}".format(s))

#    def calculer_perimetre(self):
#       r = 2 * (self.lunghezza + self.larghezza)
#       print("il perimetro è {}".format(r))

# mio_rettangolo = rettangolo(4,3)
# mio_rettangolo.calculer_perimetre()
# mio_rettangolo.calculer_surface()
      

      #esercizio 3


# class animal:
#     def __init__(self, nome):
#         self.nome = nome

#     def parler(self):
#         print("je fais un bruit ")

# class chien(animal):
#     def parler(self):
#         print("Woof")
    
        
# mio_carne = animal("Max")
# mio_carne.parler()


      #esercizio 4

# class CompteBancaire:
#     def __init__(self, titulaire, solde):
         
#         self.titulaire = titulaire
#         self._solde = solde

#     def deposer(self, montant):
#            if (montant > 0 ):
#                 self._solde += montant
#            else:
#                 print("la somma deva essere maggiore di 0!\n")
#     def retirer(self, montant):
#          if ( montant <= self._solde ):
#               print("Lei può rimuovere i soldi")
#               self._solde -= montant
#          else :
#               print("Soldo insufficente !")          

#     def afficher_solde(self):
#          print("il soldo è: {} $ ".format(self._solde))  


# mio_conto = CompteBancaire ("Delmas ", 2000 )
# mio_conto.deposer(400)
# mio_conto.retirer(100)
# mio_conto.afficher_solde()   
    


      #esercizio 5
# import math

# class Forme:
#     def __init__(self, ):
#         self
#     def aire(self):
#         print("calcul de l'aire")

# class cercle(Forme):
#     def __init__(self, rayon):    
#       self.rayon = rayon

#     def aire(self):
#         result = math.pi * (self.rayon**2)
#         print("{}".format(result))
        
    
# class carre(Forme):
#     def __init__(self, cote):
#         self.cote = cote

#     def aire(self):
#         solution = self.cote**2
#         print("{} ".format(solution))

# mon_cercle = cercle(2)
# mon_carre = carre(4)
# print("calcule de l aire du carre...")
# mon_carre.aire()
# print("calcul de l aire du cercle...")
# mon_cercle.aire()

      
         #esercizio 6

# class livre:
#     def __init__(self, titre, auteur, annee_publication = "2024"):
#         self.titre = titre
#         self.auteur = auteur
#         self.annee_publication = annee_publication
       
    

# mon_livre = livre("la chèvre de ma mère", "Tagne")

# print("Le titre est: {}, l'auteur est: {}, l'annee de publication est: {}\n".format(mon_livre.titre, mon_livre.auteur, mon_livre.annee_publication ))  
   



           ##SIMULAZIONE GENAO 2021
     ##Es.B3

# class Impiegato:
#     def __init__(self, id, nome):
#         self.id = id
#         self.nome = nome

#     def calcola_pagamento(self):
#        print("calcolo pagamento.... ")
#        raise NotImplementedError ("questa metodo deve essere implementato dalle sotto classe ")


# class Amministrativi(Impiegato):
#     def __init__(self, stipendio):
#         self.stipendio = stipendio

#     def calcola_pagamento(self):
#         return self.stipendio
   

# class ImpiegatiOre(Impiegato):
#     def __init__(self, tariffa, num_ore):
#         self.tariffa = tariffa
#         self.num_ore = num_ore

#     def calcola_pagamento(self):
#         return self.tariffa * self.num_ore
    
           

# class ImpiegatiCommissione(Impiegato):
#     def __init__(self, salario, com):
#         self.salario = salario
#         self.com = com

#     def calcola_pagamento(self):
#          return self.salario + self.com 




#     Delmas = Amministrativi(stipendio=15000 )
#     Audrey = ImpiegatiOre(tariffa=450, num_ore=10)
#     Sonkeng = ImpiegatiCommissione( salario=5000, com=1500)
    

#     print("stipendio :{} $".format(Delmas.calcola_pagamento()))
#     print("stipendio :{} $".format(Audrey.calcola_pagamento()))
#     print("stipendio :{} $".format(Sonkeng.calcola_pagamento()))


       


        #esercizio di main 1pdf caravag

# class mia_sucessione:
#     def __init__(self, x, z):
#         self.x=x
#         self.z=z
#         self.s=1
#     def __iter__(self):
#         return self
#     def __next__(self):
#         if (self.s < self.x or self.s > self.z):
#             raise StopIteration
#         current_vallue = self.s 
#         self.s = (3*self.s) / 2

#         return current_vallue
    
       
    
# x =0.5
# z= 140
# iteratore = mia_sucessione(x,z)
# for valore in iteratore :
#     print (valore)    





#          #esercizio B-3 di Appello.pdf


# class rettangolo:
#     def __init__(self, L, l):
#         self.L = L
#         self.l = l
#     def calcolo_area(self):
#         area = self.L * self.l
#         print("l'area_1 è: {}".format(area))
#     def calcolo_perimetro(self):
#         perimetro = (self.L + self.l) * 2 
#         print("il perimetro_1 è: {}".format(perimetro))

# class quadratto(rettangolo):
#     def __init__(self, L):
#         super().__init__(L, L)
#     def calcolo_area(self):
#         area = self.L * self.L
#         print("l'area_2 è: {}".format(area))

#     def calcolo_perimetro(self):
#         perimetro = self.L * 4
#         print("il perimetro_2 è: {}".format(perimetro)) 




# mio_rettangolo = rettangolo(4, 3) 
# mio_quadratto = quadratto(4)
# mio_rettangolo.calcolo_area()
# mio_rettangolo.calcolo_perimetro()
# mio_quadratto.calcolo_area()
# mio_quadratto.calcolo_perimetro()


        

#     #ESERCIZIO 6.pdf
# #3.3

# class c1:
#     def __init__(self,i):
#         self.i = i
#     def quadrato(self):
#         quadrato = self.i ** 2
#         print("il risultato è : {}".format(quadrato))


# class c2(c1):
#     def __init__(self, i):
#         super().__init__(i)

    
# x = c1(4)
# y = c2(3)
# x.quadrato()
# y.quadrato()


    


##
# ESERCIZI DI ALENEAMENTO

#1
# class my_iterator:
#     def __init__(self,inizio, fine ):
#         self.inizio = inizio
#         self.fine = fine

#     def __iter__(self):
#         return self

#     def __next__(self):
#         if (self.inizio > self.fine):
#             raise StopIteration
#         self.inizio +=1        
#         return self.inizio -1


# my_way = my_iterator(0,9)
# for i in my_way:
#     print(i)






#2

# lista=[4,5,2,3,7]
# my_iter = (iter(lista))
# print(next(my_iter))
# print(next(my_iter))
# print(next(my_iter))
# print(next(my_iter))
# print(next(my_iter))



#3

# class itaratore_pari:
#     def __init__(self, lista):
#         self.listaa = iter(lista)

#     def __iter__(self):
#         return self
    
#     def __next__(self):
#          for i in self.listaa:
#             if(i % 2 == 0):
#                 return i
#          raise StopIteration  


# mia_lista = [1,2,3,4,5,6,7,8,9]

# listaa = itaratore_pari(mia_lista)
# for element in listaa:
#     print(element)



#4

# class interiInfiniti:
#     def __init__(self, inizio):
#         self.inizio = inizio

#     def __iter__(self):
#         return self
    
#     def __next__(self):
#         self.inizio +=1
#         return self.inizio -1 


# my_test = interiInfiniti(1) 
# for i in range(20):
#     print(next(my_test))
        
        
#5


    
    
# class IterareDizionario:
#     def __init__(self, dizionario):
#         self.diz = dizionario
#         self.yo = iter(dizionario.items())
#     def __iter__(self):
#         return self

#     def __next__(self):
#         return next(self.yo)

# my_dic ={'loic':54, 5: ("pampampé")}
# # m = IterareDizionario(my_dic)
# # for i,j in m:
# #     print("{}, {}".format(i, j))
# #print(my_dic.items())


# dizionario = {'a': 1, 'b': 2, 'c': 3, 'd': 4}

# iteratore = iter(dizionario.items())
# print (next(iteratore))
# print (next(iteratore))
# print (next(iteratore))
# print (next(iteratore))



#6->non finito

# class IteratoreAppiattito:
#     def __init__(self, big_lista):
#         #self.big_lista = big_lista
#        # self.small_lista = iter(big_lista)
#         self.element_sl = iter(big_lista)

#     def __iter__(self):
#         return self
    
#     def __next__(self):
#         return next(iter(self.element_sl))
    
# mia_lista = [[1, 2], [3, 4], [5]]
# test = IteratoreAppiattito(mia_lista)
# for item in mia_lista:
#     print((item))




            ##LAVORO SUL FILES.CSV#

# mio_file = open("C:\Users\delma\Downloads\shampoo_sales.csv", "r")
# print(mio_file.read()[0:50])
# mio_file.close()



# file = open("my_doc.txt", "w+")
# file.write("delmas\n")
# file.write("audrey\n")
# file.write("miss\n")
# file.write("fsg\n")
# file.write("Fouegap\n")
# file.write("styll\n")
# file.close


        #lettura
#1
# my_file = open("C:/Users/delma/Downloads/shampoo_sales.csv", 'r')
# print(my_file.read()[0:-1])
# my_file.close

#2
# mio_file = open("C:/Users/delma/Downloads/shampoo_sales.csv", 'r')
# for i in mio_file:
#     print(i)
# mio_file.close()



#3 leggere il file in modo pytonico

#with open("C:/Users/delma/Downloads/shampoo_sales.csv", "r") as file:
    #for linea in file:
        #print(linea)
          

#---
#mia_stringa = "delmas styll gabana"
#pezzzi = mia_stringa.split(" ")
#print(pezzzi[2])



#--

# dati = []

# with open("C:/Users/delma/Downloads/shampoo_sales.csv", "r") as file:
#     next(file)
#     for linea in file:
#         elementi = linea.split(",")
#         if linea[0] != "Date":
#             data = linea[0]
#             vendita = float(linea[1])
#         dati.append([data, vendita])
#         print(linea)



#-----

# class vehicolo:
#     def __init__(self, nome, anno):
#         self.nome = nome
#         self.anno = anno
#     def controlla(self):
#         print("il nome è : {} e l'anno di fabricazione è : {}".format(self.nome, self.anno))     

# ma_voiture = vehicolo("AMG 63s", "2024")
# ma_voiture.controlla()

# #print(isinstance(ma_voiture, vehicolo))

# yo= "delmas"
# yoo = yo.capitalize()
# print(yoo)


# class motocycle(vehicolo):
#     def __init__(self, nome, anno):
#         super().__init__(nome, anno)
    

# mia_moto = motocycle("lexus", 2019)
# mia_moto.controlla()

# print(issubclass(motocycle, vehicolo))




##LA GESTIONE DEGLI ERRORI----

#1
# class Invalidparameter(Exception):
#       pass
# parametro = -5
# if parametro < 0:
#       raise Invalidparameter("non deve essere minore di 0 ! ")





#2-LEGGERE GLI ELEMENTI DI UN FILE GESTIENDO EVANTUELLI ERRORI

# def leggi_file(my_file):
#     try:
#          with open(my_file, "r") as file:
#             linea = file.readlines()
            
         
#          while True:
#             try:
#                   x = int (input("quanti numeri voresti leggere ? (Nota : x <={}) " .format(len(linea))))
#                   if x < 0:
#                         print("deve essere un numero positivo !\n")
#                   elif x > len (linea):
#                         print("x deve essere <= {}".format(len(linea)))

#                   else:
#                          break

#             except ValueError:
#                   print("Si prega di inserire un numero valido !\n")


#          for i in range(x+1):
#             print(linea[i])

#     except FileNotFoundError:
#          print("il file non è stata trovato !\n")
      
#     except Exception as e :
#          print("errore inaspettato : {}".format(e))

          

# leggi_file(r"C:\Users\delma\Downloads\shampoo_sales.csv")
                   
         
#----------



#------------
# ma_liste = [3, 1, 4, 1, 5, 9]
# ma_liste.sort(reverse=True)
# print(ma_liste)
       
# ma_liste = ['a', 'b', 'c', 'd']

# for dex, aleur in enumerate(ma_liste):
#     print(f"Inex: {dex}, Valeur: {aleur}")

 #-----------------------------       
# x = 10
# v = iter(range(x))  # Crée un itérateur à partir d'une plage
# print(list(v))
#-----------------------------
# y = 10
# u = 3
# # print (list(range(y-1,y-u-1,-1)))
# # print(list(range(y-1,u,-1)))
# lista = []
# for i in range(3):
#     lista.append(y-i-1)
# print (lista)


#--------------------------------------------------------------
##gerer des element concernaant les fichiers


# import os

# # Définition du chemin du fichier dans une variable
# delmas = r'C:\Users\delma\Downloads\shampoo_sales.csv'

# # Vérification si le fichier est lisible
# if os.access(delmas, os.R_OK):
#     print(f"Le fichier {delmas} est lisible.")
# else:
#     print(f"Le fichier {delmas} n'est pas lisible.")
#----------------------------------------------------------------

# x=6
# y=2
# tab=[]
# for i in range(x+1-y):
#       tab.append(x-i)

# print(tab)
#------------------------
# tab = ["maman","papa"]
# yes = "-".join(tab)
# print(yes)

# x = 4.3
# y =1
# r = (x-y)
# if not isinstance(x, int):
#     print ("no")
# else :
#      print("yess")
#--------------------------

# def ordina_verify (lista):
#     for i in range (len(lista) -1):
#         if lista[i] > lista[i+1]:
#             print("non è ordinato ")
#             return
#     print ("è ordinato ")

# listam = [1, 2, 5, 7, 8, -6]
# ordina_verify(listam)
#--------------------------------


# lista = [2,4,8,16,14,20,25,30]
# tab = []
# lungo = 3
# # for i in range(len(lista)-1):
# #     media = (lista[i] + lista[i+1])/2
# #     tab.append(media)
# # print(tab) 
# #--------------------------------------------
# def converti_numeri(lista_numeri):
#       lista_stringhe = []
#       dizionario_numeri_stringhe = { 0:"8", 1: "1", 2: "2", 3:"3", 4:"4",
#       5:"5", 6:"6", 7:"7", 8:"8", 9:"9"}
#       for numero in lista_numeri:
#             lista_stringhe.append(dizionario_numeri_stringhe[numero])
#       return lista_stringhe

# liste = [0,1,2,3,5,6,8,9]
# a=converti_numeri(liste)
# print(a)


# def solo_pari(lista):
#       pari = []
#       for n in range(10):
#             if n%2==0:
#              pari.append(n)
#       print(pari)

# liste = [0,1,2,3,5,6,8,9,40,80,52]
# v = solo_pari(liste)   
# print(v)

# def solo_pari(lista):     
#       pari2 = [n for n in range(11) if n%2==0]
#       print(pari2)

     
     
# b = solo_pari(liste)
# print(b)


 # Aproil file
#--------------------------------
# my_file= open(r'C:\Users\delma\Downloads\data (1).csv', 'r')
#  # Leggo il contenuto
# my_file_contents= my_file.read()
#  # Stampoa schermoiprimi 50 caratteri
# if len(my_file_contents) > 50:
#   print(my_file_contents[0:50] + '...')
# else:
#  print(my_file_contents)
#  # Chiudoil file
#  my_file.close()

#---------------------
# with open(r"C:\Users\delma\Downloads\data (1).csv", 'r') as file:
#       for line in file:
#             line = line.strip()
#             print(line )
#-------------------------

# import os
# yo = os.getcwd()
# print(yo)
# print("\n")
# yt = os.path.abspath("data(1).csv")
# print(yt)
# #----------------
# my_files = open(r"C:\Users\delma\Downloads\data (1).csv", "")
# my_files.write("delmas styll")
# my_files.close() 

# lista = ["a","n", "2", "po", "2", "a", "a", "a"]

# comp = {}
# for i in lista:
#       if i not in comp:
#             comp[i] = 1
#       else:
#             comp[i] += 1
# print(comp)

 #--------------------------------    
# dic = {}
# delmas= {"bonjour":["54","4525","20002"],  "tout":["25","2365","15482"], "le monde": ["non","pourquoi","12565"]}
# for i in delmas.keys():
#      valore = delmas[i]
#      piu_grande = max(valore, key=len)
#      dic[i] = piu_grande
# print(dic)
#----------------------

x = 2005
y = 2000
tab = []
for i in range(x - y+1):
    tab.append(i+y)
print(tab)



    