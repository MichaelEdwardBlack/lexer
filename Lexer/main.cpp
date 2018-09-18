#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char* argv[]) {
	//OPEN FILE/CHECK ERRORS
	ifstream in(argv[1]);
	ofstream out(argv[2]);


	in.close();
	out.close();

	return 0;
}