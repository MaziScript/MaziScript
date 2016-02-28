#include "inc.h"
//using namespace std;
using std::ifstream;
using std::ofstream;
using std::cout;

namespace MZScript{
	namespace IO{
		std::string input(std::string _File){
			ifstream ifs;
			ifs.open(_File.c_str());
			if(!ifs.good()) return NULL;
			
			char c;
			std::string ans;
			while(!ifs.eof()){
				ifs >> c;
				ans += c;
			}
			ifs.close();
			return ans.substr(0, ans.length()-1);
		}
	
		bool output(std::string _File, std::string _str){
			ofstream ofs;
			ofs.open(_File.c_str());
			
			ofs << _str;
			
			ofs.close();
			return true;
		}
		
		void test(){
			std::cout<<"123454";
		}
		
	}
}
