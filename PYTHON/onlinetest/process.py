# -*- coding: utf-8 -*-
#Aufgabe 1

import sys
import string

def process (lines, split=":", key=0, del_key=False):
    '''
    lines = Liste von Strings, die alle an jedem Vorkommen von
    split zerlegt werden sollen
    Rueckgabe ist ein dict. Inhalt key´te Spalte = Schluessel
    Wert = Liste von Zeileninhalten nach dem split
    spalte, die als schluessel dient wird entfernt, wenn del_key True
    '''
    ret = {}
    for i in lines:
        line = i.split(split)
        tempKey = line[key]
        ret[tempKey] = line
        if del_key:
            line.remove(tempKey)

    return ret


if __name__ == '__main__':
    lines = ['Row:1:soeren', 'Zeile:2:syren']
    print process(lines)
