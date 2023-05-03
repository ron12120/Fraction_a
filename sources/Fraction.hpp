#include <iostream>

using namespace std;
namespace ariel{
    class Fraction{
        int _numerator;
        int _denominator;

        public:
        Fraction(int numerator ,int denominator):_numerator(numerator),_denominator(denominator){};
        Fraction();
        Fraction operator+(const Fraction &franc){return Fraction(1,1);};
        Fraction operator-(const Fraction &franc){return Fraction(1,1);};
        Fraction operator-(const double number){return Fraction(1,1);};
        Fraction operator/(const Fraction &franc){return Fraction(1,1);};
        Fraction operator/(const double numbe){return Fraction(1,1);};
        Fraction operator*(const Fraction &franc){return Fraction(1,1);};
        Fraction operator*(const double number){return Fraction(1,1);};
        Fraction operator+(const double number){return Fraction(1,1);};
        Fraction operator++(int){return Fraction(1,1);};
        Fraction operator++(){return Fraction(1,1);};
        Fraction operator--(int){return Fraction(1,1);};
        Fraction operator--(){return Fraction(1,1);};
        bool operator>(const Fraction &franc){return true;};
        bool operator>(const double number){return true;};
        bool operator<(const Fraction &franc){return true;};
        bool operator<(const double number){return true;};
        bool operator>=(const Fraction &franc){return true;};
        bool operator>=(const double number){return true;};
        bool operator<=(const Fraction &franc){return true;};
        bool operator<=(const double number){return true;};
        bool operator==(const Fraction &franc){return true;};
        bool operator==(const double number){return true;};
        friend ostream &operator<<(ostream &os, const Fraction &franc);
        friend Fraction operator*(const double number, const Fraction &franc);
        friend Fraction operator+(const double number, const Fraction &franc);
        friend Fraction operator+(const Fraction &franc1, const Fraction &franc2);
        
    };
     ostream &operator<<(ostream &os, const Fraction &franc){return os;};
     Fraction operator*(const double number, const Fraction &franc){return Fraction(1,1);};
     Fraction operator+(const double number, const Fraction &franc){return Fraction(1,1);};
     Fraction operator+(const Fraction &franc1, const Fraction &franc2){return Fraction(1,1);};

};
