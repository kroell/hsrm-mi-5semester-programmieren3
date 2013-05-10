import sys

class Set(object):

    def __init__(self,liste=None):
        self.liste = liste

    def add(self,ele):
        if ele not in self.liste:
            self.liste.append(ele)
        self.liste = sorted(self.liste)
        
    def union_update(self, seq):
        self.liste.extend(seq)

    def union(self,seq):
        l = []
        for i in self.liste:
            l.append(i)
        for ele in seq:
            if ele not in l:
                l.append(ele)
        return Set(l)

    def remove(self, ele):
        if ele in self.liste:
            self.liste.remove(ele)

    def difference_update(self,seq):
        l = []
        for i in seq:
            if i in self.liste:
                l.append(i)
        return i
    
    def difference(self,seq):
        l = []
        for i in self.liste:
            l.append(i)
        for ele in seq:
            if ele in l:
                l.remove(ele)
        

        return Set(l)

    def clear(self):
        self.liste = []

    def size(self):
        return len(self.liste)

    def __len__(self):
        return self.size()

    def __compare__(self,item):
        return (item in self.liste)

    def __getitem__(self,index):
        return self.liste[index]

    def __add__(self,seq):
        return self.union(seq)

    __radd__ = __add__

    def __iter__(self):
        for i in self.liste:
            yield i

    def __repr__(self):
        return 'Set (%s)' % (self.liste)

    __str__ = __repr__

    def __eq__(self,s):
        if s in self.liste:
            return True
        return False

    def __ne__(self,s):
        if s not in self.liste:
            return True
        return False
    
