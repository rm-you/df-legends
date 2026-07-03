// FUN_1405bd000 @ 1405bd000
// callees:
//   -> 140019af0 FUN_140019af0
//   -> 1405bd110 FUN_1405bd110


void FUN_1405bd000(undefined8 param_1,short param_2,ushort param_3,short param_4)

{
  uint uVar1;
  
  uVar1 = FUN_140019af0(param_1,param_2 + 1);
  if ((uVar1 >> 0x1b & 1) != 0) {
    FUN_1405bd110(param_1,param_2 + 1);
  }
  uVar1 = FUN_140019af0(param_1,param_2 + -1,param_3,param_4);
  if ((uVar1 >> 0x1b & 1) != 0) {
    FUN_1405bd110(param_1,param_2 + -1);
  }
  uVar1 = FUN_140019af0(param_1,param_2,param_3 + 1,param_4);
  if ((uVar1 >> 0x1b & 1) != 0) {
    FUN_1405bd110(param_1,param_2);
  }
  uVar1 = FUN_140019af0(param_1,param_2,param_3 - 1,param_4);
  if ((uVar1 >> 0x1b & 1) != 0) {
    FUN_1405bd110(param_1,param_2);
  }
  uVar1 = FUN_140019af0(param_1,param_2,param_3,param_4 + 1);
  if ((uVar1 >> 0x1b & 1) != 0) {
    FUN_1405bd110(param_1,param_2);
  }
  return;
}

