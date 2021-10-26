//
//  main.c
//  practicOne
//
//  Created by Саша  Мінаєв on 07.09.2021.
//

#include <stdio.h>
#include <math.h>

float logr(float a, float b){
    return log(b) / log(a);
}

float f13(float x, float z, float y){
    float result = pow(x + 1, 2) + ((2*(y+z))/(x + y - pow(z,2))) + 13*logr(5, (x*y + z)) ;
    printf("%s" ,"\n");
    return(result);
}

int main(int argc, const char * argv[]) {
//    printf("%f", f13(5.168, 1.569, 3.022));
//    printf("%s" ,"\n");
//    printf("%f",((250.5 * pow(10,-3)* pow(34.6,2)*pow(10,-6))/4)*((35.5*pow(10,-2)*9.8*10.18)/(49*pow(10,-2)*84.5*pow(10,-2))));
//    printf("%f",((250.5 * pow(10,-3)*pow(34.6,2)*pow(10,-6))/4)*((36*pow(10,-2)*9.8*pow(1.77,2))/(49*pow(10,-2)*85*pow(10,-2))));
    printf("%f",2*((0.0641 - 0.0019)/(0.0641 + 0.0019)) );

}







//
//
//float f1(float x, float y){
//    float result = sin(pow(x,2))+cos(2*x + y) - 14 * pow(pow(x,2), 3);
//    return(result);
//}
//
//float f2(float x, float z){
//    float result = tan(sqrt(x)) + 165*pow(z,6) + sqrt(sqrt(pow(x,2) - z)) ;
//    printf("%s" ,"\n");
//    return(result);
//}
//
//float f3(float x, float y){
//    float result = ((3*pow(x,2)+1) / (5*y)) + ((2*tan(x + 1)) / (y-2)) ;
//    printf("%s" ,"\n");
//    return(result);
//}
//
//float f4(float x, float y){
//    float result = 13*x*y + log10(x / y) - 17*sin(pow(x,2) - y) ;
//    printf("%s" ,"\n");
//    return(result);
//}
//
//float f5(float x, float z){
//    float result = pow((z+x)/cos(x) + sqrt(sin(x)*cos(x)),2) + 16*z ;
//    printf("%s" ,"\n");
//    return(result);
//}
//
//float f6(float y, float z){
//    float result = tan(cos(z)) + ((4*sin(z))/cos(y)) + sqrt(y*z);
//    printf("%s" ,"\n");
//    return(result);
//}
//
//float f7(float x, float y){
//    float result = sqrt(tan(x)) + pow((x+y), log10(x)) ;
//    printf("%s" ,"\n");
//    return(result);
//}
//
//float f8( float z){
//    float result = pow(z,6)+ 13*pow(z,3) + 14*pow(z,2) - 2*z + 21;
//    printf("%s" ,"\n");
//    return(result);
//}
//
//float f9(float x, float y){
//    float result = sin(pow(x,2)) + pow(sin(pow(x,3)), 2) + pow(sin(pow(y,4)), 3);
//    printf("%s" ,"\n");
//    return(result);
//}
//
//float f10(float x, float y){
//    float result = log10(pow(x,2) + 4*x*y + pow(y,2)) - 12*cos(x*pow(y,4)) + 13*pow(x,6);
//    printf("%s" ,"\n");
//    return(result);
//}
//
//float f11(float x, float y){
//    float result = (3*sqrt(y+pow(x,3))) / cbrt(y) + (3 / 4*x)*cos(y);
//    printf("%s" ,"\n");
//    return(result);
//}
//
//float f12(float x, float y){
//    float result = 137*pow(x,3) + cos(pow(y,3) / pow(x,4)) + tan(14*y) - 7*pow(x,6) ;
//    printf("%s" ,"\n");
//    return(result);
//}
//float fi(float x, float z, float y){
//    float result = pow(x + 1, 2) + ((2*(y+z))/(x + y - pow(z,2))) + 13*logr(5, (x*y + z)) ;
//    printf("%s" ,"\n");
//    return(result);
//}
