#include <iostream>
#include <string>
using namespace std;
int main()
{
//Dialog of the first example is given below.

 string name;
 string movie;
 string day;
 string ans;
 int id,gear;
cout <<"Fahsai: Sawadee ka...Can you tell me your name?\n";
getline(cin,name);
cout<<"?????: ";
cout<<"Fahsai: Wow!!! " <<name <<" is a really cool name.\n";
cout<<"Fahsai: I think you are an Engineering student. What is your student ID?\n";
cin>>id;
cin.ignore();

cout<<name <<": ";

gear= (id/10000000)-12;
cout<<"Fahsai: I think you may be GEAR "<<gear <<". I have a free movie ticket for you.\n";
cout<<"Fahsai: Let's go to the cinema together!!!\n";
cout<<"Fahsai: What movie do you want to watch?\n";
getline(cin,movie);
cout<<name <<": ";
cout<<"Fahsai: So....which day are you free to go with me?\n";
getline(cin,day);
cout<<name<<": ";
cout<<"Fahsai: " <<day<<"....that is OK!!! I'm looking forward to watching "<<movie<<" with you.\n";
getline(cin,ans);
cout<<name <<": ";
cout<<"Fahsai: 555+ see you "<<day<< ". Bye Bye \\(^ ^)/ \n";
return 0;
}