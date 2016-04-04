#include "inc.h"

namespace MZScript{
	
	#define desc "MaziScript Complier\nFormat:\n\tmazi FileName(.mazi) [-c] [-t]\n-c Output the whole novel document(*.txt)\n-t Output temp file.(if -c doesn't exist, it won't work.)\n\n"
	
	char getChar(){
		return getchar();
	}
}
