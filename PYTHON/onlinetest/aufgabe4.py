#Aufgabe 4
import sys

class SortedDict(object):

    def __init__(self,dic={}):
        self.dic = dic

    def values(self):
        return self.dic.values()

    def keys(self):
        return self.dic.keys()

    def items(self):
        return self.dic.items()

    def __repr__(self):
        return str(self.dic)

    def __contains__(self,item):
        return (item in self.dic)

    def __getitem__(self,index):
        return self.dic[index]

    def __iter__(self):
        for i in sorted(self.dic):
            yield i

    
