// C4 P8 Inline Functions
// Demonstrates inline function

#include <iostream> 
using namespace std; 
int first,second,addition,subtract,multiply;
float divide;
void getValues(); 
void addingValues(); 
void subtractValues(); 
void multiplyValues(); 
void divideValues(); 

inline void getValues() 
{ 
	cout << "\nPlease enter a value:"; 
	cin >> first;
	cout << "Now enter another value:"; 
	cin >> second; 
}

inline void addingValues() 
{ 
	addition = first + second; 
	cout << "\nMario's strength with a Rainbow Star: " << first + second; 
}

inline void subtractValues() 
{ 
	subtract = first - second; 
	cout << "\nMario's strength with a Blue Shell: " << first - second; 
} 

inline void multiplyValues() 
{ 
	multiply = first * second; 
	cout << "\nMario's strength with a Fire Flower: " << first * second; 
} 

inline void divideValues() 
{ 
	divide = first / second; 
	cout <<"\nMario's strength with a Boo Mushroom: "<< first / second; 
} 

inline void lifeCount(int x)
{
    int life = 1; 
    
    for(int i=1; i <= x; i++)
    {
        life = life * i;
    }
    cout<<"Mario has " << life << " life(s) " << endl;
}

int main() 
{ 
	int input;
	cout << "* * Super Mario: C++ Edition * *";
	cout << "\n\nQuick! You must help Mario!";
	getValues();
	cout << string(40, '-');
	addingValues(); 
	subtractValues(); 
	multiplyValues(); 
	divideValues();
	cout << "\n" << string(40, '-');
	cout << "\nPlease enter a value: ";
    cin >> input;
    for(int i=1; i <= input; i++)
    {
        lifeCount(i);
    }
	cout << "\n* Thanks for playing *";
	return 0; 
}