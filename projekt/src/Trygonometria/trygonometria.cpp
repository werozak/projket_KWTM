#include "trygonometria.h"
#include <cmath>



double degreemath::sin(double degree) {
         //zamiana stopni na radiany:  pi radianów = 180 stopni
           //funkcja biblioteczna z piku <cmath>
         double radian = degree * (M_PI/ 180.0);
         return std::sin(radian); 
}
double degreemath::cos(double degree) {
         //zamiana stopni na radiany:  pi radianów = 180 stopni
         //return std::sin(radian);   //funkcja biblioteczna z piku <cmath>
         double radian = degree * (M_PI / 180.0);
         return std::cos(radian); 

}
double degreemath::tan(double degree) {
         //zamiana stopni na radiany:  pi radianów = 180 stopni
         //return std::sin(radian);   //funkcja biblioteczna z piku <cmath>
         double radian = degree * (M_PI / 180.0);
         return std::tan(radian); 
}
double degreemath::ctan(double degree) {
         //zamiana stopni na radiany:  pi radianów = 180 stopni
         //return std::sin(radian);   //funkcja biblioteczna z piku <cmath>
         double radian = degree * (M_PI / 180.0);
         return 1/std::tan(radian); 
}
//i tak dalej