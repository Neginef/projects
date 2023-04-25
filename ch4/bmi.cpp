/*
	Name: negin.ef
	Date: 26/04/23 01:37
	Description:exercise5 chpter4 BMI
*/

#include <iostream>
using namespace std;
double cal_bmi(double, double);
int main()
{
	double height, weight, bmi;
  cout<<"\n Enter height in m - ";
	cin>>height;
	cout<<"\n Enter weight in kg - ";
	cin>>weight;
	bmi = cal_bmi(height, weight);
	cout<<"\n BMI"<<bmi;
	if(bmi < 18.5)
		cout<<"\n Underweight \n";	// Below 18.5 Underweight
	else if(bmi < 24.9)
		cout<<"\n Normal \n";		// 18.5–24.9 Normal
	else if(bmi < 29.9)
		cout<<"\n Overweight \n";	// 25.0–29.9 Overweight
	else
		cout<<"\n Obese \n";		// 30.0 and above Obese
}

double cal_bmi(double height, double weight)
{
	double bmi = (weight)/(height*height);
	return bmi;
}
	