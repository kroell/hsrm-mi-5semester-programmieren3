#################################
#   Uebungsblatt 5 - Aufgabe 7  #
#################################

#!/usr/bin/python
# -*-coding: utf-8 -*-

import sys

de2en = {"eins":"one","zwei":"two","drei":"three",1:"one",2:"two",3:"three"}

print de2en["eins"]
print de2en[3]



#wichtige Methoden

#kopieren
de2en.copy()

#loeschen
de2en.clear()

#update zum ersetzen
w={"house":"Haus","cat":"Katze","red":"rot"}
w1 = {"red":"rouge","blau":"bleu"}
w.update(w1)
print w
#{'house': 'Haus', 'blau': 'bleu', 'red': 'rouge', 'cat': 'Katze'}

#Iteration
for key in de2en:
    print key
