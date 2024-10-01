#include <stdio.h>

int main(){
	char s[100];
	
	scanf("%[^\n]", s); getchar();
	
	printf("#include <stdio.h>\nint main()\n{\n    printf(\"%s%s\,\"%s\");\n    return 0;\n}\n","%s","\\n\"", s);
	
	return 0;
	
}
