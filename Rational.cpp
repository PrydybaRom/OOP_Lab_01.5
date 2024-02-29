
#include "Rational.h"
#include <iostream>
using namespace std;

bool Rational::Init(Pair fraction) {
    if (fraction.getSecond() == 0) {
        std::cout << "Error: Denominator cannot be zero." << std::endl;
        return false;
    }
    this->fraction = fraction;
    return true;
}

void Rational::Display() const {
    cout << "Numerator: " << fraction.getFirst() << ", Denominator: " << fraction.getSecond() << endl;
}

void Rational::Read() {
    int numerator, denominator;
    cout << "Enter Numerator: ";
    cin >> numerator;
    cout << "Enter Denominator: ";
    cin >> denominator;
    fraction.setFirst(numerator);
    fraction.setSecond(denominator);
}

string Rational::numberToWords(int numbers) {

    int number = numbers;

    // Масиви з літерами, що використовуються для перетворення числа в слова
    const string units[] = { "", "odin", "dva", "tri", "chotiri", "piat", "shist", "sim", "visim", "deviat" };
    const string teens[] = { "desiat", "odinatsiat", "dvanatsiat", "trinadsiat", "chitirnatsiat", "piatnadsia", "sichnadsiat", "simnadsiat", "visimnadsiat", "devaitnadsiat" };
    const string tens[] = { "", "", "dvadsiat", "tridsat", "sorok", "piatdesat", "shistdesat", "simdesat", "visimdesat", "devainosto" };
    const string hundreds[] = { "", "sto", "dvista", "trista", "chotirista", "piatsot", "shisot", "simsot", "visimsot", "deviatsot" };
    const string thousands[] = { "", "tisacha", "tisachi", "tisach" };


    // Число в словах
    string result;

    int unit = number % 10;
    int ten = (number % 100) / 10;
    int hundred = (number % 1000) / 100;
    int thousand = (number % 10000) / 1000;

    if (thousand > 0) {
        result += hundreds[thousand] + " ";
    }
    if (hundred > 0) {
        result += hundreds[hundred] + " ";
    }
    if (ten > 1) {
        result += tens[ten] + " ";
        result += units[unit] + " ";
    }
    else if (ten == 1) {
        result += teens[unit] + " ";
    }
    else {
        result += units[unit] + " ";
    }

    return result;
}