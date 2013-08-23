#include <vector>
#include "random.cpp"
#include <iostream>
#include <string> 

template <class T> void printValues( std::vector<T> items )
{//Print off the items in items.
	if( items.size() == 0 )
	{
		std::cerr << "In printValues, trying to print a vector with nothing in it." << endl;
		break;
	}

	std::cout << randNums.at(0);//Print off the first character without a space.

	for( unsigned long i = 1; i < randNums.size(); i++ )
	{//Print off the last characters.
		std::cout << " " << randNums.at(i);
	}
}

int main( int argc, const char* argv[] )
{//Test out the Random Number Generator.
	if( argc != 4 )
	{
		std::cerr << "Usage: " << argv[0] << " min max #ofNums" << std::endl;
	}
	else
	{
		unsigned long min = std::stoul( argv[1] );
		unsigned long max = std::stoul( argv[2] );
		unsigned long length = std::stoul( argv[3] );
		
		//Generate the random unsigned integers between min and max.
		std::vector<unsigned long> randNums = RNG::generateNums( min, max, length );

		//Generate the random hex characters.
		std::vector<char> randHex = RNG::generateHexString( length );
	
		std::cout << "Random Numbers:" << std::endl;
		printValues( randNums );
		std::cout << std::endl;
	
		std::cout << "Random Hex Number:" << std::endl;
		printValues( randHex );
		std::cout << std::endl;
	}
	
	return 0;
}
