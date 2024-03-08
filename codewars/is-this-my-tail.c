// Is this my tail?
// https://www.codewars.com/kata/56f695399400f5d9ef000af5
// 8kyu, Clang 8 / C18

#include <string.h>

int correct_tail(const char *body, const char *tail) {
	return body[strlen(body) - 1] == *tail;
}
