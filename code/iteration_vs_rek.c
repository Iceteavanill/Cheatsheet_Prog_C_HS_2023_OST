#include <stdio.h>

unsigned int fibRek(unsigned int in);
unsigned int fibIt(unsigned int in);

int main()
{
    unsigned int input;
    int choose;

    scanf("%u",&input);
    printf("Iterativ oder rekursiv? (0 = rekursiv 1 = iterativ) \n ");
    scanf("%d",&choose);
    if(choose)
    {

        printf("Die %u te Fibonacci Zahl iterativ ist %u \n",input,fibIt(input));
        return 0;
    }
    printf("Die %u te Fibonacci  Zahl rekursiv ist %u  \n",input,fibRek(input));
    return 0;
}

unsigned int fibRek(unsigned int in)
{

    if(in == 2 || in == 1)
    {
        return 1;
    }
    return (fibRek(in-1) + fibRek(in-2));
}

unsigned int fibIt(unsigned int in)
{
    unsigned int out = 1;
    unsigned int outPrev = 0;

    for(int i = 1;i < in;i++)
    {
        out = out + outPrev;
        outPrev = out - outPrev;
    }

    return out;
}