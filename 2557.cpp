
//1 (컴파일에러 - #includ에 마지막에 e빠짐, -> 오타)

#includ <stdio.h>

//int main{
//
//printf("Hello World!");
//
//return 0;
//
//}
//
////2 (컴파일에러 - #includ에 마지막에 e빠짐)
//
////#includ <stdio.h>
//
////int main() 
//{ printf("Hello World!\n"); return 0; }

//3 (성공)

#include <stdio.h>

int main() { printf("Hello World!\n"); return 0; }