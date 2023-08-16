/*A positive integer is called an Armstrong number of order n if

abcd... = an + bn + cn + dn + ...

In case of an Armstrong number of 3 digits, the sum of cubes of each digits is equal to the number itself. For example:

153 = 1*1*1 + 5*5*5 + 3*3*3  // 153 is an Armstrong number.

Check Armstrong Number of three digits
*/

#include <stdio.h>
#include <math.h>
// to check if armstrong or not 
int isArmstrong(int num) {
    int ogNum = num;
    int sum = 0;

    while (num > 0) 
    {
        int d = num % 10;
        sum = sum +(d*d*d) ;
        num /= 10;
    }

    return (sum == ogNum);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num >= 100 && num <= 999) {
        if (isArmstrong(num)) {
            printf("%d is an Armstrong number of three digits.\n", num);
        } else {
            printf("%d is not an Armstrong number of three digits.\n", num);
        }
    } else {
        printf("Input must be a three-digit positive integer.\n");
    }

    return 0;
}
