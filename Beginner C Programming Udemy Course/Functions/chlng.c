#include <stdio.h>

int gcd(int a, int b);
float absolute(float val);
int Sqroot(int val);
float sqrt2(float x);

int gcd(int a, int b) {
    int lowest = a < b ? a : b, greatestCD;

    for (int factor = 1; factor <= lowest; factor++) {
        if (a % factor == 0 && b % factor == 0) {
            greatestCD = factor;
        }
    }

    return greatestCD;
}

float absolute(float val) {
    return val < 0 ? -val : val;
}

int Sqroot(int val) {
    if (val < 0) {
        val = absolute(val);
        printf("%f", -1.0);
    }

    for (int root = 0; root < val; root++) {
        if (root * root == val) {
            return root;
        }
    }
}

float sqrt2(float x) {
    const float epsilon = 0.00001;
    float guess = 1.0;

    if (x < 0) {
        x = absolute(x);
        //printf("%f", -1.0);
    }

    while (absolute(guess * guess - x) >= epsilon) {
        guess = (x / guess + guess) / 2.0;
    }

    return guess;
}

int main() {
    int a = 1026, b = 405;
    float val = -2543.43;

    printf("%d\n", gcd(a, b));
    printf("%f\n", absolute(val));
    printf("%d\n", Sqroot(25));

    printf("%f", sqrt2(val));

    return 0;
}