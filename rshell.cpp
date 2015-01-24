#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

void command()
{


}

void connect()
{

}

int main(
	string inp;
	string inp2;
	char* user = getlogin();
	char* host = gethostname();
	char *tok;
	
	cout << user << "@" << host << "$ ";
	getline(inp);

	for(unsigned i = 0; i < inp.size(); ++i)
	{
		if(inp[i] == '#')
			break;
		inp2.push_back(inp[i]);
		
	}
	
	tok = strtok(inp, " ");
	
	//perror("
	tok = strtok(NULL, " ");
}
