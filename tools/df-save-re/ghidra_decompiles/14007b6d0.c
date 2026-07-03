// FUN_14007b6d0 @ 14007b6d0
// callees:
//   -> 14000cb40 FUN_14000cb40
//   -> 14007b2f0 FUN_14007b2f0


undefined1 * FUN_14007b6d0(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14000cb40(param_2,param_3,0,0xffffffffffffffff,0);
  *(undefined8 *)(param_1 + 0x18) = 0xf;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_14007b2f0(param_1,uVar1);
  return param_1;
}

