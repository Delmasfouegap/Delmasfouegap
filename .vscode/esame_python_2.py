#1: LETTURA DEI DATI


import os  # il modulo os per verificare se il file sia leggibile

class ExamException(Exception):
    pass

class CSVTimeSeriesFile: # ecco la class CSVTimeSeriesFile
    def __init__(self, my_serieFiles):
        self.name = my_serieFiles

        try:        #verificare che il file esiste
            files = open(my_serieFiles, "r")
            files.close()
        except:
            raise ExamException("ERRORE: il file non esite! ")
        
        try:        #verificare che il file è leggibile          
            os.access(my_serieFiles, os.R_OK)
        except:
            raise ExamException("ERRORE: questo file non è legggibile !")

    def get_data(self, country):
        
        my_lista = []
        with open(self.name, "r") as files :
            for linea in files:
                linea = linea.strip().split(",")
               
                try:
                    if linea[2] == country:
                        del (linea[2])
                        linea[1] = float(linea[1])
                        my_lista.append(linea)
                except:
                    continue
           
            for element in my_lista:
                data = element[0].strip().split("-")
                anno = data [0]     
                element[0] = anno
                
               
            return my_lista

    
time_series_file = CSVTimeSeriesFile(r"C:\Users\delma\Downloads\GlobalLandTemperaturesByCountry.csv")
time_series_italy = time_series_file.get_data("Cameroon")

#print(time_series_italy)
 


#2) IL CALCOLO DELLE VARIAZIONI TRA DUE SERIE TEMPORALI

def compute_variation(time_series_1, time_series_2, first_year, last_year ):
    diczionario = {}

    if not isinstance(first_year, int):     #verificare se gli estremi dell'intervallo iano del tipo int
        raise ExamException ("ERRORE: i valori estremi dell'intervallo devono essere del tipo int ma non {}".format(type(first_year)))
    if not isinstance(first_year, int):     #verificare se gli estremi dell'intervallo iano del tipo int   
        raise ExamException ("ERRORE: i valori estremi dell'intervallo devono essere del tipo int ma non {}".format(type(last_year)))
    
    for element in time_series_1:
        data = int(element[0])
        valore = element[1]
        if data not in diczionario.keys():
            diczionario[data] = []
        diczionario[data].append(valore)
    #return diczionario
    dict_Media = {}
    for date in diczionario.keys():
        date = int(date)
        media = sum(diczionario[date]) / len(diczionario[date])
        dict_Media[date] = round(media, 3) 
    #return dict_Media
    dict_Intervalli = {}
    table = []

    if first_year not in dict_Media.keys() and last_year not in dict_Media.keys():  #verificare che almeno une tra gli estremi sia valide
        raise ExamException ("Errore: l'intervallo selezionato non contiene valori validi")
    
    for i in range(last_year - first_year +1):
        table.append(i + first_year)
    #return table
    for item in dict_Media.keys():
        for itam in table:
            if item == itam:
                dict_Intervalli[item] = dict_Media[item]

    #return dict_Intervalli           #---------> dizionario per la prima time_series

##ecco per la seconda time_series-------------

    diczionario_2 = {}
    for element_2 in time_series_2:
        data_2 = int(element_2[0])
        valore_2 = element_2[1]
        if data_2 not in diczionario_2.keys():
            diczionario_2[data_2] = []
        diczionario_2[data_2].append(valore_2)
    #return diczionario_2
    dict_Media_2 = {}
    for date_2 in diczionario_2.keys():
        date_2 = int(date_2)
        media_2 = sum(diczionario[date]) / len(diczionario[date])
        dict_Media_2[date_2] = round(media_2, 3) 
    #return dict_Media_2
    dict_Intervalli_2 = {}
    table_2 = []
    
    if first_year not in dict_Media.keys() and last_year not in dict_Media.keys(): #verificare che almeno une tra gli estremi sia valide
        raise ExamException ("Errore: l'intervallo selezionato non contiene valori validi")
    
    for j in range(last_year -first_year +1):
        table_2.append(j + first_year)
    #return table_2
    for item_2 in dict_Media_2.keys():
        for itam_2 in table_2:
            if item_2 == itam_2:
                dict_Intervalli_2[item_2] = dict_Media_2[item_2]

    #return dict_Intervalli_2       #---------> dizionario per la seconda time_series

    dictionary_finanaly = {}
    for result in dict_Intervalli_2.keys():
        dictionary_finanaly[str(result)] = round((dict_Intervalli_2[result] - dict_Intervalli[result]), 3)
    return dictionary_finanaly









time_series_file = CSVTimeSeriesFile(r"C:\Users\delma\Downloads\GlobalLandTemperaturesByCountry.csv")
time_series_1 = time_series_file.get_data("Cameroon")

time_series_file = CSVTimeSeriesFile(r"C:\Users\delma\Downloads\GlobalLandTemperaturesByCountry.csv")
time_series_2 = time_series_file.get_data("Italy")

result = compute_variation(time_series_2, time_series_1, 2002, 2011)
print("\n")
print(result)


#************FINITO

#PARTE PER LA LODE------------------------------------------------------------------->

