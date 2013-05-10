#Ringklasse

class Ring(object):

    def __init__(self, seq=[]):
        "Konstruktor"
        self.__ring = seq
        self.__aktEle = 0

    def add(self,ele):
        '''
        Fuegt ein Element zu einem Ring vor der aktellen Stelle hinzu
        '''
        if self.__aktEle == 0:
            self.__ring.append(ele)
        else:
            self.__ring.insert(self.__aktEle,ele)
            self.__aktEle += 1
    
    def add_sequence(self,seq):
        '''
        Fuegt ein Element einer Sequenz hintereinander in der Reihenfolge
        der Sequenz dem Ring hinzu
        '''
        for i in seq:
            self.__ring.append(i)
        # oder
        # self.__ring.extend(seq)

    def get_current(self):
        '''
        Gibt das aktuelle Element zurueck
        '''
        return self.__ring[self.__aktEle]

    def get_elements(self):
        '''
        Gibt die endlichen vielen Elemente eines Rings als Liste ab der aktuellen Stell zurueck
        '''
        return self.__ring[self.__aktEle:]

    def remove_current(self):
        '''
        Entfernt das aktuelle Element
        '''
        akt = self.get_current()
        self.__ring.remove(akt)
        # wenn das letzte Ele entfernt wurde
        if self.__aktEle == len(self):
            self.__aktEle = 0
        return akt
        # oder
        # del self.__ring[self.__aktEle]

    def next(self):
        '''
        Gibt das aktuelle Element zurueck und rueckt eins weiter
        '''
        ele = self.__ring[self.__aktEle]
        self.__aktEle = (self.__aktEle + 1) % len(self)
        return ele

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
        return {'a':a, 'b':b}

    # Magic Methods ueberschreiben
    def __repr__(self):
        splitted_ring = self.split_ring(self.__aktEle)
        out = ', '.join(map(str, splitted_ring['a'])) + '; '+ ', '.join(map(str, splitted_ring['b']))
        return "r" + '[' + out + ']'
    
    def __str__(self):
        return self.__repr__()

    def __len__(self):
        return len(self.__ring)

    def __contains__(self,item):
        return (item in self.__ring)

    def __getitem__(self,key):
        return self.__ring[(self.__aktEle + key) % len(self)]

    def __iter__(self):
        class RingIter(object):
            def __init__(self,l,index):
                self.l = l[:]
                self.aktEle = index
            def next(self):
                akt = self.aktEle
                self.aktEle = (self.aktEle + 1) % (len(self.l))
                return self.l[akt]
        return RingIter(self.__ring, self.__aktEle)

    
