int compare (int a, int b) { ... }
int main() 
{
    int (*ptr)(int, int);//pointer definieren
    ptr = &compare; // Zuweisen der Funktionsadresse
    ptr = compare; // tut dasselbe, d.h. man darf das & bei Funktionen auch weglassen
    printf("Vergleich liefert: ", (*ptr)(37, 12)); // Funktionspointer wird dereferenziert
}