#include <iostream>
using namespace std;

int main (void) {   
    
	float x = 0;
	cin >> x;
	int y = x;
	if ( y == x){
	   if ( y % 2 ==0)
	   cout << "Even";
	   else
	   cout << "Odd";
	}
	else 
	   cout << "Nonint";
return 0;

}
