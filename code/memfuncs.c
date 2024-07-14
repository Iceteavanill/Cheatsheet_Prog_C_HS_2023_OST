#include <string.h>
// Speicherbereich kopieren
void* memcpy(void* dest, const void* src, size_t n);
// Speicherbereich verschieben
void* memmove(void* dest, const void* src, size_t n);
// Speicherbereiche vergleichen
int memcmp(const void* s1, const void* s2, size_t n);
// Erstes Auftreten von Zeichen c in Speicherbereich s suchen
void* memchr(const void* s, int c, size_t n);
// Speicherbereich mit Wert belegen
void* memset(void* s, int c, size_t n);