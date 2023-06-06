
/*
	Name: negin eftekhari bayati
	Copyright: 
	Author: 
	Date: 06/06/23 17:43
	Description: weather exercise7 chapter5
*/
#include<iostream>
using namespace std;
int main()
{
    int hot_days=0, cold_days=0, pleasant_days=0, avg_temp,temp_sum=0,error;
  float temp;
   do {
    	cout<<"\n enter the temp:";
    	cin>>temp;
  temp_sum += temp;
        if(temp >= 29.5)
        {
           cout<<"\n today is a Hot Day";
		  hot_days++;
        }
        else if(temp >=15.5)
        {
            cout<<"\n today is a Pleasant Day";
      pleasant_days++;
        }
        else if(temp<=15.5)
        {
		cout<<"\n today is a Cold Day";
        cold_days++;
	     }
    else
    {
    	cout<<"try again :)";
    	return 0;
	}
    cout<<"\n Number of Hot Days"<<hot_days;
    cout<<"\n Number of Pleasant Days"<<pleasant_days;
    cout<<"\n Number of Cold Days"<<cold_days;
    
    avg_temp=temp_sum / (hot_days + cold_days + pleasant_days);
    cout<<"\n Average Temperature is:"<<avg_temp<<endl; 
}	while(temp!=error);
 return 0;}