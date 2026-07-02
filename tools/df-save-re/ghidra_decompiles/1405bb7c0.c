// FUN_1405bb7c0 @ 1405bb7c0
// callees:
//   -> EXTERNAL:000000b4 write
//   -> 1405bb8b0 FUN_1405bb8b0
//   -> EXTERNAL:000000e1 memmove


undefined8 FUN_1405bb7c0(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar3 = (ulonglong)(int)param_3;
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    return 0;
  }
  if (*param_1 != '\0') {
    while( true ) {
      if ((int)param_3 < 1) {
        return 1;
      }
      if ((*(int *)(param_1 + 0x128) <= *(int *)(param_1 + 300)) &&
         (cVar1 = FUN_1405bb8b0(param_1), cVar1 == '\0')) break;
      iVar4 = *(int *)(param_1 + 0x128) - *(int *)(param_1 + 300);
      iVar2 = (int)uVar3;
      if (iVar2 < iVar4) {
        iVar4 = iVar2;
      }
      memmove((void *)((longlong)*(int *)(param_1 + 300) + *(longlong *)(param_1 + 0x120)),param_2,
              (longlong)iVar4);
      *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + iVar4;
      param_2 = param_2 + iVar4;
      param_3 = iVar2 - iVar4;
      uVar3 = (ulonglong)param_3;
    }
    return 0;
  }
  std::basic_ostream<char,std::char_traits<char>_>::write
            ((basic_ostream<char,std::char_traits<char>_> *)(param_1 + 0x18),param_2,uVar3);
  return 1;
}

