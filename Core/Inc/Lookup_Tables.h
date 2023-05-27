/*
 * Lookup_Tables.h
 *
 *  Created on: May 25, 2023
 *      Author: hp
 */

#ifndef INC_LOOKUP_TABLES_H_
#define INC_LOOKUP_TABLES_H_

#define N 12
float MAP[12] = {25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80};                        // MAP sensor value in KPa
float TBP[12] = {20, 25, 30, 40, 45, 50, 56, 92, 128, 164, 180, 200};                    // Throttle Body Position In %. 20 is the first element
float RPM[12] = {300, 1200, 1500, 2000, 2500, 3000, 3500, 4000, 5000, 6000, 6500, 7000}; // RPM

/*Ignition timing MAP in milliseconds. The table has been reversed to conform to the norm*/
// f(MAP,RPM)
float Ignition_Timing[12][12] = {
    {16.3, 17.1, 24.1, 30.1, 34.0, 37.2, 37.2, 37.2, 37.2, 37.2, 37.2, 37.2},
    {16.7, 17.1, 24.1, 29.1, 32.9, 36.9, 36.1, 36.1, 36.1, 36.1, 36.1, 36.1},
    {18.3, 18.2, 24.1, 28.0, 32.9, 35.1, 35.1, 35.1, 35.1, 35.1, 35.1, 35.1},
    {17.9, 19.9, 24.9, 28.0, 31.1, 31.8, 33.9, 33.9, 33.9, 33.9, 33.9, 33.9},
    {17.9, 19.9, 25.9, 28.0, 31.0, 32.1, 33.1, 32.1, 32.1, 32.1, 33.1, 33.1},
    {17.9, 21.0, 25.9, 28.0, 31.0, 31.0, 32.1, 32.1, 32.1, 32.1, 32.1, 32.1},
    {17.2, 20.0, 24.9, 26.9, 30.0, 30.0, 30.0, 31.0, 30.0, 31.0, 31.0, 31.0},
    {13.9, 13.9, 16.1, 18.2, 18.2, 18.2, 18.2, 18.2, 18.9, 18.9, 18.9, 18.9},
    {11.1, 11.1, 12.9, 15.0, 15.0, 15.0, 15.0, 15.0, 16.1, 16.1, 16.1, 16.1},
    {11.1, 11.1, 10.1, 11.8, 11.8, 11.8, 11.8, 11.8, 12.9, 12.9, 12.9, 12.9},
    {11.1, 11.1, 06.9, 09.0, 09.0, 09.0, 09.0, 10.1, 10.1, 10.1, 10.1, 10.1},
    {11.1, 11.1, 05.1, 08.0, 08.0, 08.0, 08.0, 08.0, 09.0, 09.0, 09.0, 09.0}};
// f(MAP,RPM)
float Injection_Timing[12][12] = {
    {3.73, 3.78, 3.78, 3.88, 3.88, 3.93, 3.93, 3.98, 4.08, 4.08, 4.08, 4.08},
    {3.775, 3.825, 3.825, 3.88, 3.88, 3.93, 3.93, 3.98, 4.08, 4.08, 4.08, 4.08},
    {3.8, 3.85, 3.85, 3.85, 3.88, 3.93, 3.93, 3.98, 4.08, 4.08, 4.08, 4.08},
    {3.8, 3.85, 3.85, 3.85, 3.88, 3.93, 3.93, 3.98, 4.08, 4.08, 4.08, 4.08},
    {3.8, 3.85, 3.85, 3.85, 3.88, 3.93, 3.93, 3.98, 4.08, 4.08, 4.08, 4.08},
    {3.8, 3.85, 3.85, 3.85, 3.88, 3.93, 3.93, 3.98, 4.08, 4.08, 4.08, 4.08},
    {3.8, 3.85, 3.85, 3.98, 3.98, 4.03, 4.03, 4.08, 4.18, 4.18, 4.18, 4.18},
    {3.8, 3.85, 3.85, 3.98, 3.98, 4.03, 4.03, 4.08, 4.18, 4.18, 4.18, 4.18},
    {3.85, 3.9, 3.9, 4.03, 4.03, 4.08, 4.08, 4.13, 4.23, 4.23, 4.23, 4.23},
    {3.93, 3.98, 3.98, 4.08, 4.08, 4.13, 4.13, 4.18, 4.28, 4.28, 4.28, 4.28},
    {3.98, 4.03, 4.03, 4.13, 4.13, 4.18, 4.18, 4.23, 4.33, 4.33, 4.33, 4.33},
    {4.03, 4.08, 4.08, 4.18, 4.18, 4.23, 4.23, 4.28, 4.38, 4.38, 4.38, 4.38}
};
// fuel load % and RPM
float VE_Table[12][12] = {
    {10, 12, 11, 11, 16, 17, 21, 24, 25, 25, 25, 28},
    {11, 13, 16, 16, 16, 17, 19, 24, 26, 32, 37, 33},
    {15, 20, 22, 24, 27, 31, 34, 40, 45, 39, 40, 38},
    {19, 29, 32, 38, 43, 47, 53, 59, 63, 56, 51, 47},
    {19, 32, 38, 42, 47, 51, 60, 68, 71, 64, 57, 49},
    {26, 36, 40, 47, 52, 55, 66, 74, 81, 71, 62, 52},
    {34, 42, 46, 51, 57, 61, 71, 80, 88, 79, 69, 58},
    {43, 53, 60, 64, 70, 76, 85, 94, 104, 94, 84, 73},
    {51, 60, 67, 71, 77, 82, 91, 101, 110, 100, 91, 81},
    {67, 76, 83, 87, 85, 91, 100, 108, 119, 110, 102, 90},
    {80, 88, 93, 96, 90, 97, 105, 115, 126, 118, 108, 94},
    {83, 94, 101, 106, 99, 105, 116, 124, 133, 127, 117, 105}};


float Interpolate_2D(float T[N][N], const float *Var, const float *RPM, float x, float y){
    if (x < 300.0 || x > 7000.0 || y < 20.0 || y > 200.0) {
        return -1;
    }
    int i, j;
    for (i = 0; i < N && RPM[i] <= x; i++);
    for (j = 0; j < N && Var[j] <= y; j++);

    if (i == 0 || j == 0 || i == N || j == N) {
        return -1;
    }

    const float x1 = RPM[i-1], x2 = RPM[i];
    const float y1 = Var[j-1], y2 = Var[j];
    const float f11 = T[j-1][i-1], f12 = T[j-1][i], f21 = T[j][i-1], f22 = T[j][i];

    const float factor_1 = (y2 - y) / (y2 - y1);
    const float factor_2 = (y - y1) / (y2 - y1);
    const float one = (x2 - x) / (x2 - x1);
    const float two = (x - x1) / (x2 - x1);
    const float three = (x2 - x) / (x2 - x1);
    const float four = (x - x1) / (x2 - x1);

    return factor_1 * (f11 * one + f21 * two) + factor_2 * (f12 * three + f22 * four);
}


#endif /* INC_LOOKUP_TABLES_H_ */