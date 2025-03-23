
class ExamException(Exception):
    pass


class CSVTimesSeriesFiles:
    def __init__(self, my_files_Series):
        self.name = my_files_Series
        try:
            file = open(self.name, "r")
            file.close()
        except:
            raise ExamException("ERRORE: il file {} non è apribile".format(self.name))

    def get_data(self):
        with open (self.name, "r") as files:
            my_lista = []
            for linea in files:
                linea = linea.strip().split(",")
                try:
                    linea[1] = int (linea[1])
                except:
                    continue 

                if not isinstance(linea[1], int):
                   raise ExamException ("Errore: c'è una valore che non è un itero") #non serve troppo perchè non funziona davvro
                
                if linea[0] != "date":
                    my_lista.append(linea)
            return my_lista

         #tratamenti per la LODE (del secondo punto-->verificare l'ordinamento  ) 

        for ordin in my_lista:
            ordinato = ordin[0].split("-")#***********
            

           



time_series_file = CSVTimesSeriesFiles(r"C:\Users\delma\Downloads\data (1).csv")
time_series = time_series_file.get_data()
print("\n")
print(time_series)


#ecco funzione compute varitatio

def compute_variations(my_times_seriesVaria, first_year, last_year):
    my_dict = {}
    for element_0 in my_times_seriesVaria:
        anno = element_0[0].split("-")
        valore = element_0[1]
        data = int(anno[0])
        if data not in my_dict.keys():
            my_dict[data] = [] 
        my_dict[data].append(valore) 

# a questo livello il "return my_dict" qui sotto ci permette di avere il dizionario per chiavi ogni anno et valore i numeri di passaggi               
    ##return my_dict

    my_dict_media = {}  # il calcolo della media per ogni anno 
    for item in my_dict.keys():
        media = sum(my_dict[item]) / len(my_dict[item])
        my_dict_media[item] = round(media,2)

#a questo livello il "return my_dict_media" ci permette di avere il dizionario per chiavi ogni anno e il valore della media annuale
    ##return my_dict_media
    
    table_intervalli = []

    #effettuamo il casting per trasformare gli estremi dell'intervallo in interi
    first_year = int(first_year)
    last_year = int (last_year)

    #verifichiamo se gli estremi appartengono ai datti
    if first_year not in  my_dict_media  or  last_year not in  my_dict_media:
        raise ExamException("ERRORE: gli estremi dell'intervallo non sono contenuti nei dati")
    
    for i in range(last_year +1 - first_year):
        table_intervalli.append(first_year + i)
    ##return table_intervalli
    my_dict_intervalli = {}
    for j in my_dict_media.keys():
        for k in table_intervalli:
            if j == k:
                my_dict_intervalli[k] = my_dict_media[j]
    ##return my_dict_intervalli 

    dictionary_fine_result = {}
    for my_way in my_dict_intervalli.keys():
        try:
            dif = my_dict_intervalli[my_way] - my_dict_media [my_way-1]
        except:
            dif = my_dict_intervalli[my_way]
        my_way_1 = str(my_way)
        my_way_2 = str(my_way - 1)
        my_way_tab = [my_way_2, my_way_1]
        
        if my_way-1 not in my_dict_intervalli:
            continue
        else:
            my_way_f = "-".join(my_way_tab)
           
        dictionary_fine_result[my_way_f] = round(dif,2)
    return dictionary_fine_result




result = compute_variations(time_series, "1949", "1953" )
print("\n")
print(result)