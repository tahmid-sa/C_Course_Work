#include <stdio.h>

#define PAYRATE 12.00
#define TAXRATE_300 0.15
#define TAXRATE_150 0.20
#define TAXRATE_REST 0.25
#define OVERTIME 40

int main() {
    //double payRate = 12.0;
    double hoursWorked;
    double grossPay, taxes, netPay;

    printf("Enter the hours worked: ");
    scanf("%lf", &hoursWorked);
    printf("%lf", hoursWorked);

    if (hoursWorked <= 40) {
        grossPay = PAYRATE * hoursWorked;
    }
    else if (hoursWorked > 40) {
        grossPay = (PAYRATE * hoursWorked) + ((hoursWorked - 40) * (1.5 * PAYRATE));
    }

    if (grossPay <= 300) {
        taxes = grossPay * 0.15;
    } else if (grossPay > 300 && grossPay <= 450) {
        taxes = 300 * 0.15;
        taxes += (grossPay - 300) * 0.2;
    } else if (grossPay > 450) {
        taxes = (300 * 0.15) + (150 * 0.2);
        taxes += (grossPay - 450) * 0.25;
    }
    
    netPay = grossPay - taxes;

    printf("Gross %f Taxes %f Net %f", grossPay, taxes, netPay);

    return 0;
}