#include <stdio.h>//inkludiert stdio.h(brauchts hier nicht)
int main() //Programmaufruf
{
    if(<Bedingung>)
    {
        ;//Anweisung wenn wahr
    }
    else
    {
        ; //Anweisung wenn Falsch
    }

    while(<Bedingung>)//wenn Anweisung nicht wahr zu beginn wird Schleife nicht betreten
    {
        ;//mache so lange bis Bedingung falsch
        continue;//springe in den naechsten Schleifendurchlauf
    }

    do//mindestens 1 Durchlauf gibt es
    {
        ;//mache so lange bis Bedingung falsch
    } while(<Bedingung>);

    for(int i = 0;<Bedingung>;i++)// int I wird nur einmal initialisiert und i wird immer nach dem schleifendurchgang initialisiert
    {
        ;//mache so lange bis Bedingung falsch
    }

    switch(<variable>)//springe basierend auf der Variable
    {
        case 0://springt hier wen var = 0
            break;//ohne break wuerde switch hier weiterlaufen
        case 1 ... 4 : //range von 1-4
            break;
        default://sonst trifft nichts zu
            break;
    }

    return <wert>;//Return einer Funktion
    return 0;//Programm korrent durchlaufen
    return 1;//programm nicht korrekt durchlaufen Fehlercode 1    
}