// FUN_140c19ce0 @ 140c19ce0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140c19fa0 FUN_140c19fa0
//   -> 1400021b0 FUN_1400021b0


void FUN_140c19ce0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int local_res18 [2];
  
  iVar2 = (int)(param_1[1] - *param_1 >> 3);
  local_res18[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res18,4);
  lVar1 = 0;
  if (0 < (longlong)iVar2) {
    do {
      FUN_140c19fa0(*(undefined8 *)(*param_1 + lVar1 * 8),param_2);
      lVar1 = lVar1 + 1;
    } while (lVar1 < iVar2);
  }
  FUN_1400021b0(param_2,param_1 + 3);
  FUN_1400021b0(param_2,param_1 + 6);
  FUN_1400021b0(param_2,param_1 + 9);
  FUN_1400021b0(param_2,param_1 + 0xc);
  return;
}

