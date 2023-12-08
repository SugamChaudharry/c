#include <stdio.h>
#include <windows.h>

int main() {
    while (1) {
        SYSTEMTIME st;
        GetLocalTime(&st);

        printf("%02d:%02d:%02d\r", st.wHour, st.wMinute, st.wSecond);
        fflush(stdout);

        Sleep(1000); // Sleep for one second
    }

    return 0;
}
