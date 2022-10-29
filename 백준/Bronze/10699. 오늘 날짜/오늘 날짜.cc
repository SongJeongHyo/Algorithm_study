#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <ctime>
using namespace std;

int main() {
	time_t timer = time(NULL);
	struct tm* t = localtime(&timer);

	printf("%d-", t->tm_year + 1900);
	printf("%02d-", t->tm_mon + 1);
	printf("%d", t->tm_mday);

	return 0;
}