int speicher[3][4] = {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9, 10, 11}};//Array definition mit initialisierung
for(int i = 0;i < 3,i++)
{
    for(int j = 0; j < 4; j++)
    {
        speicher[i][j] = (i*4) + j;//Das Array von 0 bis 11 der reihe nach gefuellt.  
    }
}//Nach diesen for loops ist das Array gleich gebliben.