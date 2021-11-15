// 
// TCP connections MacOS
// Hudson Schumaker
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	system("sudo lsof -P -i TCP -s TCP:LISTEN");
	return 0; 
}
