// Copyright (c) Microsoft Open Technologies, Inc.  All rights reserved.  
// Licensed under the BSD 2-Clause License.  
// See License.txt in the project root for license information.

#include "stdafx.h"

WINUSERAPI
HWINSTA
WINAPI
GetProcessWindowStation(
VOID)
{
    return NULL;

}

WINUSERAPI
HWND
WINAPI
GetDesktopWindow(
VOID)
{
    return NULL;
}


WINUSERAPI
BOOL
WINAPI
GetUserObjectInformationW(
HANDLE hObj,
int nIndex,
PVOID pvInfo,
DWORD nLength,
LPDWORD lpnLengthNeeded
)
{
    UNREFERENCED_PARAMETER(hObj);
    UNREFERENCED_PARAMETER(nIndex);
    UNREFERENCED_PARAMETER(pvInfo);
    UNREFERENCED_PARAMETER(nLength);
    UNREFERENCED_PARAMETER(lpnLengthNeeded);

    return FALSE;
}

WINUSERAPI
int 
WINAPI
MessageBoxA(
__in_opt HWND hwndOwner,
__in_opt LPCSTR lpszText,
__in_opt LPCSTR lpszCaption,
__in UINT wStyle)
{
    UNREFERENCED_PARAMETER(hwndOwner);
    UNREFERENCED_PARAMETER(lpszText);
    UNREFERENCED_PARAMETER(lpszCaption);
    UNREFERENCED_PARAMETER(wStyle);

    return 0;
}

WINUSERAPI
LPSTR
WINAPI 
CharPrevA(
    _In_  LPCSTR lpszStart,
    _In_  LPCSTR lpszCurrent
    )
{
    /*if (lpszCurrent > lpszStart)
    {
    return lpszCurrent--;
    }

    return lpszStart;
    */
    UNREFERENCED_PARAMETER(lpszStart);
    UNREFERENCED_PARAMETER(lpszCurrent);
    return "";
}

WINUSERAPI
int
WINAPI 
LoadStringA(
    _In_opt_  HINSTANCE hInstance,
    _In_      UINT uID,
    _Out_     LPSTR lpBuffer,
    _In_      int nBufferMax)
{
    UNREFERENCED_PARAMETER(hInstance);
    UNREFERENCED_PARAMETER(uID);
    UNREFERENCED_PARAMETER(lpBuffer);
    UNREFERENCED_PARAMETER(nBufferMax);

    return 0;
}

WINUSERAPI
HWND 
WINAPI 
GetLastActivePopup(
    _In_  HWND hWnd
    )
{

    UNREFERENCED_PARAMETER(hWnd);
    return NULL;
}

WINUSERAPI
HWND 
WINAPI 
GetActiveWindow()
{
    return NULL;
}

BOOL WINAPI GetUserObjectInformationA(
    _In_       HANDLE hObj,
    _In_       int nIndex,
    _Out_opt_  PVOID pvInfo,
    _In_       DWORD nLength,
    _Out_opt_  LPDWORD lpnLengthNeeded
    )
{
    UNREFERENCED_PARAMETER(hObj);
    UNREFERENCED_PARAMETER(nIndex);
    UNREFERENCED_PARAMETER(pvInfo);
    UNREFERENCED_PARAMETER(nLength);
    UNREFERENCED_PARAMETER(lpnLengthNeeded);
    return FALSE;
}
