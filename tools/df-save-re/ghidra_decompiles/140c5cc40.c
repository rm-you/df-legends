// FUN_140c5cc40 @ 140c5cc40
// callees:


undefined8 FUN_140c5cc40(undefined2 param_1,short param_2,short param_3,short param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 7000;
  iVar3 = 7000;
  if ((-1 < param_4) && (uVar2 = DAT_141d6dd58 - DAT_141d6dd50 >> 3, (int)param_4 < (int)uVar2)) {
    if ((ulonglong)(longlong)param_4 < uVar2) {
      iVar3 = *(int *)(*(longlong *)(DAT_141d6dd50 + (longlong)param_4 * 8) + 0x144);
    }
    else {
      iVar3 = 0;
    }
  }
  if ((-1 < param_3) && (uVar2 = DAT_141d6dd58 - DAT_141d6dd50 >> 3, (int)param_3 < (int)uVar2)) {
    if ((ulonglong)(longlong)param_3 < uVar2) {
      iVar4 = *(int *)(*(longlong *)(DAT_141d6dd50 + (longlong)param_3 * 8) + 0x144);
    }
    else {
      iVar4 = 0;
    }
  }
  switch(param_1) {
  case 0x18:
    iVar4 = (int)(DAT_141d6ddd8 - DAT_141d6ddd0 >> 3) + -1;
    if (-1 < iVar4) {
      lVar1 = (longlong)iVar4;
      do {
        if (*(short *)(*(longlong *)(DAT_141d6ddd0 + lVar1 * 8) + 0x28) == param_2) {
          lVar1 = *(longlong *)(DAT_141d6ddd0 + (longlong)iVar4 * 8);
          if (lVar1 == 0) {
            return 0;
          }
          if (*(int *)(lVar1 + 0xf4) <= iVar3) {
            return 0;
          }
          return 2;
        }
        iVar4 = iVar4 + -1;
        lVar1 = lVar1 + -1;
      } while (-1 < lVar1);
    }
    break;
  case 0x19:
  case 0x1a:
  case 0x1c:
  case 0x1d:
  case 0x3b:
    if (iVar3 <= (iVar4 * 6) / 7) {
      return 2;
    }
    if ((iVar4 * 8) / 7 <= iVar3) {
      return 1;
    }
  }
  return 0;
}

