#include"cppinterface.h"
#include "IF97.h"
#pragma warning (disable : 4996)

using namespace IF97;

double pt_h(double p, double t)
{
    double press = (p + 0.1) * 1e6; // MPag��PaA
    double temp = t + 273.15; // ���K

    return hmass_Tp(temp, press) / 1000;
}


