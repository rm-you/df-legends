// FUN_140140ac0 @ 140140ac0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140010c40 FUN_140010c40
//   -> 14000c390 FUN_14000c390


void FUN_140140ac0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_res8 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_28 [4];
  
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_1405bba90(param_2,param_1 + 0x10,4);
  FUN_1405bba90(param_2,param_1 + 0x14,4);
  if (0x6a4 < param_3) {
    FUN_140010c40(param_1 + 0x18,param_2,param_3);
  }
  FUN_1405bba90(param_2,param_1 + 0x40,4);
  if (param_3 < 0x6a5) {
    if (0x695 < param_3) {
      FUN_1405bba90(param_2,local_res8,4);
      FUN_1405bba90(param_2,local_28,4);
      FUN_1405bba90(param_2,local_res20,4);
      FUN_1405bba90(param_2,local_res18,4);
      *(undefined4 *)(param_1 + 0x48) = local_res8[0];
      *(undefined4 *)(param_1 + 0x50) = local_res20[0];
      *(undefined4 *)(param_1 + 0x4c) = local_28[0];
      puVar1 = *(undefined4 **)(param_1 + 0x60);
      if ((local_res18 < puVar1) &&
         (puVar2 = *(undefined4 **)(param_1 + 0x58), puVar2 <= local_res18)) {
        if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
          FUN_14000c390(param_1 + 0x58,1);
        }
        if (*(undefined4 **)(param_1 + 0x60) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x60) =
               *(undefined4 *)
                (*(longlong *)(param_1 + 0x58) + ((longlong)local_res18 - (longlong)puVar2 >> 2) * 4
                );
        }
      }
      else {
        if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
          FUN_14000c390(param_1 + 0x58,1);
        }
        if (*(undefined4 **)(param_1 + 0x60) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x60) = local_res18[0];
        }
      }
      *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + 4;
    }
  }
  else {
    FUN_140010c40(param_1 + 0x48,param_2,param_3);
  }
  FUN_1405bba90(param_2,param_1 + 0x70,4);
  FUN_1405bba90(param_2,param_1 + 0x74,4);
  return;
}

