#include "Headers/Base.h"
#include "Headers/IO.h"
#include "Headers/Words.h"

using namespace MZScript;
using namespace std;

/*
 * MaziScript Complier
 * Format:
 		mazi FileName(.mazi) [-c] [-t]
 * -c Output the whole novel document(*.txt)
 * -t Output temp file.(if -c doesn't exist, it won't work.)
*/ 

int main(int argc, char** argv) {
	if(argc == 1) {
		cout << desc;
	}
	else{	
		string _fileName = argv[1];
		IO::mzFile x = IO::input(_fileName);
		
		if(!x.exist)cout<<"File doesn't exist!";
		cout << x.content;
	}
	
	return 0;
}
