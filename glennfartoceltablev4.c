/***********
    file: in class / hwk farenheit to celcius table
    File: glennfartoceltablev4.c
    Riley Glenn
    APCS50
**********/
# include <stdio.h>
int main (void){
    int fahr;

    for ( fahr = -100; fahr <= 100; fahr = fahr +10){
        printf("f - %3d c - %6.lf\n", fahr, (5.0/9.0)*(fahr-32));
    }

}