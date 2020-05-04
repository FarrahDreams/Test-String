#ifndef TEST_STRING_H
#define TEST_STRING_H

class TestString
	{
	public:
		TestString	();		// known as a default constructor
		TestString	(const char []);
		TestString	(const TestString &);	// known as a copy constructor
		~TestString	();
	private:
		char *	pChar;
		int		NumChars;
	};

#endif
