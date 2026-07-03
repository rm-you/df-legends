// FUN_14031c0c0 @ 14031c0c0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140161010 FUN_140161010
//   -> 1400021b0 FUN_1400021b0


void FUN_14031c0c0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  lVar3 = 0x6b;
  if (*param_1 == 0) {
    local_res8[0] = 0;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    lVar1 = *param_1;
    lVar2 = 0x6b;
    do {
      FUN_140161010(param_2,lVar1);
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  param_1 = param_1 + 1;
  do {
    FUN_1400021b0(param_2,param_1);
    param_1 = param_1 + 3;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

