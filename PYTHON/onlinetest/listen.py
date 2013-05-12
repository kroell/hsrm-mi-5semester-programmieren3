#Aufgabe 1a und 1b
import sys

def eins_a(lis):
    '''
    Gegeben ist eine Liste in der alle Elemente, die weiter hinten nochmal
    auftauchen geloescht werden
    '''
    temp = []
    liste = reversed(lis)
    for i in liste:
        if i not in temp:
            temp.append(i)
            
    temp.reverse()
    return temp


def eins_b(lis1,lis2):
    '''
    Element die in Liste 2 sind, sollen in die 1. Liste eingefuegt werden, wenn
    sie dort noch nicht vorhanden sind.
    '''
    for i in lis2:
        if i not in lis1:
            lis1.append(i)
    return lis1


if __name__ == '__main__':
    lis = [1,2,3,3,2]
    lis1 = [1,2,3,4,5]
    lis2 = [4,3,6]
    print eins_a(lis)
    print eins_b(lis1,lis2)
