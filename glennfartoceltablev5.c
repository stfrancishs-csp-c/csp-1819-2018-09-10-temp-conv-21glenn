/***********
    file: in class / hwk farenheit to celcius table
    File: glennfartoceltablev5.c
    Riley Glenn
    APCS50
**********/
# include <stdio.h>
int main (void){
    int fahr;

    for ( fahr = -50; fahr <= 120; fahr = fahr +5){
        printf("f - %3d c - %6.lf\n", fahr, (5.0/9.0)*(fahr-32));
    }

}