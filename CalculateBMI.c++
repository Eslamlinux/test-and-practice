#include <iostream>
#include <string>
#include <cmath>

/*
Write function bmi that calculates body mass index (bmi = weight / height2).
if bmi <= 18.5 return "Underweight"
if bmi <= 25.0 return "Normal"
if bmi <= 30.0 return "Overweight"
if bmi > 30 return "Obese"
*/
std::string bmi(double w, double h) 
{
  double Bmi = w/pow(h,2);
    std::string res;

    enum BMIStatus { Underweight, Normal, Overweight, Obese };
    enum BMIStatus BMIStatus ;

    BMIStatus = (Bmi <= 18.5) ? Underweight : BMIStatus;
    BMIStatus = (Bmi > 18.5 && Bmi <= 25.0) ? Normal : BMIStatus;
    BMIStatus = (Bmi > 25.0 && Bmi <= 30.0) ? Overweight : BMIStatus;
    BMIStatus = (Bmi > 30.0) ? Obese : BMIStatus;
  switch(BMIStatus)
    {
        case 0: res = "Underweight"; break;
        case 1: res = "Normal"; break;
        case 2: res = "Overweight"; break;
        case 3: res = "Obese"; break;
        default: res =""; break;
    }
  return res;
}
int main() 
{
    double weight, height;
    std::cout << "Enter weight (kg): ";
    std::cin >> weight;
    std::cout << "Enter height (m): ";
    std::cin >> height;

    std::string category = bmi(weight, height);
    std::cout << "BMI Category: " << category << std::endl;

    return 0;
}   
