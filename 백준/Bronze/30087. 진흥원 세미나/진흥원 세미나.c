#include <stdio.h>
#include <string.h>
int main(){
	int n;
	char String[101]={};
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%s",String);
		if (!strcmp(String,"Algorithm")) printf("204\n");
		else if (!strcmp(String,"DataAnalysis")) printf("207\n");
		else if (!strcmp(String,"ArtificialIntelligence")) printf("302\n");
		else if (!strcmp(String,"CyberSecurity")) printf("B101\n");
		else if (!strcmp(String,"Network")) printf("303\n");
		else if (!strcmp(String,"Startup")) printf("501\n");
		else printf("105\n");
	}
	return 0;
}