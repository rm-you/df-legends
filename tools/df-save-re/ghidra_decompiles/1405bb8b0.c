// FUN_1405bb8b0 @ 1405bb8b0
// callees:
//   -> 140df54b0 FUN_140df54b0
//   -> EXTERNAL:00000070 MessageBoxA
//   -> EXTERNAL:000000ee exit
//   -> 140df5830 FUN_140df5830
//   -> 140df6100 FUN_140df6100
//   -> EXTERNAL:000000b4 write


undefined8 FUN_1405bb8b0(char *param_1)

{
  int iVar1;
  uint local_res8 [2];
  undefined8 local_68;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined4 local_50;
  uint local_4c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    return 0;
  }
  if ((*param_1 != '\0') && (*(int *)(param_1 + 300) != 0)) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    iVar1 = FUN_140df54b0();
    if (iVar1 != 0) {
      MessageBoxA((HWND)0x0,
                  "One of the compressed files on disk has errors in it.  Restore from backup if you are able."
                  ,(LPCSTR)0x0,0);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_58 = *(undefined8 *)(param_1 + 0x138);
    local_50 = *(undefined4 *)(param_1 + 0x140);
    local_68 = *(undefined8 *)(param_1 + 0x120);
    local_60 = *(int *)(param_1 + 300);
    if (local_5c != local_60) {
      do {
        if (*(uint *)(param_1 + 0x140) <= local_4c) break;
        iVar1 = FUN_140df5830(&local_68,0);
        if (iVar1 != 0) {
          MessageBoxA((HWND)0x0,
                      "One of the compressed files on disk has errors in it.  Restore from backup if you are able."
                      ,(LPCSTR)0x0,0);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
      } while (local_5c != *(int *)(param_1 + 300));
    }
    iVar1 = FUN_140df5830(&local_68,4);
    while (iVar1 != 1) {
      if (iVar1 != 0) {
        MessageBoxA((HWND)0x0,
                    "One of the compressed files on disk has errors in it.  Restore from backup if you are able."
                    ,(LPCSTR)0x0,0);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      iVar1 = FUN_140df5830(&local_68,4);
    }
    iVar1 = FUN_140df6100();
    if (iVar1 != 0) {
      MessageBoxA((HWND)0x0,
                  "One of the compressed files on disk has errors in it.  Restore from backup if you are able."
                  ,(LPCSTR)0x0,0);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    if (local_4c != 0) {
      local_res8[0] = local_4c;
      std::basic_ostream<char,std::char_traits<char>_>::write
                ((basic_ostream<char,std::char_traits<char>_> *)(param_1 + 0x18),(char *)local_res8,
                 4);
      std::basic_ostream<char,std::char_traits<char>_>::write
                ((basic_ostream<char,std::char_traits<char>_> *)(param_1 + 0x18),
                 *(char **)(param_1 + 0x138),(ulonglong)local_4c);
    }
    param_1[300] = '\0';
    param_1[0x12d] = '\0';
    param_1[0x12e] = '\0';
    param_1[0x12f] = '\0';
    param_1[0x130] = '\0';
    param_1[0x131] = '\0';
    param_1[0x132] = '\0';
    param_1[0x133] = '\0';
  }
  return 1;
}

