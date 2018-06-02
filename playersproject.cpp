/*
This code is from sami zain to help out a student of Comsats University.

*/
#include <iostream>
#include <fstream>
#include<string>
#include <iomanip>
using namespace std;
class player{
private:
char name[11];
int age;
int total_matches;
int total_runs;
int total_wic;
int bating_avg;
int bowling_avg;
public:
void enter_player(void);
void listof_players(void);
void bating_history(void);
void bowling_history(void);
void find_player(void);

};
main()
{
player p1;
cout<<"***********************************************************************"<<endl;
cout<<"1. Enter plyer information."<<endl;
cout<<"2. view list of players."<<endl;
cout<<"3. Bowling History."<<endl;
cout<<"4. Bating History."<<endl;
cout<<"5. Find a Player information."<<endl;
cout<<"6. Clear Whole screen"<<endl;
cout<<"7. Exit from software"<<endl;
cout<<"---------------------------------------------------------------------------"<<endl;
cout<<"Please enter your choice: ";
int c;
cin>>c;
switch(c)
{
case 1:
{
p1.enter_player();
break;
}	
			
		case 2:
			{
				p1.listof_players();
				break;
			}
	
	case 3:
		{
			p1.bowling_history();
			break;
		}
	case 4:
		{
			p1.bating_history();
			break;
		}
	case 5:
		{
			p1.find_player();
			break;
		}
	case 6:
		{
			system("cls");
			main();
		}
		case 7:
			{
				exit(0);
			}
		default:
			{
				cout<<"Please enter a correct option: "<<endl;
				main();
			}
}

}









void player::find_player(){
	string search;
	int offset;
	string line;
	ifstream myfile;
	myfile.open("players.txt");
	cout<<"Enter Player name to find:: ";
	cin>>search;
	cout<<endl;
	cout<<"____________________________________________________________________________"<<endl;
cout<<"Player Name|Player Age|Total Match|Total Runs|Total Wickets|Bat Avg|Bowl Avg|"<<endl;
cout<<"-----------------------------------------------------------------------------"<<endl;
	if(myfile.is_open())
	{
		while(!myfile.eof())
		{
			getline(myfile, line);
			if (offset = line.find(search,0)!= string::npos)
			{
				int l;
l = 10 - search.length();
for (int i=1; i<=l; i++){
	search = search + " ";
}
				string text;
				cout<<search<<setw(2)<<"|";
				getline(myfile,text);
cout<<setw(7)<<text<<setw(4)<<"|";
  getline(myfile,text);
cout<<setw(5)<<text<<setw(7)<<"|";
getline(myfile,text);
cout<<setw(5)<<text<<setw(6)<<"|"; 
getline(myfile,text);
cout<<setw(7)<<text<<setw(7)<<"|";
getline(myfile,text);
cout<<setw(5)<<text<<setw(3)<<"|";
getline(myfile,text);
cout<<setw(5)<<text<<setw(4)<<"|"<<endl;
cout<<"-----------------------------------------------------------------------------"<<endl;


			}
		
		}
	}
	main();
}







void player:: enter_player(){
ofstream outputFile;
 outputFile.open ("players.txt", std::fstream::in | std::fstream::out | std::fstream::app);

for (int i=0; i<10;i++){
char a;

//outputFile<<endl;
cout<<"Enter Player "<<i+1<<" Name: ";
cin>>name;
outputFile<<name<<endl;
cout<<"Enter Player Age: ";
cin>>age;
outputFile<<age<<endl;
cout<<"Enter Players Total Matches: ";
cin>>total_matches;
outputFile<<total_matches<<endl;
cout<<"Enter Players Runs: ";
cin>>total_runs;
outputFile<<total_runs<<endl;
cout<<"Enter Players total wickets: ";
cin>>total_wic;
outputFile<<total_wic<<endl;
cout<<"Enter Players Bating Average: ";
cin>>bating_avg;
outputFile<<bating_avg<<endl;
cout<<"Enter Players bowling Average: ";
cin>>bowling_avg;
outputFile<<bowling_avg<<endl;

cout<<"Do you want to enter more players Y/N"<<endl;
cin>>a;
if (a=='y')
continue;
if (a=='n')
break;
}
main();
}
void player::listof_players()
{
string text;
  ifstream ifs("players.txt");
  cout<<endl;
cout<<"_____________________________________________________________________________"<<endl;
cout<<"Player Name|Player Age|Total Match|Total Runs|Total Wickets|Bat Avg|Bowl Avg|"<<endl;
cout<<"-------------------------------------------------------------------------"<<endl;
while(!ifs.eof()){

	


getline(ifs,text);
if (text=="")
break;
int l;
l = 10 - text.length();
for (int i=1; i<=l; i++){
	text = text + " ";
}
cout<<text<<setw(2)<<"|";
getline(ifs,text);
cout<<setw(7)<<text<<setw(4)<<"|";
  getline(ifs,text);
cout<<setw(5)<<text<<setw(7)<<"|";
getline(ifs,text);
cout<<setw(5)<<text<<setw(6)<<"|"; 
getline(ifs,text);
cout<<setw(7)<<text<<setw(7)<<"|";
getline(ifs,text);
cout<<setw(5)<<text<<setw(3)<<"|";
getline(ifs,text);
cout<<setw(5)<<text<<setw(3)<<"|"<<endl;
cout<<"----------------------------------------------------------------------------"<<endl;
}
main();
}
void player::bowling_history(){

string text;
  ifstream ifs("players.txt");
	cout<<"______________________________________________________"<<endl;
cout<<"Player Name|Player Age|Total Match|Total Wickets|Bowl Avg|"<<endl;
cout<<"----------------------------------------------------------"<<endl;
while(!ifs.eof()){
	
getline(ifs,text);
if(text=="")
break;
int l;
l = 10 - text.length();
for (int i=1; i<=l; i++){
	text = text + " ";
}
cout<<text<<setw(2)<<"|";
getline(ifs,text);
cout<<setw(7)<<text<<setw(4)<<"|";
  getline(ifs,text);
cout<<setw(5)<<text<<setw(7)<<"|";
getline(ifs,text);

getline(ifs,text);
cout<<setw(7)<<text<<setw(7)<<"|";
getline(ifs,text);

getline(ifs,text);
cout<<setw(5)<<text<<setw(3)<<"|"<<endl;
cout<<"-----------------------------------------------------------"<<endl;

	
}
main();	
}
void player::bating_history(){

	string text;
  ifstream ifs("players.txt");
cout<<"_______________________________________________________"<<endl;
cout<<"Player Name|Player Age|Total Match|Total Runs|Bat Avg|"<<endl;
cout<<"--------------------------------------------------------"<<endl;
while(!ifs.eof()){
getline(ifs,text);
if(text=="")
break;
int l;
l = 10 - text.length();
for (int i=1; i<=l; i++){
	text = text + " ";
}
cout<<text<<setw(2)<<"|";
getline(ifs,text);
cout<<setw(7)<<text<<setw(4)<<"|";
  getline(ifs,text);
cout<<setw(5)<<text<<setw(7)<<"|";
getline(ifs,text);
cout<<setw(5)<<text<<setw(6)<<"|"; 
getline(ifs,text);

getline(ifs,text);
cout<<setw(5)<<text<<setw(3)<<"|";
getline(ifs,text);
cout<<endl;
cout<<"-------------------------------------------------------"<<endl;	

}
main();
}

