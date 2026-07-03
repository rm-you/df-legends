// FUN_1407ea250 @ 1407ea250
// callees:
//   -> 1407ea2a0 FUN_1407ea2a0


undefined8 FUN_1407ea250(ushort *param_1,ushort param_2,undefined8 param_3,int param_4)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  if (uVar1 + 1 < (uint)param_2) {
    param_4 = ((uint)param_2 - (uint)uVar1) * param_4;
  }
  else {
    if ((uint)uVar1 <= param_2 + 1) {
      return 0;
    }
    param_4 = -(((uint)uVar1 - (uint)param_2) * param_4);
  }
  if (param_4 == 0) {
    return 0;
  }
  FUN_1407ea2a0();
  return 1;
}

