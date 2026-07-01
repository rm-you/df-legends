// FUN_1405bbb80 @ 1405bbb80
// callees:
//   -> EXTERNAL:000000b3 read
//   -> 140df7be0 FUN_140df7be0
//   -> EXTERNAL:00000070 MessageBoxA
//   -> EXTERNAL:000000ee exit
//   -> 140df7dd0 FUN_140df7dd0


/* WARNING: Removing unreachable block (ram,0x0001405bbce6) */
/* WARNING: Removing unreachable block (ram,0x0001405bbcef) */
/* WARNING: Removing unreachable block (ram,0x0001405bbcf6) */

undefined8 FUN_1405bbb80(char *param_1)

{
  uint uVar1;
  int iVar2;
  uint local_5c;
  uint local_4c;
  
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    return 0;
  }
  if (*param_1 == '\0') {
    return 1;
  }
  param_1[300] = '\0';
  param_1[0x12d] = '\0';
  param_1[0x12e] = '\0';
  param_1[0x12f] = '\0';
  param_1[0x130] = '\0';
  param_1[0x131] = '\0';
  param_1[0x132] = '\0';
  param_1[0x133] = '\0';
  std::basic_istream<char,std::char_traits<char>_>::read
            ((basic_istream<char,std::char_traits<char>_> *)(param_1 + 8),param_1 + 0x144,4);
  std::basic_istream<char,std::char_traits<char>_>::read
            ((basic_istream<char,std::char_traits<char>_> *)(param_1 + 8),
             *(char **)(param_1 + 0x138),(longlong)*(int *)(param_1 + 0x144));
  if (*(int *)(param_1 + 0x144) < 1) {
    return 0;
  }
  iVar2 = FUN_140df7be0();
  if (iVar2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x128);
    while (((local_4c < uVar1 && (local_5c < *(uint *)(param_1 + 0x144))) &&
           (iVar2 = FUN_140df7dd0(), iVar2 != 1))) {
      if (iVar2 != 0) {
        MessageBoxA((HWND)0x0,
                    "One of the compressed files on disk has errors in it.  Restore from backup if you are able."
                    ,(LPCSTR)0x0,0);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      uVar1 = *(uint *)(param_1 + 0x128);
    }
    MessageBoxA((HWND)0x0,
                "One of the compressed files on disk has errors in it.  Restore from backup if you are able."
                ,(LPCSTR)0x0,0);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  MessageBoxA((HWND)0x0,
              "One of the compressed files on disk has errors in it.  Restore from backup if you are able."
              ,(LPCSTR)0x0,0);
                    /* WARNING: Subroutine does not return */
  exit(1);
}

