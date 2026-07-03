// FUN_14031bee0 @ 14031bee0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400020a0 FUN_1400020a0
//   -> 1400021b0 FUN_1400021b0
//   -> 140161010 FUN_140161010


void FUN_14031bee0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  if (*param_1 == 0) {
    local_res8[0] = 0;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    lVar1 = *param_1;
    FUN_1400020a0(param_2,lVar1);
    FUN_1400020a0(param_2,lVar1 + 0x18);
    FUN_1400020a0(param_2,lVar1 + 0x30);
    FUN_1400020a0(param_2,lVar1 + 0x48);
    FUN_1400021b0(param_2,lVar1 + 0x60);
    FUN_140161010(param_2,lVar1 + 0x78);
  }
  FUN_1400021b0(param_2,param_1 + 1);
  return;
}

