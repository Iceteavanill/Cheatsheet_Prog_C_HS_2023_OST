int* iptr;
int iarr[4] = {1,8,4,8};
iptr = iarr;// ein Array wird implizit zu einem Pointer des Basis-Typs gewandelt
iptr = &iarr[0];//macht dasselbe
iptr = &iarr;// Achtung: macht nicht dasselbe! Fuehrt zu einem Compiler-Fehler!

iarr[3] = 12;
iptr[3] = 12;
*(iptr+3) = 12;//macht 3-mal dasselbe