# -*- coding: utf-8 -*-
#aufgabe 5

class Klasse(object):

    counter = 0
    
    def __init__(self, zahl1=None):
        self.zahl1 = zahl1
        Klasse.counter += 1

    @staticmethod
    def wieviel():
        return Klasse.counter

    def add(self, para1):
        return para1+self.zahl1 if self.zahl1 else para1*2



class Erbe(Klasse)

    def __init(self, zahl1=None, zahl2=None):
        Klasse.__init__(self, zahl1)
        self.zahl2 = zahl2

    def mul(self,para2):
        return para2 * self.zahl2 if self.zahl2 else 3 * para2

    def __mul__(self,para2):
        return self.mul(para2)

    __rmul__ = __mul__
