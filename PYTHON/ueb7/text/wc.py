#!/usr/bin/python
# -*-coding: utf-8 -*-

import sys

de = "de"
en = "en"
_lang = de

def set_lang(lang):
    global _lang
    _lang = lang

def chars(fname):
    "Gibt die Anzahl der Buchstaben zurück"
    return len(file(fname).read())              

def words(fname):
    "Gibt die Anzahl der Woerter zurück"
    return len(file(fname).read().split())

def lines(fname):
    "Gibt die Anzahl der Zeilen zurück"
    return len(file(fname).readlines())

def wc_show(fname):
    if _lang == de:
        print "Die Datei" + fname + " hat"
        print lines(fname), " Zeilen"
        print words(fname), " Wörter"
        print chars(fname), " Buchstaben"

    if _lang == en:
        print "The file" + fname + " has"
        print lines(fname), " Lines"
        print words(fname), " Words"
        print chars(fname), " Chars"
    
               
def wc(fname):
    "Gibt Anzahl Zeilen, Woerter, Buchstaben zurück"
    return lines(fname), words(fname), chars(fname)


if __name__ == '__main__':
    fname = "/usr/share/dict/words"
    if len(sys.argv) > 1 and len(sys.argv) < 3:
        fname = sys.argv[1]
        wc_show(fname)
    if len(sys.argv) > 2:
        if sys.argv[2] == de or sys.argv[2] == en:
            set_lang(sys.argv[2])
            wc_show(fname)
        else:
            print "Als Sprache nur 'de' oder 'en' erlaubt!"
     
