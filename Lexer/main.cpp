#include <iostream>
#include <fstream>
#include <sstream>
#include "lexer.h"

using namespace std;

int main(int argc, char* argv[]) {
	//OPEN FILES
	ifstream in(argv[1]);
	//ofstream out(argv[2]); //use this if you want to output to a file

	Lexer lex;
	lex.scan(in);

	cout << lex.printTokens() << "Total Tokens = " << lex.getNumTokens(); 
	//took away endl because our professor doesn't want it there, even though that is standard practice

	in.close();
	//out.close(); //if using output file remember to change cout to out

	return 0;
}
