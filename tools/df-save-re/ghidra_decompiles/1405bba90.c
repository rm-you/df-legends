// FUN_1405bba90 @ 1405bba90
// callees:
//   -> EXTERNAL:000000b3 read
//   -> 1405bbb80 FUN_1405bbb80
//   -> EXTERNAL:000000e1 memmove


undefined8 FUN_1405bba90(char *param_1,char *param_2,uint param_3)

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
      if ((((*(int *)(param_1 + 300) == 0) || (*(int *)(param_1 + 300) <= *(int *)(param_1 + 0x130))
           ) && (cVar1 = FUN_1405bbb80(param_1), cVar1 == '\0')) || (*(int *)(param_1 + 300) == 0))
      break;
      iVar4 = *(int *)(param_1 + 300) - *(int *)(param_1 + 0x130);
      iVar2 = (int)uVar3;
      if (iVar2 < iVar4) {
        iVar4 = iVar2;
      }
      memmove(param_2,(void *)((longlong)*(int *)(param_1 + 0x130) + *(longlong *)(param_1 + 0x120))
              ,(longlong)iVar4);
      *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + iVar4;
      param_2 = param_2 + iVar4;
      param_3 = iVar2 - iVar4;
      uVar3 = (ulonglong)param_3;
    }
    return 0;
  }
  std::basic_istream<char,std::char_traits<char>_>::read
            ((basic_istream<char,std::char_traits<char>_> *)(param_1 + 8),param_2,uVar3);
  return 1;
}

