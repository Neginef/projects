/*
	Name: 
	Copyright: 
	Author: 
	Date: 16/04/23 20:14
	Description: 
*/

#include <iostream>
using namespace std;
void drawcircle();
void drawtriangle();
void drawrectangle();
void display2blanklines();


int main()
{
    drawcircle();
    drawtriangle();
    drawrectangle();
    display2blanklines();
    drawtriangle();
    drawcircle();
    drawrectangle(); 
    
	return 0;
}
void drawcircle()
{ 
	cout<<"\n        *         ";
	cout<<"\n    *       *     ";
	cout<<"\n   *         *    ";
	cout<<"\n   *         *    ";	
	cout<<"\n    *       *     ";
	cout<<"\n        *         ";
	
}
void drawtriangle()
{
	cout<<"\n       /\\         ";
	cout<<"\n      /  \\        ";	
	cout<<"\n     /    \\       ";
	cout<<"\n    /      \\      ";
	cout<<"\n   /        \\     ";
	cout<<"\n   ----------      ";
	
	
} 
void drawrectangle()
{

cout<<"\n _______________";
cout<<"\n|               |";
cout<<"\n|               |";
cout<<"\n|_______________|";

}
	void display2blanklines()
	{  
	cout<<"\n";
	cout<<"\n";
	
	
	}

