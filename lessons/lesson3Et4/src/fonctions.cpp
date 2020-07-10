unsigned factoriel(unsigned n)
{
    unsigned fact = 1;
    for (int i{1}; i <= n; i++)
        fact *= i;

    return fact;
}