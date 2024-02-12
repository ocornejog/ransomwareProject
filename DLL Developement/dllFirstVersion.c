#include <windows.h>

BOOL WINAPI
DllMain (HANDLE hDll, DWORD dwReason, LPVOID lpReserved){
   switch (dwReason)
   {
    case DLL_PROCESS_ATTACH:
        MessageBox(NULL,
        "YOU GOT PWNED",
        "Youcef",
        MB_ICONERROR | MB_OK

        );
    break;
   }
    return TRUE;
}