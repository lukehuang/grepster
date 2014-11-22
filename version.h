#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Date Version Types
	static const char DATE[] = "22";
	static const char MONTH[] = "11";
	static const char YEAR[] = "2014";
	static const char UBUNTU_VERSION_STYLE[] =  "14.11";
	
	//Software Status
	static const char STATUS[] =  "Alpha";
	static const char STATUS_SHORT[] =  "a";
	
	//Standard Version Type
	static const long MAJOR  = 0;
	static const long MINOR  = 5;
	static const long BUILD  = 501;
	static const long REVISION  = 42;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT  = 1000;
	#define RC_FILEVERSION 0,5,501,42
	#define RC_FILEVERSION_STRING "0, 5, 501, 42\0"
	static const char FULLVERSION_STRING [] = "0.5.501.42";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY  = 1;
	

}
#endif //VERSION_H
