#include<iostream>
#include<fstream>
#include<string>
using namespace std;
ofstream playersfile;
int main()	
{
string yes_or_no;
string user,pass,username,password,firstname,lastname;
int choice;
string guess;
string derakht,binary,joojetiqi,esm,zaban;
	cout<<" for sign up plz press 1, for login plz press 2:";
	cin>>choice;
	if(choice==1)
	{
	cout<<"\n plz enter your firstname:";
	cin>>firstname;
	cout<<"\n last name:";
	cin>>lastname;
	cout<<"\n select a username:";
	cin>>username;
	cout<<"\n select a password:";
	cin>>password;
    playersfile.open(username +".txt");
    playersfile<<username<<"\n"<<password<<"\n"<<firstname<<"\n"<<lastname;
    playersfile.close();
    cout<<"\n perfect!now try to login"<<endl<<endl;
    main();
}
else if(choice==2)
	{
	cout<<"enter username:";
	cin>>username;
	cout<<"password:";
	cin>>password;
	ifstream read(username +".txt");
	getline(read , user);
	getline(read, pass);
	getline(read, firstname);
	getline(read, lastname);
	
         	if(user==username && pass==password)
         	{
	cout<<"welcome"<<" "<<firstname<<" "<<lastname;	

    cout<<"\n hint:mojoodi ke az khod oxigen tolid mikonad:"<<"\n"<<"ba D shooro mishvd"<<endl;
  cout<<"your guess?";
  cin>>guess;
  if ( "derakht"==guess)
  {
  	cout<<"correct!!"<<endl;
	   } 
  else
  {	
  cout<<"wrong!!"<<endl;}
  
        cout<<"\n hint: qavitarin azole mojod dar badan"<<"\n"<<"ba N tamoom mishvd"<<endl;
         cout<<"your guess?";
  cin>>guess;
  if ("zaban"==guess)
  {
  	cout<<"correct!!"<<endl;
	   } 
  else
  {	
  cout<<"wrong!!"<<endl;}
        cout<< "\n hint: zabani ke tavasot computer baraye pardazesh dadeh ha estefade mishavad:"<<"\n"<<"ba B shoroo mishvd"<<endl;
         cout<<"your guess?";
  cin>>guess;
  if ("binary"==guess)
  {
  	cout<<"correct!!"<<endl;
	   } 
  else
  {	
  cout<<"wrong"<<endl;}
        cout<<"\n hint: motealeq be tost vali kamtar az hame be kar mibari"<<"\n"<<"3 harfi :)"<<endl;
         cout<<"your guess?";
  cin>>guess;
  if ("esm"==guess)
  {
  	cout<<"correct!!"<<endl;
	   } 
  else
  {	
  cout<<"wrong!!"<<endl;}
        cout<<"\n hint: por tiq ast vali saq va barg nadard"<<"\n"<<"shabih moosh"<<endl;
         cout<<"your guess?";
  cin>>joojetiqi;
  if ("joojetiqi"==guess)
  {
  	cout<<"correct!!"<<endl;
	   } 
  else
  {	
  cout<<"wrong!!"<<endl;}
	   cout << "\n Would like to play another round of guessing?" << endl;
      cout << "\n Enter yes or no" << endl; 
      cin >>yes_or_no;
      if (yes_or_no == "yes"|| yes_or_no=="Yes")
      {
        main(); 
      }
    else  if (yes_or_no == "no"|| yes_or_no=="No")
      {
        return 0;}
		}
    else
	{
		cout<<"info wrong!";
		return 0;}
	}
	else
	{
		cout<<"plz choose between 1 & 2 only:)"<<endl;
		main();
	}
	}