#################################
#   Uebungsblatt 6 - Aufgabe 4  #
#                               #
# Fortune gibt ein zufaelliges  #
# Zitat aus, dies soll nachge-  #
# schrieben werden.             #
#################################

#!/usr/bin/python
# -*-coding: utf-8 -*-

import sys
import os
import random
import string


# ohne Kommandozeilen-Parameter
def noParameter(lines):
    "Gibt ein beliebiges Zitat zurueck, wenn kein Parameter mitgegeben wurde"
    return random.choice(lines)

# mit Kommandozeilen-Parameter
def withParameter(lines,pat):
    lis = []
    for i in lines:
        if pat in i:
            lis.append(i)
    return random.choice(lis)



def main():
    path = os.chdir("/usr/share/games/fortunes/")
    f = file("startrek","r")

    inhalt = f.read()
    lines = inhalt.split("\n%\n")
    
    if (len(sys.argv) == 2):
        pat = sys.argv[1]
        print withParameter(lines,pat)
        
    else:
        print "\n"
        print noParameter(lines)
        print "\n"

if __name__ == "__main__":
    main()


### Datei muss noch alle eingelesen werden
