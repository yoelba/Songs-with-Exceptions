// Tom Dailey
// CS142 Assignment 4
// Song data type and test driver

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ostream;
using std::istream;
using std::getline;

#include <string>
using std::string;

int main()
{
	Song song1;
	Song song3("Yesterday");
	Song song4("Hey Jude", "The Beatles");
	
	try { Song5("GARRY, Miles", ""); song6("Hey Jack", "Don Drapper"); }
	catch (const SongError & e) {
		cout << "Song initialization could not complete (" << e.what()
		<< ")\n";
	}
	
	if (song1 == song3) { cout << "They're Equal" << endl; }
	
	
	return 0;
}
