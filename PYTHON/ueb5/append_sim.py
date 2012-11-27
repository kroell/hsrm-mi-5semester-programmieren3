#################################
#   Uebungsblatt 5 - Aufgabe 2  #
#################################

#!/usr/bin/python
# -*-coding: utf-8 -*-

import sys

# Liste erstellen
lis = [1,2,3,4]
size_len = len(lis)


# Element einlesen
if (len(sys.argv) == 2):
    ele = sys.argv[1]
    print ele
else:
    print "Kein Element mitgegeben"

print "Liste zu Beginn: ",lis


# Problem neues Objekt wird mit + erzeugt bzw. neuer Speicherbereich wird allokiert
# lis2 = lis1 +lis2


# um Methode desktrutiv zu halten
lis[size_len:] = [int(ele)]

print "Liste am Ende: ", lis




