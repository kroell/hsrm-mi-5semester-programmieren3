#!/bin/bash
# (c) 2011 Alexander Baumgärtner

print_line(){

echo -e $2"\c"
sleep $1
echo -e $3"\c"
sleep $1
echo -e $4"\c"
sleep $1
echo -e $5"\c"
sleep $1
echo -e $6"\c"
sleep $1
echo -e $7"\c"
sleep $1
echo -e $8"\c"
sleep $1
echo -e $9"\c"
sleep $1
}


clear
echo ""
sleep 0.2
echo -e "             =\c"
print_line 0.01 = = = = = = = =
print_line 0.01 = = = = = = = =
print_line 0.01 = = = = = = = =
print_line 0.01 = = = = = = = =
print_line 0.01 = = = = = = = =
echo ""
sleep 0.075
echo -e "                  \c"
print_line 0.01 P r o g 3 "\x20" A b
print_line 0.01 g a b e "\x20" 8 "\x20" T
print_line 0.01 e s t - S k r i 
print_line 0.01 p t "\x20" "\x20" "\x20" "\x20" "\x20" "\x20"
echo ""
sleep 0.075
echo -e "             =\c"
print_line 0.01 = = = = = = = =
print_line 0.01 = = = = = = = =
print_line 0.01 = = = = = = = =
print_line 0.01 = = = = = = = =
print_line 0.01 = = = = = = = =
echo ""
echo -e "                  \c"
print_line 0.01 © "\x20" 2 0 1 1 "\x20" A 
print_line 0.01 l e x a n d e r
print_line 0.01 "\x20" B a u m g ä r 
print_line 0.01 t n e r "\x20" "\x20" "\x20"
echo ""
echo ""
sleep 0.25

echo "Das Programm wird gleich überprüft. Dazu muss die Datei ring.py im Ordner"
pwd
echo "vorhanden sein. Die Ergebnisse werden in die Datei result.txt geschrieben. Die Beispiellösung steht in der Datei BspLsg.txt."
echo "Zum Starten ENTER drücken."
read
rm ring.pyc -f
echo "Daten werden berechnet..."
python testRing.py | tee result.txt
echo ""

echo "Ergebnis wird mit Beispiellösung verglichen..."
python simpleFileCompare.py result.txt BspLsg.txt
echo ""
echo "Tests abgeschlossen. Diese Nachricht zerstört sich mit ENTER selbst."
read
clear
exit
