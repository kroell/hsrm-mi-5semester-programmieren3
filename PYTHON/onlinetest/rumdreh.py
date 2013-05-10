# -*- coding: utf-8 -*-
#Aufgabe 2

import sys
import string

def rumdreh(string):
    'Gibt string umgedreht zurueck'
    return string[::-1]

def vokale(string):
    '''
    Gibt ein Tupel aus 2 Strings zurueck. Der erste beinhaltet nur die Vokale,
    der Zweite den restlichen Inhalt von string
    '''
    vokale = ""
    rest = ""
    for i in string:
        if i == 'a' or i == 'e' or i == 'o' or i == 'u' or i == 'i':
            vokale += i
        else:
            rest += i

    return (vokale,rest)

def ersetze(s, dic):
    for key,value in dic.items():
        s = s.replace('{'+key+'}',value)
    return s


if __name__ == '__main__':
    string = "Hallo Welt"
    print rumdreh(string)
    print vokale(string)
    s2 = 'hallo {tolle} welt {tolle} Mann {frank}'
    dic = {'tolle':'super','frank':'horst'}
    print ersetze(s2,dic)
