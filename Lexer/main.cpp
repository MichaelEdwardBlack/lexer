#include <iostream>
#include <fstream>
#include <sstream>
#include "lexer.h"

using namespace std;

int main(int argc, char* argv[]) {
	//OPEN FILES
	ifstream in(argv[1]);
	ofstream out(argv[2]);

	Lexer lex;
	lex.scan(in);

	out << lex.printTokens() << "Total Tokens: " << lex.getNumTokens();

	in.close();
	out.close();

	return 0;
}