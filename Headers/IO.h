#include "inc.h"

namespace MZScript{
	namespace IO{
		string input(string _File){
			ifstream ifs;
			ifs.open(_File, iosbase::in);
			
			string str = NULL''
			ifs >> str;
			ifs.close();
			return str;
		}
	
		bool output(string _File, string _str){
			try{
				ofstream ofs;
				ofs.open(_File, ios_base::out);
				
				ofs << _str;
			}
			catch{ofs.close();return false;}
			
			ofs.close();
			return true;
		}
		
		void test(){
			std::cout<<"123454";
		}
		
	}
}
