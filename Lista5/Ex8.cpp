#include<stdlib.h>
#include<stdio.h>
#include<math.h>
float x1 = 0, y1 = 0;
float x2 = 0, y2 = 0;

void distancia(float *distancia){
    *distancia = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
}