/*
 * This code is meant to find the distance between an origin and destination latitutdes and longitudes
 */
 
 #include <stdio.h>
 #include <math.h>
 
 int main(void) {
    
    double latitudeA;
    double longitudeA;
    double latitudeB;
    double longitudeB;
    double airDistance;
    double PI = 3.14159265358979323846;
    int averageRadius = 6371;
    char equalSign;
    
    printf("Insert the latitude of your origin: ");
    scanf("%lf\n", &latitudeA);
    printf("\n");
    
    printf("Insert the longitude of your origin: ");
    scanf("%lf\n", &longitudeA);
    printf("\n");
    
    printf("Insert the latitude of your destination: ");
    scanf("%lf\n", &latitudeB);
    printf("\n");
    
    printf("Insert the longitude of your destination: ");
    scanf("%lf\n", &longitudeB);
    printf("\n");
    printf("\n");
    
    equalSign = '=';
    
    printf("Location Distance");
    printf("\n");
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign);
    
    printf("Origin: (%lf, %lf)\n", latitudeA,longitudeA);
    
    printf("Distance: (%lf, %lf)\n", latitudeB,longitudeB);
    
    latitudeA = (latitudeA/180)*PI;
    latitudeB = (latitudeB/180)*PI;
    longitudeA = (longitudeA/180)*PI;
    longitudeB = (longitudeB/180)*PI;
    
    airDistance = acos((sin(latitudeA)*sin(latitudeB))+(cos(latitudeA)*cos(latitudeB)*cos(longitudeB - longitudeA)));
    airDistance = airDistance * averageRadius;
    
    printf("Air distance is %lf kms", airDistance);
    
    return 0;
 }