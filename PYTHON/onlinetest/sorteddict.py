import sys

class SortedDict(object):

    def __init__(self, dic=None):
        if dic == None:
            self.dic = {}
        else:
            self.dic = dic

    def values(self):
        return self.dic.values()

    def keys(self):
        return self.dic.keys()

    def items(self):
        return self.dic.items()

    def __repr__(self):
        return str(self.dic)

    def __compare__(self,item):
        return (item in self.dic)

    def __iter__(self):
        for i in sorted(self.dic):
            yield i

    def __getitem__(self,index):
        return self.dic[index]
    
