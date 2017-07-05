

/**** Project Name : Typing Game *
 ***
 **
 *
 **** Created By : Agbonze Prince **
 ***
 **
 *
 **** Purpose : For those who wants to Learn to type **
 ***
 **
 *
 **** AGX innovation ****
 ***
 **
 */




#include <iostream>
#include <cstdlib>
#include <vector>
#include <cstring>
#include <iomanip>
#include <ctime>


using namespace std;

void _panel();
void _display();
void _ifstate();


//main
int main ()
{
  _panel();
}


//panel for program
void _panel()
{
  _display();
}


//working on input and output
void _display()
{
  srand(time(0));		//seeding random;
  string input;
  int correct = 0;
  int incorrect = 0;

  //random list
  string alphabet[] = {"A","a","B","b","C","c","D","d","E","e",
	 	    "F","f","G","g","H","h","I","i","J","j",
		    "K","k","L","l","M","m","N","n","O","o",
		    "P","p","Q","q","R","r","S","s","T","t",
		    "U","u","V","v","W","w","X","x","Y","y","Z","z"};

      //a loop without base
      for (int j=0; ;j++)
      {

	// init rand var
	int i = rand()%52;
   	system("clear");


	// outputing scores
	cout << "\n\n\nCorrect = " << correct << setw(55) 
		<< "Incorrect = " << incorrect <<  endl;

	// getting input
	cout << "\n\n" << endl;
	cout << setw(40) << alphabet[i] << "\n\n"<<setw(39) << "  >>>";
	cin >> input;

	//incrementing scores
   	if (input != alphabet[i])
   	{

     	  incorrect++;
     	  cout << "Incorrect\a" << endl;

   	}
   	else if (input == alphabet[i])
   	{

     	  correct++;
     	  cout << "Correct" << endl;

   	}
	j++;
      }
}
