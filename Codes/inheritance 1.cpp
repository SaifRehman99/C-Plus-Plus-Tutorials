#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class player{
	protected:
		char name[50];
		int age;
		
	public:
		char sports[50];
		player():age(16)	
		{}
		void input_player()
		{
			cout<<"enter name of player"<<endl;
			cin>>name;
			cout<<"enter age of player"<<endl;
			cin>>age;
			
		}
		void display()
		{
			cout<<"name of player is"<<name<<endl;
			cout<<"age of player"<<age<<endl;
			cout<<"he is a player of "<<sports<<endl;
		}
	};
class football:public player
{
private:
	int goals;
	int assists;
	char foot[50];
public:
	void input_player()
		{
			player::input_player();
			cout<<"enter goals of player"<<endl;
			cin>>goals;
			cout<<"enter assists of player"<<endl;
			cin>>assists;
			cout<<"enter player foot right or left"<<endl;
			cin>>foot;
		}
	void display()
	{
		player::display();
		cout<<"goals of player "<<goals<<endl;
		cout<<"assists of player "<<assists<<endl;
		cout<<"its foot is "<<foot<<endl;
		}	
};
class cricket:private player
{
	protected:
		int runs,matches,average,wickets,balls_faced,balls_bowl;
		int catches,stumps,total_dismissals;
		char type[20];
	public:
		void input()
		{
			player::input_player();
			cout<<"enter player type"<<endl;
			cin>>type;
			
			if(strcmp(type,"batsman")==0)
			{cout<<"enter players runs"<<endl;
			cin>>runs;
			cout<<"enter players matches"<<endl;
			cin>>matches;
			cout<<"enter balls faced by him "<<endl;cin>>balls_faced;
			}
			else if(strcmp(type,"bowler")==0)
			{cout<<"enter players matches"<<endl;
			cin>>matches;
			cout<<"enter players wickets taken"<<endl;
			cin>>wickets;
			cout<<"enter balls bowl by player "<<endl;
			cin>>balls_bowl;
			}
			else if(strcmp(type,"allrounder")==0)
			{
			cout<<"enter players runs"<<endl;
			cin>>runs;
			cout<<"enter players matches"<<endl;
			cin>>matches;
			cout<<"enter balls faced by him "<<endl;cin>>balls_faced;
			cout<<"enter players wickets taken"<<endl;
			cin>>wickets;
			cout<<"enter balls bowl by player "<<endl;
			cin>>balls_bowl;
			}
			else if(strcmp(type,"wicket keeper")==0||strcmp(type,"wicketkeeper")==0)
			{
			cout<<"enter players runs"<<endl;
			cin>>runs;
			cout<<"enter players matches"<<endl;
			cin>>matches;
			cout<<"enter balls faced by him "<<endl;cin>>balls_faced;
			cout<<"enter catches taken by him"<<endl;cin>>catches;
			cout<<"enter stumps done by him"<<endl;cin>>stumps;
			}
		}
		void display()
		{
			player::display();
		}
		
		
	
};
	int main()
	{
		football f1;
		cricket c1;
		player p1;
		char op;
		cout<<"enter its sports"<<endl;
		cin>>p1.sports;
		if(strcmp(p1.sports,"cricket")==0)
		{c1.input();
	}
		else if(strcmp(p1.sports,"football")==0)
		{f1.input_player();
		f1.display();}
		
	}

