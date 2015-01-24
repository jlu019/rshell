#include <iostream>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

using namespace std;

int main()
{
	string inp;
	string inp2;
	
	size_t len = 200;
	char* user = getlogin();
	char host[len];
	int gt_host = gethostname(host, len);
	if(gt_host == -1)
		perror("host does not exist");
	char *tok;
	
	while(1)
	{
		
		cout << user << "@" << host << "$ ";
		getline(cin, inp);

		for(unsigned i = 0; i < inp.size(); ++i)
		{
			if(inp[i] == '#')
				break;
			inp2.push_back(inp[i]);
			
		}
		for(unsigned i = 1; i < inp2.size(); ++i)
		{
			if(inp2[i] == '&' && inp2[i-1] != ' ')
			{
				inp2.insert(i-1, " ");
				if(inp2[i+1] == '&' && inp2[i+2] != ' ')
				{}
			}
			if(inp2[i] == '|' && inp2[i-1] != ' ')
			{
				inp2.insert(i-1, " ");
				if(inp2[i+1] == '|' && inp2[i+2] != ' ')
				{}
			}

		}	
		//tok = strtok(inp2, " ");
			
		//perror("
		tok = strtok(NULL, " ");
	}
	return 0;
}
