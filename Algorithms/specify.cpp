#include <iostream>

int main(){
	char c;
	unsigned char cu;
	int i;
	unsigned int iu;
	short int is;
	short iis;
	unsigned short int isu;
	long int il;
	long iil;
	unsigned long int ilu;
	unsigned long iilu;
	float f;
	double d;
	long double ld;

	std::cout 
		<< "\n char = " << sizeof(c)
		<< "\n unsigned char = "  << sizeof(cu)
		<< "\n int = " << sizeof(i)
		<< "\n unsigned int = " << sizeof(iu)
		<< "\n short = " << sizeof(is)
		<< "\n unsigned short  = " << sizeof(isu)
		<< "\n long = " << sizeof(il)
		<< "\n unsigned long = " << sizeof(ilu)
		<< "\n float = " << sizeof(f)
		<< "\n double = " << sizeof(d)
		<< "\n long double = " << sizeof(ld)
		<< std::endl;
}
 