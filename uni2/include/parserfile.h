#ifndef PARSERFILE_H
#define PARSERFILE_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class ParserFile
{
public:
	std::vector <int> dados;
	ParserFile(char *);
	~ParserFile();
	
};

#endif