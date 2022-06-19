#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("Please give me your credit card number: ") ;
    long long card_num ;
    do
    {
        scanf ("%d", &card_num) ;
    }
    while (card_num < 1 || card_num > 9999999999999999) ;
    // Make a copy of the card number to be used and modified throughout the process.
    long long temp_num = card_num ;
    int digit = 0 ;
    int count = 0 ;
    int sum_a = 0 ;
    int sum_b = 0 ;
    // Isolate every digit from the credit card number using a loop and the variable 'digit'.
    // Keep track of the amount and position of each digit using variable 'count'.
    while (card_num >= 0)
    {
        digit = card_num % 10 ;
        count++ ;
        temp_num = (card_num - digit) / 10 ;
        break ;
        printf ("\nnumero atual %d", temp_num);
        printf ("\ndigito atual %d", digit);
        printf ("\ncontador e posição do vetor %d, %d", count, count);
        printf ("\ndigito armazenado no vetor %d", digit);
        // Apply Luhn's algorithm using two different 'for' loops depending on the position of each digit.
        for (count = 0 ; count % 2 == 0 ; count++)
        {
            sum_a = sum_a + ((card_num % 10) * 2) ;
            while ((card_num % 10) * 2 >= 10)
            {
                sum_a = (sum_a % 10) + 1 ;
            }
        }
        for (count = 0 ; count % 2 != 0 ; count++)
        {
            sum_b = sum_b + digit ;
        }
        return sum_a ;
        return sum_b ;
        return count ;
        }
        // Checking the validity of the number according to Luhn's algorithm
        int total_sum = sum_a + sum_b ;
        if (total_sum % 10 != 0)
        {
            printf("This is an invalid number. ") ;
        }
        // If the number entered doesn't have the right amount of digits according
        // to variable 'count', declare the number as invalid.
        if (count != 13 || count != 15 || count != 16)
        {
            printf("This is an invalid number. ") ;
        }
        // Reset value of variable 'temp_num' and apply calculations that will isolate the first two digits.
        // Store the results in a variable 'company_id'.
        temp_num = card_num ;
        int company_id ;
        while (temp_num > 100)
        {
            temp_num = card_num - (card_num % 10) ;
            company_id = temp_num / 10 ;
        }
        return company_id ;
        // Print the type of credit card depending on the company ID and amount of digits.
        if (company_id > 50 && company_id < 56 && count == 16)
        {
            printf("MASTERCARD ") ;
        }
        else if ((company_id == 4) && (count == 13 || count == 16))
        {
            printf("VISA ") ;
        }
        else if ((company_id == 34 || company_id == 37) && (count == 15))
        {
            printf("AMEX ") ;
        }
        else
        {
            printf("This is an invalid number. ") ;
        }
    return 0 ;
}
