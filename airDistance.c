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
    
    printf("Enter latitude of origin: ");
    scanf("%lf\n", &latitudeA);
    printf("\n");
    
    printf("Enter longitude of origin: ");
    scanf("%lf\n", &longitudeA);
    printf("\n");
    
    printf("Enter latitude of destination: ");
    scanf("%lf\n", &latitudeB);
    printf("\n");
    
    printf("Enter longitude of destination: ");
    scanf("%lf\n", &longitudeB);
    printf("\n");

    equalSign = '=';
    
  
    
        if ( latitudeA > -90 ) {
           printf("Location Distance");
    printf("\n");
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign,equalSign);
    
    printf("Origin:      (%lf, %lf)\n", latitudeA,longitudeA);
    
    printf("Destination: (%lf, %lf)\n", latitudeB,longitudeB);
    
    latitudeA = (latitudeA/180)*PI;
    latitudeB = (latitudeB/180)*PI;
    longitudeA = (longitudeA/180)*PI;
    longitudeB = (longitudeB/180)*PI;
    
    airDistance = acos((sin(latitudeA)*sin(latitudeB))+(cos(latitudeA)*cos(latitudeB)*cos(longitudeB - longitudeA)));
    airDistance = airDistance * averageRadius;
    
    printf("Air distance is %lf kms", airDistance);
    printf("\n");/* Execute these statements if TRUE */
}
else {
         printf("Origin Latitude Invalid, should be between -90 and 90.");
         printf("\n");/* Execute these statements if FALSE */
}


    
    
    return 0;
 }