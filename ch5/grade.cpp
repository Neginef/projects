/*
	Name: negin eftekhari bayati
	Copyright: 
	Author: 
	Date: 06/06/23 17:29
	Description: grade exercise 4 chapter5
*/

#include<iostream>
using namespace std;
int main()
{
	float avg_grade,grade;
	int perfect=0,good=0,bad=0,grade_sum=0 ,error;
do{	
	cout<<"\n \n enter the grade:";
	cin>>grade;
   grade_sum+=grade;

 if(grade<=11.75)
	{
	cout<<"\n bad"<<endl;
	bad++;
}
	else if(grade<=18)
	{
	cout<<"\n good"<<endl;
	good++;
}
	else if(grade<=20)
	{
	cout<<"\n perfect"<<endl;
	perfect++;}
	else 
	{
cout<<"error";
return 0;}
	avg_grade =grade_sum/(perfect+good+bad);
		cout<<"\n num of perfect:"<<perfect;
	cout<<"\n num of good:"<<good;
	cout<<"\n num of bad:"<<bad;
	cout<<"\n avrage of the grades:"<<avg_grade;
	}while(grade!=error); 
	return 0;}