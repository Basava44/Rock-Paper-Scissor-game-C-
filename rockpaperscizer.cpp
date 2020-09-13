#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void rules()
{
	cout<<"  1.You have to Enter(Type) Your choice(rock/paper/scissor)."<<endl;  
	cout<<"  2.Once started you should finish the game."<<endl;
	cout<<"  3.after announceing the result We Will ask wheather Do you want to continue or Not"<<endl;
	cout<<"    i.In case Yes, We will continue else We will terminate the game\n";
	cout<<"  4.One who gets the maximum points(set by me/you can also change) will be the winner"<<endl;
}

void startGame(string game[])
{
	cout<<"\n**You have to enter one option either rock paper scissor**";
	int me=0,you=0;
	string your_choice;
	int points=3;
	cout<<"\n\n**The maximum Points is 3, Is it ok for you or do you want to change the points**\n";
	cout<<"If you want to change enter Yes else enter No\n>";
	string option;
	cin>>option;
	transform(option.begin(),option.end(),option.begin(),::toupper);
	if(option=="YES")
	{
		cout<<"Enter the point of your choice, Note that points shold be below 10\n>";
		while(1)
		{
			cin>>points;
			if(points<100&&points>0)
			{
			   points=points;
			   break;
			}
			else
			cout<<"Enter in Numbers"<<endl;
		}
		
	}
	while(me!=points&&you!=points)
	{
		cout<<"\nEnter Your choice\n>";
		cin>>your_choice;
		transform(your_choice.begin(),your_choice.end(),your_choice.begin(),::toupper);
		int mychoice=rand()%3;
		string MYCHOICE=game[mychoice];
		cout<<"my choice "<<MYCHOICE<<endl;
		if(MYCHOICE==your_choice){
			//cout<<"My choice also Same"<<endl;
			cout<<"My Score "<<me<<" and your Score "<<you<<endl;
		continue;}
		else if(MYCHOICE=="ROCK"&&your_choice=="SCISSOR")
		me++;
		else if(MYCHOICE=="ROCK"&&your_choice=="PAPER")
		you++;
		else if(MYCHOICE=="SCISSOR"&&your_choice=="PAPER")
		me++;
		else if(MYCHOICE=="PAPER"&&your_choice=="ROCK")
		me++;
		else if(MYCHOICE=="SCISSOR"&&your_choice=="ROCK")
		you++;
		else if(MYCHOICE=="PAPER"&&your_choice=="SCISSOR")
		you++;		
		else
		cout<<"Enter correct choice\n";
		
		cout<<"My Score "<<me<<" and your Score "<<you<<endl;
	}
	if(me>you)
	cout<<"\nHurrre I won the game, Better luck Next Time\n";
	else
	cout<<"\nCongrats You won the game\n";
}
int main()
{
	string game[]={"ROCK","PAPER","SCISSOR"};
	
	string again;
	again="YES";
	cout<<"*****Welcome, Let us play Rock paper Scissor*****\n"<<endl;
	cout<<"Do You Know about The game 'Rock Paper Scissor'"<<endl;
	cout<<"If You know Enter Yes, Else Enter No,I Will let you understand how game Works"<<endl;
	string Enterance;
	cout<<">";
	cin>>Enterance;
	transform(Enterance.begin(),Enterance.end(),Enterance.begin(),::toupper);
	if(Enterance=="NO")
	{
		cout<<"***********************************************************************************\n";
		cout<<"It is basically played by two people, Here one is Me and another is You.\n";
		cout<<"if I show Rock and You show Paper, You get one Point, and Vice Versa"<<endl;
		cout<<"Similarly if I show Scissor and You show Paper, I get the point, and Vice Versa"<<endl;
		cout<<"and If i show Scissor and You show Rock You will get one point, and Vice Versa"<<endl;
		//cout<<"The Maximum Points will be set by Me"<<endl;
		cout<<"***********************************************************************************\n";
		cout<<endl;
	}

	cout<<"Rules for playing this game\n";
	rules();
	/*cout<<"\n\n Are you clear With the rules, if Yes we will start the game else enter No\n";
	string clear;
	cout<<">";
	cin>>clear;
	transform(clear.begin(),clear.end(),clear.begin(),::toupper);
	if(clear=="NO")
	    {
			rules();
			cout<<"\n\nI Think Now You have understood about the rules of the game\n\n";
		}*/
//	cout<<"\n\nI Think Now You have understood about the rules of the game\n\n";
	cout<<"\n\n";
	cout<<"\n***NOTE THAT SPELLINGS MUST BE CORRECT,I AM NOT A TEACHER TO CORRECT YOUR SPELLING MISTAKES***\n"<<endl;
	cout<<"I Promise you that i will Not see your Choice, until i give my Choice\n\n"<<endl;
	
	while(again!="NO")
	{
		startGame(game);	
		cout<<"Do you Want to play again(yes/no)?\n>";
		cin>>again;
		transform(again.begin(),again.end(),again.begin(),::toupper);
	}
	//cout<<"\n\nSorry i recommend You to Learn english First\n"<<endl;
	cout<<"\n\n**********THANK YOU**********"<<endl;
	return 0;
}

