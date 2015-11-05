//This is a git hub testing environrment for Abertay University

//It is a simple program that you should use to display the output of code that you add
//This is not meant to an explicit programming challenge rather a way to get familiar with version contol so keep code minimal

//////////////////////////     Things to try      /////////////////////////////////////////
//1.Adding a cout statement (comment a name/username to say you added it)
//2.Merge this with the master or branch that has been created
//3.Make Changes to the doStuffFunction so that it returns a new value
//4.Look at version history and changes that have been made
//5.Try adding a new header file with some code 

/////////////////////////    Things to remember      //////////////////////////////////////
//Add comments when commiting to explain what you have changed
//when comminting be sure not to add unnessicary files (debug stuff)
//Live long and Prosper

#include <iostream>

int doStuff(int x, int y);


int main()
{
	std::cout << "Git Hub Test Version 1.0\n";

	int x = 4;
	int y = 7;
	std::cout << "\ndoStuff returns: " << doStuff(x, y) << std::endl;


	std::cin.get();
	
	std::cout<<"I think it works"<<endl;
	std::cout<<"Yes it does" << endl;
	return 0;

}

int doStuff(int x, int y)
{
	return x * y; //changed to multiply x and y
}
