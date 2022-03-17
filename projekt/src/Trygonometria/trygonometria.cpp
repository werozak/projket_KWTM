#include "trygonometria.h"
#include <cmath>

#define PI 3.14

double degreemath::sin(double degree) {
         //zamiana stopni na radiany:  pi radianów = 180 stopni
           //funkcja biblioteczna z piku <cmath>
         double radian = degree * (PI / 180.0);
         return std::sin(radian); 
}
double degreemath::cos(double degree) {
         //zamiana stopni na radiany:  pi radianów = 180 stopni
         //return std::sin(radian);   //funkcja biblioteczna z piku <cmath>
         double radian = degree * (PI / 180.0);
         return std::cos(radian); 

}
double degreemath::tan(double degree) {
         //zamiana stopni na radiany:  pi radianów = 180 stopni
         //return std::sin(radian);   //funkcja biblioteczna z piku <cmath>
         double radian = degree * (PI / 180.0);
         return std::tan(radian); 
}
double degreemath::ctan(double degree) {
         //zamiana stopni na radiany:  pi radianów = 180 stopni
         //return std::sin(radian);   //funkcja biblioteczna z piku <cmath>
         double radian = degree * (PI / 180.0);
         return std::ctan(radian); 
}
//i tak dalej