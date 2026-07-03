// FUN_140ad4400 @ 140ad4400
// callees:
//   -> 1402e9860 FUN_1402e9860


ulonglong FUN_140ad4400(longlong param_1,short param_2,short param_3)

{
  ushort uVar1;
  short sVar2;
  ulonglong uVar3;
  
  uVar1 = *(ushort *)
           (*(longlong *)(*(longlong *)(param_1 + 0x2a0) + (longlong)param_2 * 8) + 0x32 +
           (longlong)param_3 * 0x70);
  uVar3 = (ulonglong)uVar1;
  if (1 < DAT_1416992b2) {
    sVar2 = FUN_1402e9860(*(undefined2 *)(param_1 + 0xa4),(longlong)param_3 * 0x70,param_3,
                          *(undefined2 *)(param_1 + 0xb0),uVar1);
    if (sVar2 != 100) {
      return (ulonglong)(uint)((int)(short)(sVar2 * (short)uVar3) / 100);
    }
  }
  return uVar3 & 0xffff;
}

