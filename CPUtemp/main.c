// 
// CPU temperature MacOS
// Hudson Schumaker
//
// does not work on apple silicon macs

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	system("sudo powermetrics --samplers smc |grep -i \"CPU die temperature\"");
	return 0; 
}
