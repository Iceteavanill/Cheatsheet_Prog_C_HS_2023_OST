#include <stdio.h>

int func()
{
    printf("Do func Stuff\n");
inFunc: //Marke : hindert den normalen Programmablauf nicht
    return 0;
}

int main()
{
    printf("Anfang von main\n");
    func();
    goto hell;//Sprung zur Marke hell
    printf("Sollte nie ausgegeben werden\n");
hell: //Marken sind so indentiert
    printf("spring hierher\n");

    goto inFunc;//Funktioniert nicht! da out of scope
    
    return 0;
}