// Tom Dailey
// CS142 Assignment 4
// Song data type and test driver

#ifndef _Time_h_
#define _Time_h_

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ostream;
using std::istream;

class Song
{
public:
	friend inline void set(string t, string a);

	Song() : Song("invalid", "none") {}
	Song(string t) : Song(t, "unknown") {}
	Song(string t, string a) : title_(t), artist_(a) {}

	
	string title() const { return title_; }
	string artist() const { return artist_; }

	void set(string t, string a) { title_ = t; artist_ = a; }

private:
	string title_;
	string artist_;
};

inline bool operator==(const Song & song1, const Song & song2){
	return ((song1.title() == song2.title())&&(song1.artist() == song2.artist()));
}

inline std::ostream & operator<<(ostream & out, const Song & song1) { 	
	out << song1.title() << std::endl << song1.artist() << std::endl; 
	return out;
}

inline std::istream & operator>>(istream & in, Song & song1) { 	
	string t;
	std::getline(in, t);
	string a;
	std::getline(in, a);
	song1.set(t,a);
}

#endif
