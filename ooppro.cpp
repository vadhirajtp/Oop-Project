#include<iostream> 
using namespace std; 
template<class X,class Y>
void remuneration(X a,Y b)
{ 
    cout<<"\n remuneration with Bonus = "<<a+b<<endl;
}
class Player 
{
	protected:
	int age;
	string name;
	string gameType;
	int a;
    double b;
	public:
		
		virtual void displayInfo() 
		{
			cout << "Player class info" << endl;
		}
		void playerInfo() 
		{	
					
			cout << "Name :" << name  << " " << "Age :" << age << " " << "Game Type:" << gameType << endl;
			getsalInfo();
		}
		void setInfo(string str) 
		{
			name = str;
			cout << "Name :" << name << endl;
		}
		void setInfo(string str, int a) 
		{
			age = a;
			name = str;
			//cout << "Name :" << name  << " " << "Age :" << age << endl;
		}
		void setInfo(string str, int a, string game) //function overloading
		{
			age = a;
			name = str;
			gameType = game;
			//cout << "Name :" << name  << " " << "Age :" << age << " " << "Game Type:" << gameType << endl;
		}
		void getsalInfo()
    	{
	        cout<<"Base salary:- ";
	        cin>>a;
	        cout<<"Bonus:- ";
	        cin>>b;
	        remuneration(a,b);
   		 }

};
class Footballer : public Player //use of Inheritance
{
	protected:
		int goalScore;
		double scoringAvg;
	public :
		void displayInfo() 
		{
				cout << "Footballer class info" << endl;
		}
		void setFootballerInfo(int numOfGoal, double avgGoal) 
		{
			goalScore = numOfGoal;
			scoringAvg = avgGoal;
		}
		
		void footballerInfo() 
		{	
			cout << "Name:" << name << " " << "Age:" << age << " " << "Scored Goal:" << goalScore << " " << "Scoring Avg:" << scoringAvg<< endl;
				getsalInfo();
		}
		
};
class Cricketer : public Player //inheritance
{
	protected:
		int runScored;
		double battingAvg;
		int wicketTaken;
		double bowlingAvg;
	public :
		void displayInfo() 
		{
			cout << "Cricketer class info" << endl;
		}
		void setCricketerInfo(int run, double avgRun, int wicket, double avgWicket) 
		{
			runScored = run;
			battingAvg = avgRun;
			wicketTaken = wicket;
			bowlingAvg = avgWicket;
		}
		void cricketerInfo() 		
		{	
			
			cout << "Name:" << name << " " << "Age:" << age << " " << "Run scored:" << runScored << " " << "Batting Avg:" << (int)battingAvg<< " " << "Wicket Taken:" << wicketTaken << " " << "Bowling Avg:" << bowlingAvg <<endl;
				getsalInfo();
			
		}
};
int main() 
{
	Player p1;
	p1.displayInfo();
	p1.setInfo("P V Sindhu", 26);
	p1.setInfo("Nadal", 40,"Tennis"); // use of function overloading
	p1.playerInfo();
	Footballer f1;
	f1.displayInfo();
	f1.setInfo("C Ronaldo", 25);
	f1.setFootballerInfo(20, 0.8);
	f1.footballerInfo();
	Cricketer c1;
	c1.displayInfo();
	c1.setInfo("Dhoni",38);
	c1.setCricketerInfo(15000,40.5,320,30.4);
	c1.cricketerInfo();
	system("pause");
	return 0;
}
