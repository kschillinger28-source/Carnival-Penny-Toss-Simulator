#include<iostream>
#include<iomanip>

using namespace std;

const int r = 5; // array sizen
const int c = 5;

int main()
{
	srand(time(NULL)); //makes the computer random 
	
	string array[r][c]; //starts the string for the prizes
	string array1[r][c]; //starts the string for the penny throws
	
	int row; //variables for array 
	int col;
	int points;
	int Orangutan = 0; //prizes 
	int Gorilla = 0;
	int Monkey = 0;
	int Hut = 0;
	int DisguisedFace = 0;
	
	for(int i = 0; i < r; i++) //for loop to fill the string with red circles for the prize board
	{
		for(int j = 0; j < c; j++)
		{
			array[i][j] = " ⭕ "; 
		}
	}
	for(int i = 0; i < r; i++) //for loop to fill the string with red circles for the coin board 
	{
		for(int j = 0; j < c; j++)
		{
			array1[i][j] = " ⭕ "; 
		}
	}
	
	
	

	
	for(int i = 0; i < 3; i++) //a loop that places a prize on the board repeats 3 times 
	{	
		row = rand()%5; //variables to make the random coordinates to place the prizes 
		col = rand()%5;
		if(array[row][col] == " ⭕ ")
		{ 							//if the random place is a red circle, it will put the price there
			array[row][col] = " 🦧 ";
			}
				else
			{
			i--; //if the circle has a prize on it, the loop repeats
		}
		
	}
	
	for(int i = 0; i < 3; i++)//a loop that places a prize on the board repeats 3 times 
	{	
		row = rand()%5;
		col = rand()%5;
		if(array[row][col] == " ⭕ ")
		{ //if the random place is a red circle, it put the price there
			array[row][col] = "🦍";
			}
				else
			{
			i--;//if the circle has a prize on it, the loop repeats
		}
		
	}
	
	for(int i = 0; i < 3; i++)//a loop that places a prize on the board repeats 3 times 
	{	
		row = rand()%5;
		col = rand()%5;
		if(array[row][col] == " ⭕ ")
		{//if the random place is a red circle, it will put the price there
			array[row][col] = " 🐒 ";
			}
				else
			{
			i--; //if the circle has a prize on it, the loop repeats
		}
		
	}
	
	for(int i = 0; i < 3; i++)//a loop that places a prize on the board repeats 3 times 
	{	
		row = rand()%5;
		col = rand()%5;
		if(array[row][col] == " ⭕ ")
		{//if the random place is a red circle, it will put the price there
			array[row][col] = " 🛖 ";
			}
				else
			{
			i--; //if the circle has a prize on i,t the loop repeats
		}
		
	}
	
	for(int i = 0; i < 3; i++)//a loop that places a prize on the board repeats 3 times 
	{	
		row = rand()%5;
		col = rand()%5;
		if(array[row][col] == " ⭕ ")
		{ //if the random place is a red circle, it will put the price there
			array[row][col] = " 🥸 ";
			}
				else
			{
			i--; //if the circle has a prize on it the loop repeats
		}
		
	}
	
	for(int i = 0; i < 10; i++) //tosses 10 pennies onto the board, 5 random on the columns and five random of the rows, allowing you to hit the same prize more than once 
	{
		row = rand()%5;
		col = rand()%5;
		
		array1[row][col] = " 🪙 "; // fill the second array with coins 
	}
	
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			if((array[i][j] == " 🦧 ") && array1[i][j] == " 🪙 ") //if a penny is and a prize on the same circle then it counts towards 1 of 3 of those prizes 
			{
				Orangutan = Orangutan + 1;
			}
			if(array[i][j] == " 🦍 " && array1[i][j] == " 🪙 ")
			{
				Gorilla = Gorilla + 1;
			}
			if(array[i][j] == " 🐒 " && array1[i][j] == " 🪙 ")
			{
				Monkey = Monkey +1;
			}
			if(array[i][j] == " 🛖 " && array1[i][j] == " 🪙 ")
			{
				Hut = Hut +1;
			}
			if(array[i][j] == " 🥸 " && array1[i][j] == " 🪙 ")
			{
				DisguisedFace = DisguisedFace +1;
			}
		}
		
	}
	
	
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			cout << setw(3) << array[i][j]; // outputing the prize array 
		}
		
		cout << endl;
	}
		cout << endl << endl; // space out the arrays 
	
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			cout << setw(3) << array1[i][j]; //out put the array with proper spacing 
		}
		cout << endl;
	}
	//if you toss a penny on all three prizes, you get them 
	if(Orangutan == 3)
	{
		cout << "You covered 3 of the Orangutan! You get a pet Orangutan!" << endl; 
	}
	
	if(Gorilla == 3)
	{
		cout << "You covered 3 of the Gorilla! You get a pet Gorilla!" << endl;
	}
	
	if(Monkey == 3)
	{
		cout << "You covered 3 of the Monkey! You get a pet Monkey!" << endl;
	}
	
	if(Hut == 3)
	{
		cout << "You covered 3 of the Hut! You get to live in a Hut for the rest of your life!" << endl;
	}
	
	if(DisguisedFace  == 3)
	{
		cout << "You covered 3 of the Disguised Face! You have to wear a Disguised Face for the rest of your life" << endl;
	}
	
	if(Orangutan < 3 && Gorilla < 3 && Monkey < 3 && Hut < 3 && DisguisedFace < 3) //checking if you didn't win anything 
	{
		cout << "You get nothing!!! YOU LOSE!!" << endl;
	}
		
	
return 0;
}
