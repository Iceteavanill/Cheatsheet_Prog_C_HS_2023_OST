int* aPointer;//deklaration eines Pointers mit typ int
int* ptr = NULL;//NULL initialisierter Pointer
void* ptrb;//Deklaration eines Voidpointer
aPointer = &myInt;//aPointer zeigt nun auf die adresse von myInt
otherInt = *aPointer;//other uebernimmt den Wert von myInt
ptr = apointer;//Einem Voidpointer wird ein Pointer des Typs int* zugewisen