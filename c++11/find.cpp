#include <iostream>
#include <algorithm>	// i guess this call the end and begin
#include <iterator>	// this calls the find function i guess
#include <vector>	// this helps to create vectors of string


using namespace std;


int main()
{
		// @param 1				<-----|
		//
		// initialing vectors of string
		// this is gotten from the vector header file 
		
   vector <string> v = {"Rat", "Bee", "Bugs"};


   		// @param 2				<------|
		//
		// To find an entity from within the vector of string
		// initialized above  and it states "if Cat is found
		// "between the beginning and end of V while find is
		// "not equal to the end of V vector, Output Cat found
		// " in V" thats the simple logic

   if (find (begin(v), end(v), "Cat") != end(v))
   {
      cout << "found a Cat in v !" << endl;
   }


   		// visit @param 1 above...
		// -----------------------
		// 			--
	
   vector <string> name = {"Tracy", "Laurel", "Tuna"};


   		// visit @param 2 above...
		// -----------------------
		// 			--

   if (find (begin (name), end(name), "Laurel") != end(name))
   {
      cout << "Found a Laurel in name !!!" << endl;
   }
}
