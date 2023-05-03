#include <stdexcept>
#include <sstream>
#include <iostream>
#include "doctest.h"
#include "sources/Fraction.hpp"

using namespace std;
using namespace ariel;


TEST_CASE("constractur"){
    CHECK_THROWS(Fraction(8,0));
    Fraction a(5,4);
    Fraction b = a;
    CHECK(a==b);
    CHECK( Fraction(450,10)==Fraction(900,20));       
}
TEST_CASE("+")
{
    Fraction num1(1, 3);
    Fraction num2(5, 6);
    double d1 = 0.5, d2 = 0;
    CHECK((num1 + num2) == Fraction(7, 6));
    CHECK((num2 + num1) == Fraction(7, 6));
    CHECK((num1 + d1) == Fraction(5, 6));
    CHECK((num1 + num1 + d1 + d2 + num2) == Fraction(2, 1));
}
TEST_CASE("-")
{
    Fraction num1(3, 4);
    Fraction num2(2, 2);
    double d1 = 0.25, d2 = 0;
    CHECK((num2 - num1) == Fraction(1, 4));
    CHECK((num2 - num1 - d1) == Fraction(0, 1));
    CHECK((num1 - d2) == Fraction(3, 4));
}
TEST_CASE("*")
{
    Fraction num1(1, 1);
    Fraction num2(4, 2);
    Fraction num3(9, 3);
    double d1 = 0.5, d2 = 0;
    CHECK((num1 * num2) == Fraction(2, 1));
    CHECK((num2 * num1 * num3) == Fraction(6, 1));
    CHECK((num1 * d1) == Fraction(1, 2));
    CHECK((num2 * d2) == Fraction(0, 1));
    CHECK((num2 * d1) == num1);
    Fraction a(5, 7);
    Fraction b(8, 9);
    CHECK((a * b) == Fraction(40, 63));
}
TEST_CASE("/")
{
    Fraction num1(2, 5);
    Fraction num2(7, 3);
    double x = 0;
    CHECK((num1 / num2) == Fraction(14, 15));
    CHECK((num2 / num1) == Fraction(35, 6));
    CHECK_THROWS((num1 / x)); // divide in zero
}
TEST_CASE("<")
{
    Fraction num1(1, 3);
    Fraction num2(3, 8);
    double d1 = 0.5;
    CHECK(num1 < num2);
    CHECK_FALSE(num1 >= num2);
    CHECK(num1 < d1);
}
TEST_CASE(">")
{
    Fraction num1(1, 3);
    Fraction num2(3, 8);
    Fraction num3(6, 7);
    double d1 = 0.5;
    CHECK(num2 > num1);
    CHECK_FALSE(num2 <= num1);
    CHECK(num3 > d1);
}
TEST_CASE("==")
{
    Fraction num1(1, 3);
    Fraction num2(4, 5);
    Fraction num3(2, 6);
    double d1 = 0.8;
    CHECK(num1 == num3);
    CHECK_FALSE(num1 == num2);
    CHECK(num2 == d1);
}
TEST_CASE(">=")
{
    Fraction num1(1, 3);
    Fraction num2(4, 5);
    Fraction num3(2, 6);
    double d1 = 0.8;
    CHECK(num1 >= num3);
    CHECK(num2 >= num1);
    CHECK(num2 >= d1);
    CHECK_FALSE(num1 >= num2);
}
TEST_CASE("<=")
{
    Fraction num1(1, 3);
    Fraction num2(4, 5);
    Fraction num3(2, 6);
    double d1 = 0.8;
    CHECK(num1 <= d1);
    CHECK(num3 <= num1);
    CHECK_FALSE(num2 <= num1);
}
TEST_CASE("<<")
{
    Fraction frac1(1,1);
    Fraction frac2(5,6);
    ostringstream output;
    output << frac1;
    CHECK(output.str() == "3/1");
    output << frac2;
    CHECK(output.str() == "5/6");
}

TEST_CASE("all operators"){
    Fraction num1 (0,1);
    Fraction num2(2,2);
    Fraction num3(8,2);
    Fraction num4(5,1);
    Fraction expr1 =(num1 + 2.5 - num2 );
    Fraction expr2=((2 * num4) - num3 - 4.5);
    CHECK(expr1==expr2 );
    Fraction num5(4,3);
    Fraction expr3 =(num1 * (1.5 + num5));
    CHECK( expr3 == 0);
}

