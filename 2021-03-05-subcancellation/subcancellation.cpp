//Es mejor cambiar lo hecho en este programa y hacerlo con un for.
//Y es mejor dividir x sobre 10 que ponernos a realizar potencias
//gigantes con pow, ¡HAY QUE USAR LAS RELACIONES RECURSIVAS!
//MIRAR EL PROGRAMA HECHO POR EL PROFE.


#include <iostream>
#include <cmath>

int main ()
{

    float c1 = 0.0;
    float c2 = 0.0;
    float c3 = 0.0;
    float c4 = 0.0;
    float a = 1.0;
    float b = 1.0;
    float c = 0.0;
    int n = 0;
    float eps = 10*(-8);
    do{

        n++;

        c = std::pow(10,-n);

    c1 = (-b-std::sqrt(b*b-4*a*c))/(2*a);

    c2 = (-b+std::sqrt(b*b-4*a*c))/(2*a);

    c3 = (-2*c)/(b+std::sqrt(b*b-4*a*c));

    c4 = (-2*c)/(b+std::sqrt(b*b-4*a*c));

    std::cout << n << "\t" <<  c1 << "\t" << c2 << "\t" << c3 << "\t" << c4 << "\n";

    }while (c2>eps);
}
