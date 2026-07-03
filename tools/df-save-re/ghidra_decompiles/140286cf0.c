// FUN_140286cf0 @ 140286cf0
// callees:
//   -> 140071310 FUN_140071310


undefined8 FUN_140286cf0(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) + -1;
  if (-1 < iVar3) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    do {
      iVar2 = FUN_140071310(*(undefined8 *)(lVar1 + (longlong)iVar3 * 8),param_2);
      if (iVar2 == 0) {
        *param_3 = (short)iVar3;
        return *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 8);
      }
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *param_3 = 0xffff;
  return 0;
}

