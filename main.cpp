#include "Headers/Base.h"
#include "Headers/IO.h"
#include "Headers/Words.h"

using namespace MZScript;
using namespace std;

int main(int argc, char** argv) {
	/* Format: 
	 * mzscript -c
	 */
	
	if(argc = 1) ;
	else{
		if(argv[1] == "-c") Base::Comp(argv[2]);
	}
	
	
	return 0;
}
