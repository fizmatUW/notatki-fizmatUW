#include <iostream>
#include <math.h>


// p = MOD[s+ FLOOR[n*FRAC(id* c)],n]+1

long number()
{
    long n, id, s;
    std::cout << "Count of tasks?\n";
    std::cin >> n;
    std::cout << "Student id?\n";
    std::cin >> id;
    std::cout << "Series number?\n";
    std::cin >> s;
    double c = (std::sqrt(5.0) - 1.0) / 2.0;

    double frac_part, int_part;
    frac_part = std::modf((double)id * c, &int_part);
    //std::cout << (double)id * c << " " << int_part << " " << frac_part << "\n";

    double dfloor = std::floor(n * frac_part);
    long lfloor = (long)dfloor;
    //std::cout << dfloor << " " << lfloor << "\n";

    long p = (s + lfloor) % n;
    ++p;
    std::cout << p << "\n";
    
    return p;
}

int main()
{
    // TODO: Kalendarz

    long num = number();

    return 0;
}
