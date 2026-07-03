// FUN_140286c80 @ 140286c80
// callees:
//   -> 140071310 FUN_140071310


uint FUN_140286c80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) - 1;
  if (-1 < (int)uVar3) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    do {
      iVar2 = FUN_140071310(*(undefined8 *)(lVar1 + (longlong)(int)uVar3 * 8),param_2);
      if (iVar2 == 0) {
        return uVar3 & 0xffff;
      }
      uVar3 = uVar3 - 1;
    } while (-1 < (int)uVar3);
  }
  return 0xffffffff;
}

