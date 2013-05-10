#Ringklasse

class Ring(object):

    def __init__(self, seq=[]):
        "Konstruktor"
        self.__ring = seq
        self.__aktEle = 0

    def add(self,ele):
        '''
        Fuegt ein Element zu einem Ring vor der aktuellen Stelle hinzu
        '''
        if self.__aktEle == 0:
            self.__ring.append(ele)
        else:
            self.__ring.insert(self.__aktEle, ele)
            self.__aktEle += 1
    
    def add_sequence(self,seq):
        '''
        Fuegt ein Element einer Sequenz hintereinander in der Reihenfolge
        der Sequenz dem Ring hinzu
        '''
        self.__ring.extend(seq)

    def get_current(self):
        '''
        Gibt das aktuelle Element zurueck
        '''
        return self.__ring[self.__aktEle]

    def get_elements(self):
        '''
        Gibt die endlichen vielen Elemente eines Rings als Liste ab der aktuellen Stelle zurueck
        '''
        return self.__ring[self.__aktEle:]

    def remove_current(self):
        '''
        Entfernt das aktuelle Element
        '''
        del self.__ring[self.__aktEle]

    def next(self):
        '''
        Gibt das aktuelle Element zurueck und rueckt eins weiter
        '''
        aktEle = self.__ring[self.__aktEle]
        self.__aktEle = (self.__aktEle + 1) % len(self.__ring)
        return aktEle

    def is_empty(self):
        '''
        Prueft ob der Ring leer ist
        '''
        if not self.__ring:
            return True
        return False

    def clear(self):
        '''
        Leert den Ring
        '''
        self.__ring = []
        self.__aktEle = 0
        
    def split_ring(self, pos=None):
        a = self.__ring[:pos]
        b = self.__ring[pos:]
        return {0 : a, 1 : b}

    # Magic Methods ueberschreiben
    def __repr__(self):
        splitted_ring = self.split_ring(self.__aktEle)
        out = ', '.join(map(str, splitted_ring[0])) + '; '+ ', '.join(map(str, splitted_ring[1]))
        return "r" + '[' + out + ']'
    
    def __str__(self):
        return self.__repr__()

    def __len__(self):
        return len(self.__ring)

    def __contains__(self,item):
        return (item in self.__ring)

    def __getitem__(self,key):
        return self.__ring[key]

    def __iter__(self):
        class RingIter(object):
            def __init__(self,l,index):
                self.l = l[:]
                self.index = index
            def next(self):
                akt = self.index
                self.index = (self.index +1 ) % (len(self.l))
                return self.l[index]
        return RingIter(self.__ring, self.__aktEle)
    
