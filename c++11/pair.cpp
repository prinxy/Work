#include <iostream>
#include <utility>	// guess this is the header file for swap
#include <string>

using namespace std;

int main()
{
		// I just learnt this, will note its usefulness


  pair <int, string> p1, p2;	// i dont know if this is a vector...


  p1= make_pair (10, "test");	// guess this makes pairs
  p2.swap(p1);		// guess this takes the content of p1 so it
  			// can be swappable
		

  		// this is just to print out p2
  cout << "( " << p2.first << ", " << p2.second << " )" << endl;
}
