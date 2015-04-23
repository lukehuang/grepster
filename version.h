#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Date Version Types
	static const char DATE[] = "23";
	static const char MONTH[] = "04";
	static const char YEAR[] = "2015";
	static const char UBUNTU_VERSION_STYLE[] =  "15.04";
	
	//Software Status
	static const char STATUS[] =  "Alpha";
	static const char STATUS_SHORT[] =  "a";
	
	//Standard Version Type
	static const long MAJOR  = 2;
	static const long MINOR  = 7;
	static const long BUILD  = 99;
	static const long REVISION  = 20;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT  = 5223;
	#define RC_FILEVERSION 2,7,99,20
	#define RC_FILEVERSION_STRING "2, 7, 99, 20\0"
	static const char FULLVERSION_STRING [] = "2.7.99.20";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY  = 15;
	

}
#endif //VERSION_H
