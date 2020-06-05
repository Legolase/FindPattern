#include <iostream>

using namespace std;

int str(const char* text, const char* pattern) { // ���������� ������ ������� text, � �������� ���������� ���������� � pattern
    size_t tsize = strlen(text), psize = strlen(pattern);
    
    if (psize <= tsize) {
        int cur{}; //counter - �������� ���-�� ���������� �������� � ������� ������� cur
        for (size_t i = 0; i < tsize; ++i) {
            if (text[i] != pattern[i - cur])
                cur = i + 1;
            if (i - cur + 1 == psize)
                return cur;
        }
        return -1;
    }
    else
        return -1;
}

int main()
{
    char c[] = "120367265", f[] = "65";
    cout << str(c, f);
}