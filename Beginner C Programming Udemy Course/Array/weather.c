#include <stdio.h>

int main() {
    float rainfall[5][12] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}
    };

    float totalYearRainfall[5];
    float avgYearRainfall = 0.0f;
    float avgMonthRainfall = 0.0f;

    for (int year = 0; year < 5; year++) {

        for (int month = 0; month < 12; month++) {
            totalYearRainfall[year] += rainfall[year][month];
        }
        avgYearRainfall += totalYearRainfall[year];
    }

    avgYearRainfall /= 5;
    avgMonthRainfall = (totalYearRainfall[0] + totalYearRainfall[1] + totalYearRainfall[2] + totalYearRainfall[3] + totalYearRainfall[4]) / 72;

    printf("Total rainfall: %f %f %f %f %f\n", totalYearRainfall[0], totalYearRainfall[1], totalYearRainfall[2], totalYearRainfall[3], totalYearRainfall[4]);
    printf("Avg year rainfall: %f\n", avgYearRainfall);
    printf("Avg month rainfall: %f\n", avgMonthRainfall);

    return 0;
}