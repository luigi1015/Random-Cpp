#include <vector>
#include "random.cpp"
#include <iostream>
#include <string> 

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
		
		std::vector<unsigned long> randNums = RNG::generateNums( min, max, length );
	
		std::cout << "Random Numbers:" << std::endl;
	
		for( unsigned long i = 0; i < randNums.size(); i++ )
		{
			std::cout << randNums.at(i) << " ";
		}
		std::cout << std::endl;
	}
	
	return 0;
}
