#include "parserfile.h"

ParserFile::ParserFile(char * pathfile) {
  std::string linha;
  std::ifstream myfile (pathfile); 

  if (myfile.is_open())
  {
    while (! myfile.eof() ) 
    {
      getline (myfile,linha);

	  int number = std::stoi(linha);
	  this->dados.push_back(number);
    }
    myfile.close();
  }

}

ParserFile::~ParserFile() {
	// delete []dados;
}
