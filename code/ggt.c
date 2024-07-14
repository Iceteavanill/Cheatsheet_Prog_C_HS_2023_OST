unsigned int func(unsigned int m, unsigned int n)
{
    unsigned int r;
    unsigned int h;
    do
    {
        if (m < n)
        {
            h = m;
            m = n;
            n = h;
        }
        r = m % n;
        if (r != 0)
        {
            m = n;
            n = r;
        }
    } while (r!=0);
    return n;
}