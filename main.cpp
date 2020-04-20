void intParse(char str[], int n)
{
    //int n = 12345679;
    n *= 10;
    int inc = 10;
    int size = 0;

    while (n / inc != 0)
    {
        inc *= 10;
        size++;
    }
    inc = 10;
    for (int i = size - 1; i >= 0; i--)
    {
        str[i] = n / inc % 10 + 48;
        inc *= 10;
    }
    str[size] = '\0';
}