#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//枚举的定义和使用 就是int 
enum CommentType
{
	TEXT=11,TEXT_IMAGE,IMAGE
};


void main667() {
	CommentType commentType = TEXT;
	CommentType commentType2 = TEXT_IMAGE;
	CommentType commentType3 = IMAGE;
	printf("%d,%d,%d \n",commentType,commentType2,commentType3);
	getchar();
}