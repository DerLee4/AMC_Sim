//<iostream>: cin, cout

#include <iostream>

using namespace std;

class BoxOffice
{
public:
  void options()
  {
    int choice = 0;
  
    while(true)
    {
      cout << "Choose an action." << endl;
      cout << "(1) Buy tickets at box office." << endl;
      cout << "(2) Present electronic ticket on phone to greeter." << endl;
	  cout << "(3) Sneak in." << endl;
      cin >> choice;

      //if chioce is between 1 and 3 exit user menu
      if (choice >= 1 && choice <= 3)
        break;

      cout << "Please choose between 1 and 3." << endl;
    
    } //while user chooses invalid choice
	
	while(choice)
    {
      switch(choice)
      {
        case 1: cout << "What movie would you like to watch?" << endl; choice = 4; 
        case 2: cout << "Your house is right down the hall and the bathrooms are also located there." << endl; choice = 4; 
		case 3: cout << "You are now banned from AMC Theatres." << endl; choice = 4; 
      } //switch for 1 to 3
    } //while choice is 1 to 3
	
  } //options(): options presented when you first go to box office
  
  void movies()
  {
	  
  }
  
};  
 


int main()
{
  cout << "Welcome to AMC Theatres." << endl;
  
  cout << "------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
  
  BoxOffice guest;
  guest.options();
  return 0;

}  
