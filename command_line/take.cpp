#include <iostream>
#include <stdio.h>
#include <stdlib.h>     /* atoi */
using namespace std;

int main(int argc, char** argv)
{
	int sum = 0;
	char ch = *argv[2];
	sum = atoi(argv[1]) - atoi(argv[3]);
	switch(ch)
	{
		case '-' :  sum = (atoi(argv[1]) - atoi(argv[3]));
			cout << sum << endl;
	}
	
    return 0;
}

