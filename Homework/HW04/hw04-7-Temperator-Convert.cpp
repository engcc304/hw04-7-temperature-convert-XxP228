/*
    จงเขียนโปรแกรมเพื่อแปลงอุณหภูมิ โดยรับมาจากผู้ใช้เป็นองศาเซลเซียส และแปลงเป็นฟาเรนไฮต์
    
    Test case:
        User input :
            22
    Output:
        22 degree Celsius = 71.6 degree Fahrenheit

    Test case:
        User input :
            36
    Output:
        36 degree Celsius = 96.8 degree Fahrenheit
*/
#include <stdio.h>
int main() {
    int Celsius = 0,Fahrenheit = 0  ;
    printf("Enter you degree Celsius: ");
    scanf("%d",&Celsius ) ;
    Fahrenheit = 1.8 * Celsius + 32  ;
    printf("%d degree Celsius = %d degree Fahrenheit.\n ", Celsius, Fahrenheit ) ;
    return 0 ;
}