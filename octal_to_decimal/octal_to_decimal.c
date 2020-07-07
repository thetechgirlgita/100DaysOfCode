    #include <stdio.h>
    #include <math.h>

    int octal_to_decimal(int oct) {
        int dec = 0, i = 0;

        while(oct != 0) {
    dec += (oct % 10) * pow(8,i); 
    ++i;
    oct /= 10;  
    }

    i = 1;

    return dec;
    }

    int main() {
    int oct;

    printf("\n\tEnter an octal number: ");
    scanf("%d", &oct);

    printf("\n\tDecimal Equivalent : %d\n",octal_to_decimal(oct));

    return 0;
    }

