
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int findThirdCommaIndex(const char* s, int i, int count) {

	if (s[i] != '\0') {
		if (s[i] == ',') {
			count++;
			if (count == 3) {
				return i;
			}
		}
		
		return findThirdCommaIndex(s, i + 1, count);
	}

	return -1;
}
char* Change(char* dest, const char* str, char* t, int i)
{
	if (str[i] != 0)
	{
		if (str[i] == ',')
		{
			strcat(t, "**");
			return Change(dest, str, t + 2, i + 1);
		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
			return Change(dest, str, t, i);
		}
	}
	else
	{
		*t++ = str[i++];
		*t++ = str[i++];
		*t = '\0';
		return dest;
	}
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "Index of third comma is " << findThirdCommaIndex(str, 0, 0) << endl;
	char* dest1 = new char[151];
	dest1[0] = '\0';
	char* dest2;
	dest2 = Change(dest1, str, dest1, 0);
	cout << "Modified string (param) : " << dest1 << endl;
	cout << "Modified string (result): " << dest2 << endl;
	return 0;
}
