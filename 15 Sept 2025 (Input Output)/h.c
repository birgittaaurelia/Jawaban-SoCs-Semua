#include <stdio.h>
int main() 
{
  char ss[101];
  scanf("%[^\n]",ss);
  printf("#include <stdio.h>\n");
  printf("int main()\n");
  printf("{\n");
  printf("    printf(\"%%s\\n\",\"%s\");\n", ss);
  printf("    return 0;\n");
  printf("}\n");
  return 0;
}

/*#include <stdio.h>
int main() 
{
    printf("Hello, World!\n");
    return 0;
}*/
