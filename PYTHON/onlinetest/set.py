class Set(object):

    def __init__(self, liste=None):
        self.liste = liste

    def add(self,ele):
        self.liste.append(ele)
        return ele, " wurde hinzugefuegt"

    def union_update(self,seq):
        pass

    def union(self, seq):
        pass

    def remove(self, ele):
        pass

    def difference_update(self,seq):
        pass

    def difference(self,seq):
        pass
    
    def clear(self):
        pass

    def size(self):
        pass
