static int trailing_Zeroes(int n)
{
    int number = 0;
    while (n > 0) {
        number += n / 5;
         n /= 5;
    }
     return number;
}
int main(void)
{
    int n = 4;
    printf("\nNumber of trailing zeroes of factorial %d is %d ", n, trailing_Zeroes(n));
    n = 5;
    printf("\nNumber of trailing zeroes of factorial %d is %d ", n, trailing_Zeroes(n));
    return 0;
}