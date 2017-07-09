// :: Basic things that have changed which should be noted
// :: List



#include <iostream>
#include <vector>			// :: vector
#include <list>				// :: list

using namespace std;


int main ()
{
   vector <string> names = {"john", "pardi", "sarah", "Gold", "james"};
   

   		 	     // :: FOR LOOP
			     // ----------|
   cout << "looping through vectors \n\n";
   for (auto _name : names)
	   cout << _name << "\n";
   cout << endl;




   			     // :: LIST
			     // ----------|

   			   // list initializers
   list <char> letters = {'S', 'U', 'N', 'D', 'A', 'Y'};
   cout << "Working with List\n" << endl;



   			    // :: ( list <type> var)
			    // :: var.front "prints first element"
			    // :: var.back "prints last element"

   if (!letters.empty())
   {
     cout << "The last character is : " << letters.back() << endl;
     cout << "The first character is : " << letters.front() << endl;
   }


   			// :: Printing everything using for loop
			// ------------------------------------|
   cout << endl;
   for (auto _letters : letters)
	   cout << _letters;
   cout << endl;






}
