#include<iostream>

using namespace std;

int main()
{
	int crs=0;
	int rckw=0;
	int bu=0;
	
int u_input;
int amount=0,count=0;
 
 //menu
while (true)
{
cout<<"\t\t--------------------------------------------------------------"<<endl<<endl;
cout<<"\t\tpress 1 for rickshaw"<<endl;
cout<<"\t\tpress 2 for car"<<endl;
cout<<"\t\tpress 3 for buse"<<endl;
cout<<"\t\tpress 4 to show your record"<<endl;
cout<<"\t\tpress 5 to delete your record"<<endl;
cout<<"\t\t--------------------------------------------------------------"<<endl<<endl;
cin>>u_input;


// if or else statment form or conditional form.
if (u_input==1)
{
	crs++;
	amount = amount + 100;
	count = count + 1;
}

else if (u_input==2)
{
	rckw++;
	amount = amount + 200;
	count = count + 1;
}
else if (u_input==3)
{
bu++;
	amount = amount + 300;
	count = count + 1;
	
}

// for total entries or recode
else if (u_input==4)
{
cout<<"\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl<<endl;
cout<<"\t\t\tthe total amount = "<<amount<<endl;
cout<<"\t\t\tthe total number of vehicles parked = "<<count<<endl;
cout<<"\t\t\ttotal no. of rickshaw parked = "<<rckw<<endl;
cout<<"\t\t\ttotal no. of cars parked = "<<crs<<endl;
cout<<"\t\t\ttotal no. of bus parked = "<<bu<<endl<<endl;
cout<<"\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl<<endl;
	}	
// for clear your data.
else if (u_input==5)
{
	amount = 0;
	count = 0;
    rckw = 0;
    crs = 0;
    bu = 0;
cout<<"\t\t**********************"<<endl;
cout<<"\t\tYOU RECORD IS DELETED"<<endl;
cout<<"\t\t**********************"<<endl;
	}
	// invalid statment 
	else {
	cout<<"invalid number"<<endl;
	}
	
}
	return 0;
	
	
}

