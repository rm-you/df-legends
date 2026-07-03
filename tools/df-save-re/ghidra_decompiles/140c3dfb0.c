// FUN_140c3dfb0 @ 140c3dfb0
// callees:
//   -> 140c88480 FUN_140c88480
//   -> 140c88ad0 FUN_140c88ad0


undefined8 FUN_140c3dfb0(longlong param_1,char param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((((DAT_141c347ae != '\0') && ((*(byte *)(param_1 + 0x110) & 2) == 0)) &&
      (*(short *)(param_1 + 0x348) == -1)) &&
     ((1 < (ushort)(*(short *)(param_1 + 0xa0) - 0x67U) && (*(longlong *)(param_1 + 0xd60) == 0))))
  {
    if ((*(int *)(param_1 + 0x1260) < 8) ||
       ((*(byte *)(*(longlong *)(param_1 + 0x1258) + 7) & 4) == 0)) {
      if ((*(uint *)(param_1 + 0x810) & 0x2000000) != 0) {
        return 0;
      }
      if ((*(uint *)(param_1 + 0x80c) & 0x2000000) == 0) {
        return 0;
      }
    }
    else if ((*(uint *)(param_1 + 0x810) & 0x2000000) != 0) {
      return 0;
    }
    cVar1 = FUN_140c88480();
    if ((cVar1 != '\0') && (cVar1 = FUN_140c88ad0(param_1,DAT_141c36b88,0x19), cVar1 == '\0')) {
      if (param_2 != '\0') {
        iVar2 = 0;
        uVar4 = DAT_141c36a78 - DAT_141c36a70 >> 3;
        if (uVar4 != 0) {
          lVar3 = 0;
          do {
            if (**(int **)(lVar3 + DAT_141c36a70) == *(int *)(param_1 + 0x130)) {
              return 0;
            }
            iVar2 = iVar2 + 1;
            lVar3 = lVar3 + 8;
          } while ((ulonglong)(longlong)iVar2 < uVar4);
        }
      }
      return 1;
    }
  }
  return 0;
}

