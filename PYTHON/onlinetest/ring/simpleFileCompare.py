# -*- coding: utf-8 -*-
# © 2011 Alexander Baumgärtner

import sys

def fileCmp(filename1, file2name):
    file1=file(filename1)
    file2=file(filename2)
    return file1.read()==file2.read()


if __name__ == '__main__':
    if len(sys.argv)==3:
        filename1=sys.argv[1]
        filename2=sys.argv[2]
        if fileCmp(filename1, filename2):
            print "Die Berechnungen der Python-Datei stimmen mit der Beispiellösung überein. :)"
        else:
            print "Fehler: Die Berechnungen der Python-Datei stimmen nicht mit der Beispiellösung überein. Bitte Ergebnis "+str(sys.argv[1])+" mit der Beispiellösung "+str(sys.argv[2])+" vergleichen."
