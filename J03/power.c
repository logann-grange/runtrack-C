
int power(int n, int power)
{
    int result = n;
    for(int i=2;i<=power;i++) {
        result *= n;
    }

    return result;
}