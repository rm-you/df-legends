// FUN_140dfa800 @ 140dfa800
// callees:
//   -> 140dfa170 FUN_140dfa170
//   -> 140df9f20 FUN_140df9f20


int FUN_140dfa800(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  FUN_140dfa170(param_1,param_1 + 0xbc,*(undefined4 *)(param_1 + 0xb48));
  FUN_140dfa170(param_1,param_1 + 0x9b0,*(undefined4 *)(param_1 + 0xb60));
  FUN_140df9f20(param_1,param_1 + 0xb70);
  iVar2 = 0x12;
  lVar1 = 0x12;
  do {
    if (*(short *)(param_1 + 0xaa6 + (ulonglong)(byte)(&DAT_140e7e640)[lVar1] * 4) != 0) break;
    if (*(short *)(param_1 + 0xaa6 + (ulonglong)(byte)(&UNK_140e7e63f)[lVar1] * 4) != 0) {
      iVar2 = iVar2 + -1;
      break;
    }
    if (*(short *)(param_1 + 0xaa6 + (ulonglong)(byte)(&UNK_140e7e63e)[lVar1] * 4) != 0) {
      iVar2 = iVar2 + -2;
      break;
    }
    if (*(short *)(param_1 + 0xaa6 + (ulonglong)(byte)(&UNK_140e7e63d)[lVar1] * 4) != 0) {
      iVar2 = iVar2 + -3;
      break;
    }
    lVar1 = lVar1 + -4;
    iVar2 = iVar2 + -4;
  } while (2 < lVar1);
  *(int *)(param_1 + 0x1700) = *(int *)(param_1 + 0x1700) + iVar2 * 3 + 0x11;
  return iVar2;
}

