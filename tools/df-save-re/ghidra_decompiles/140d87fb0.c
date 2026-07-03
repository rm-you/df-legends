// FUN_140d87fb0 @ 140d87fb0
// callees:
//   -> 140004830 FUN_140004830
//   -> 1400c05e0 FUN_1400c05e0
//   -> 1405b4fb0 FUN_1405b4fb0


undefined8 FUN_140d87fb0(longlong param_1,undefined2 param_2,undefined8 param_3,undefined2 param_4)

{
  char cVar1;
  undefined2 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_140004830();
  cVar1 = FUN_1400c05e0(uVar2);
  if (cVar1 != '\0') {
    lVar3 = FUN_1405b4fb0(param_1,param_2,param_3,param_4,0,
                          (int)(*(longlong *)(param_1 + 0x128) - *(longlong *)(param_1 + 0x120) >> 3
                               ) + -1);
    if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x10) & 2) == 0)) {
      return 1;
    }
  }
  return 0;
}

