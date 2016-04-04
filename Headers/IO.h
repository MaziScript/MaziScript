#include "inc.h"
//using namespace std;
using std::ifstream;
using std::ofstream;
using std::cout;

namespace MZScript{
	namespace IO{
		typedef struct{
			std::string _fileName;
			
			bool exist;
			std::string content;
			
		}mzFile;
		
		
		mzFile input(std::string _File){
			//I think i'd like to rewrite it later.
			//This function is based on mzFile and this structure includes three variables.
			//mzFile is the base file format in MaziScript.
			//I think that i must learn File IO in C++ Primer= =
			
			//Description
			//This function gets a string typed variable and then returns a mzFile type variable.
			//(Perhaps my English is really poor)
			//If the file doesn't exist, the maFile.exist will be false.
			//Else, the maFile will return {fileName, true, fileContent}.
			
			//Perhaps the File Encoding should be considerred?! 
			//Default UTF-8?(Maybe it's OK.)
			
			ifstream ifs;
			mzFile x;
			x._fileName = _File;
			try{
				ifs.open(_File.c_str());
				//if(!ifs.good()) return NULL;
				char c;
				std::string ans;
				while(!ifs.eof()){
					ifs >> c;
					ans += c;
				}
				ifs.close();
				
				x.content = ans.substr(0, ans.length()-1);
				x.exist = true;
			}
			catch(std::string err){
				std::cout<<err;
				x.content = "";
				x.exist = false;
			}
			return x;
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
