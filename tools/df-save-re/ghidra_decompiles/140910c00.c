// FUN_140910c00 @ 140910c00
// callees:
//   -> 14000d7e0 FUN_14000d7e0


bool FUN_140910c00(longlong param_1,int param_2,short param_3)

{
  int iVar1;
  short sVar2;
  
  sVar2 = *(short *)(param_1 + 0x80 + (longlong)param_2 * 2);
  if (*(longlong *)(param_1 + 0x158) != 0) {
    sVar2 = sVar2 + *(short *)(*(longlong *)(param_1 + 0x158) + (longlong)param_2 * 2);
    if (sVar2 < 0) {
      sVar2 = 0;
    }
    else if (100 < sVar2) {
      sVar2 = 100;
    }
  }
  if ((short)(sVar2 - param_3) < 0) {
    return false;
  }
  iVar1 = FUN_14000d7e0((int)(short)(0x65 - param_3));
  return iVar1 <= (short)(sVar2 - param_3);
}

