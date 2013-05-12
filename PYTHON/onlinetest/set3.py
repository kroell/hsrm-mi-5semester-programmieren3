import sys

class Set(object):

    def __init__(self,liste=[]):
        self.liste = liste

    def add(self,ele):
        if ele not in self.liste:
            self.liste.append(ele)
        self.liste = sorted(self.liste)

    def union_update(self,seq):
        self.liste.extend(seq)

    def union(self,seq):
        s = []
        for i in self.liste:
            s.append(i)
        for ele in seq:
            if ele not in s:
                s.append(ele)

        return Set(s)

    def remove(self,ele):
        if ele in self.liste:
            self.liste.remove(ele)

    def difference_update(self,seq):
        for i in seq:
            if i in self.liste:
                self.liste.remove(i)
        return self.liste   

    def difference(self,seq):
        s = []
        for i in self.liste:
           if i not in seq:
               s.append(i)
        return Set(s)

    def clear(self):
        self.liste = []

    def size(self):
        return len(self.liste)

    def __repr__(self):
        return 'Set(%s)' %(self.liste)

    def __add__(self,seq):
        return self.union(seq)

    __radd__ = __add__

    def __len__(self):
        return self.size()

    def __sub__(self,seq):
        return self.difference(seq)

    def __getitem__(self,index):
        return self.liste[index]

    def __iter__(self):
        for i in self.liste:
            yield i

    def __eq__(self,ele):
        if ele in self.liste:
            return True
        return False

    def __ne__(self,ele):
        if ele not in self.liste:
            return False
        return True

    def __contains__(self,item):
        return (item in self.liste)

    
