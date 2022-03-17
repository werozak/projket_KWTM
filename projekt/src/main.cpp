#include <LaborkaConfig.h>
#include <iostream>
#include <trygonometria.h>
#ifdef USE_TRIGONOMETRY_DEGREE
    #include "Trygonometria/trygonometria.h"
#else
    #include <cmath>
#endif

int main() { 

std::cout<<"Hello World!\n"; 
//double zmienna  = degreemath::sin(90.0);
//std::cout<<zmienna<<std::endl;


#ifdef USE_TRIGONOMETRY_DEGREE
     double zmienna  = degreemath::sin(90.0);
#else
    double zmienna = sin(M_PI/4.0); 
#endif

    std::cout<<zmienna<<std::endl;
}