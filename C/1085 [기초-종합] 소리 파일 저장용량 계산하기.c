#include<stdio.h>

int main(void) {
	int hz, bit, channel, sec;
	
	
	scanf("%d %d %d %d", &hz, &bit, &channel, &sec);
	
	double size = (hz * bit * channel * sec);
	size /= (1024 * 1024 * 8);
	
	printf("%.1lf MB", size);
	
	
	return 0;
}
