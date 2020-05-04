#include <string.h>

#include "TestString.h"

#pragma warning (disable:4996)

TestString::TestString ()	// the :: is telling the compiler that this method belongs to the class TestString
	{
	NumChars	= 0;
	pChar		= new char [1];
	pChar [0]	= '\0';
	}

TestString::TestString (const char Str [])
	{
	NumChars	= strlen (Str);
	pChar		= new char [NumChars + 1];
	strcpy (pChar, Str);
	}

TestString::TestString (const TestString & Str)
	{
	NumChars	= Str.NumChars;
	pChar		= new char [NumChars + 1];
	strcpy (pChar, Str.pChar);
	}

TestString::~TestString ()	// destructor
	{
	delete [] pChar;
	}
