#include <vector>
#include "random.cpp"
#include <iostream>

int main( int argc, const char* argv[] )
{//Test out the Insertion Sort.
	std::vector<unsigned int> randNums = RNG::generateNums( 0, 9, 10 );
	
	std::cout << "Random Numbers:" << std::endl;
	
	for( unsigned int i = 0; i < randNums.size(); i++ )
	{
		std::cout << randNums.at(i) << " ";
	}
	std::cout << std::endl;
	
	return 0;
}
