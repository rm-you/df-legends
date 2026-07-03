// FUN_1405bc3f0 @ 1405bc3f0
// callees:
//   -> EXTERNAL:0000006c FindFirstFileA
//   -> 140dfb6d8 operator_new
//   -> 14004ffe0 FUN_14004ffe0
//   -> EXTERNAL:0000006b FindNextFileA
//   -> 140050410 FUN_140050410
//   -> EXTERNAL:0000006a FindClose
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405bc3f0(LPCSTR param_1,ulonglong *param_2)

{
  char cVar1;
  void **ppvVar2;
  void **ppvVar3;
  int iVar4;
  HANDLE hFindFile;
  longlong lVar5;
  void *pvVar6;
  longlong lVar7;
  CHAR *pCVar8;
  undefined1 auStack_198 [32];
  void *local_178 [2];
  _WIN32_FIND_DATAA local_168;
  ulonglong local_28;
  
  local_28 = DAT_1410b5008 ^ (ulonglong)auStack_198;
  hFindFile = FindFirstFileA(param_1,&local_168);
  if (hFindFile != (HANDLE)0xffffffffffffffff) {
    if (((local_168.cFileName[0] != DAT_140e597bc) || (local_168.cFileName[1] != DAT_140e597bd)) &&
       ((local_168.cFileName[0] != DAT_140edfc18 ||
        ((local_168.cFileName[1] != DAT_140edfc19 || (local_168.cFileName[2] != DAT_140edfc1a))))))
    {
      lVar5 = 0;
      do {
        lVar7 = lVar5 + 1;
        if (local_168.cFileName[lVar5] != (&DAT_140ee5f54)[lVar5]) {
          if (((byte)local_168.dwFileAttributes & 0x10) == 0) {
            lVar5 = -1;
            do {
              lVar7 = lVar5;
              lVar5 = lVar7 + 1;
            } while (local_168.cFileName[lVar7 + 1] != '\0');
            local_178[0] = operator_new(lVar7 + 2);
            pCVar8 = local_168.cFileName;
            do {
              cVar1 = *pCVar8;
              pCVar8[(longlong)local_178[0] - (longlong)local_168.cFileName] = cVar1;
              pCVar8 = pCVar8 + 1;
            } while (cVar1 != '\0');
            FUN_14004ffe0(param_2,local_178);
          }
          break;
        }
        lVar5 = lVar7;
      } while (lVar7 != 5);
    }
    iVar4 = FindNextFileA(hFindFile,&local_168);
    while (iVar4 != 0) {
      if (((local_168.cFileName[0] != DAT_140e597bc) || (local_168.cFileName[1] != DAT_140e597bd))
         && ((local_168.cFileName[0] != DAT_140edfc18 ||
             ((local_168.cFileName[1] != DAT_140edfc19 || (local_168.cFileName[2] != DAT_140edfc1a))
             )))) {
        lVar5 = 0;
        do {
          lVar7 = lVar5 + 1;
          if (local_168.cFileName[lVar5] != (&DAT_140ee5f54)[lVar5]) {
            if (((byte)local_168.dwFileAttributes & 0x10) == 0) {
              lVar5 = -1;
              do {
                lVar7 = lVar5;
                lVar5 = lVar7 + 1;
              } while (local_168.cFileName[lVar7 + 1] != '\0');
              pvVar6 = operator_new(lVar7 + 2);
              pCVar8 = local_168.cFileName;
              do {
                cVar1 = *pCVar8;
                pCVar8[(longlong)pvVar6 - (longlong)local_168.cFileName] = cVar1;
                pCVar8 = pCVar8 + 1;
              } while (cVar1 != '\0');
              ppvVar2 = (void **)param_2[1];
              local_178[0] = pvVar6;
              if ((local_178 < ppvVar2) && (ppvVar3 = (void **)*param_2, ppvVar3 <= local_178)) {
                if (ppvVar2 == (void **)param_2[2]) {
                  FUN_140050410(param_2);
                }
                if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
                  *(undefined8 *)param_2[1] =
                       *(undefined8 *)
                        (*param_2 + ((longlong)local_178 - (longlong)ppvVar3 >> 3) * 8);
                }
              }
              else {
                if (ppvVar2 == (void **)param_2[2]) {
                  FUN_140050410(param_2);
                }
                if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
                  *(undefined8 *)param_2[1] = pvVar6;
                }
              }
              param_2[1] = param_2[1] + 8;
            }
            break;
          }
          lVar5 = lVar7;
        } while (lVar7 != 5);
      }
      iVar4 = FindNextFileA(hFindFile,&local_168);
    }
    FindClose(hFindFile);
  }
  return;
}

