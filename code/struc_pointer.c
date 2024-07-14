int main()
{
    struct adresse home = {8640,"teststr",42,"CH"};
    printf("%d %s %s",home.postleitzahl,home.strasse,home.land);//direkter zugriff
    //der "." Operator wird verwendet fuer Elementzugriff
    
    struct adresse* ptr = &home;
    printf("%d %s %s",(*ptr).postleitzahl,ptr->strasse,ptr->land);//pointer zugriff
    //der "->" operator ist zu bevorzugen
}