#include "pch.h"

void Push(int *a) {
	a = (int*)realloc(a,sizeof(*a) + sizeof(int));
}