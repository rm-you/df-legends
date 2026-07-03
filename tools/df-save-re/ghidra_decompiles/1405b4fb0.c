// FUN_1405b4fb0 @ 1405b4fb0
// callees:


undefined8
FUN_1405b4fb0(longlong param_1,short param_2,short param_3,short param_4,int param_5,int param_6)

{
  short *psVar1;
  int iVar2;
  
  if (param_5 <= param_6) {
    do {
      iVar2 = param_5 + param_6 >> 1;
      psVar1 = *(short **)(*(longlong *)(param_1 + 0x120) + (longlong)iVar2 * 8);
      if (((*psVar1 == param_2) && (psVar1[1] == param_3)) && (psVar1[2] == param_4)) {
        return *(undefined8 *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar2 * 8);
      }
      if (param_5 == param_6) {
        return 0;
      }
      if ((param_2 < *psVar1) ||
         ((*psVar1 == param_2 &&
          ((param_3 < psVar1[1] || ((psVar1[1] == param_3 && (param_4 < psVar1[2])))))))) {
        param_6 = iVar2 + -1;
      }
      else {
        param_5 = iVar2 + 1;
      }
    } while (param_5 <= param_6);
  }
  return 0;
}

