// 
// FAN speed MacOS
// Hudson Schumaker
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	system("sudo powermetrics --samplers smc |grep -i \"FAN\"");
	return 0; 
}
