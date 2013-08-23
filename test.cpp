#include <vector>
#include "random.cpp"
#include <iostream>
#include <string> 

template <class T> void printValuesWithSpace( std::vector<T> items )
{//Print off the items in items.
	if( items.size() == 0 )
	{
		std::cerr << "In printValues, trying to print a vector with nothing in it." << std::endl;
		return;
	}

	std::cout << items.at(0);//Print off the first character without a space.

	for( unsigned long i = 1; i < items.size(); i++ )
	{//Print off the last characters.
		std::cout << " " << items.at(i);
	}
}

template <class T> void printValuesNoSpace( std::vector<T> items )
{//Print off the items in items.
	if( items.size() == 0 )
	{
		std::cerr << "In printValues, trying to print a vector with nothing in it." << std::endl;
		return;
	}

	for( unsigned long i = 0; i < items.size(); i++ )
	{//Print off the last characters.
		std::cout << items.at(i);
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
		std::vector<char> randHex = RNG::generateHexVector( length );

		//Generate the random alphanumeric characters.
		std::vector<char> randAlphaNumeric = RNG::generateAlphaNumericVector( length );

		//Generate the random alphanumeric characters.
		std::vector<char> randPrintable = RNG::generateNonWhiteSpacePrintableVector( length );
	
		std::cout << "Random Numbers in between " << min << " and " << max << " inclusive." << std::endl;
		printValuesWithSpace( randNums );
		std::cout << std::endl << std::endl;
	
		std::cout << "Random Hex Number:" << std::endl;
		printValuesNoSpace( randHex );
		std::cout << std::endl << std::endl;
	
		std::cout << "Random AlphaNumeric Characters:" << std::endl;
		printValuesNoSpace( randAlphaNumeric );
		std::cout << std::endl << std::endl;
	
		std::cout << "Random Printable Characters:" << std::endl;
		printValuesNoSpace( randPrintable );
		std::cout << std::endl;
	}
	
	return 0;
}
