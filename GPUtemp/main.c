// 
// GPU temperature MacOS
// Hudson Schumaker
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	system("sudo powermetrics --samplers smc |grep -i \"GPU die temperature\"");
	return 0; 
}
