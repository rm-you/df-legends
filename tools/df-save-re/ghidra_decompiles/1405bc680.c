// FUN_1405bc680 @ 1405bc680
// callees:
//   -> EXTERNAL:0000006c FindFirstFileA
//   -> 140051cf0 FUN_140051cf0
//   -> EXTERNAL:0000006b FindNextFileA
//   -> EXTERNAL:0000006a FindClose
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405bc680(LPCSTR param_1,undefined8 param_2)

{
  int iVar1;
  HANDLE hFindFile;
  undefined1 auStack_178 [32];
  _WIN32_FIND_DATAA local_158;
  ulonglong local_18;
  
  local_18 = DAT_1410b5008 ^ (ulonglong)auStack_178;
  hFindFile = FindFirstFileA(param_1,&local_158);
  if (hFindFile != (HANDLE)0xffffffffffffffff) {
    if ((((local_158.cFileName[0] != DAT_140e597bc) || (local_158.cFileName[1] != DAT_140e597bd)) &&
        ((local_158.cFileName[0] != DAT_140edfc18 ||
         ((local_158.cFileName[1] != DAT_140edfc19 || (local_158.cFileName[2] != DAT_140edfc1a))))))
       && (((byte)local_158.dwFileAttributes & 0x10) == 0)) {
      FUN_140051cf0(param_2,local_158.cFileName);
    }
    iVar1 = FindNextFileA(hFindFile,&local_158);
    while (iVar1 != 0) {
      if (((local_158.cFileName[0] != DAT_140e597bc) || (local_158.cFileName[1] != DAT_140e597bd))
         && (((local_158.cFileName[0] != DAT_140edfc18 ||
              ((local_158.cFileName[1] != DAT_140edfc19 || (local_158.cFileName[2] != DAT_140edfc1a)
               ))) && (((byte)local_158.dwFileAttributes & 0x10) == 0)))) {
        FUN_140051cf0(param_2,local_158.cFileName);
      }
      iVar1 = FindNextFileA(hFindFile,&local_158);
    }
    FindClose(hFindFile);
  }
  return;
}

