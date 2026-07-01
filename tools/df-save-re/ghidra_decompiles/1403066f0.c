// FUN_1403066f0 @ 1403066f0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140315ac0 FUN_140315ac0
//   -> 140002140 FUN_140002140
//   -> 140002250 FUN_140002250
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 1403021d0 FUN_1403021d0


void FUN_1403066f0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  int local_res8 [2];
  undefined4 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,param_1 + 0xe0,4);
  FUN_140315ac0(param_1,param_2);
  FUN_140002140(param_2,param_1 + 0x78);
  FUN_140002250(param_2,param_1 + 0x90);
  FUN_140002250(param_2,param_1 + 0xa8);
  FUN_1405bba90(param_2,param_1 + 0xd8,4);
  FUN_1405bba90(param_2,param_1 + 0xdc,4);
  FUN_1405bba90(param_2,param_1 + 0xe8,4);
  FUN_1405bba90(param_2,param_1 + 0xe4,4);
  FUN_1405bba90(param_2,local_res8,4);
  plVar1 = (longlong *)(param_1 + 0xc0);
  FUN_14000b9d0(plVar1,(longlong)local_res8[0]);
  uVar3 = 0;
  uVar5 = uVar3;
  if (0 < local_res8[0]) {
    do {
      FUN_1405bba90(param_2,local_res18,1);
      if ((char)local_res18[0] == '\0') {
        *(undefined8 *)(uVar3 + *plVar1) = 0;
      }
      else {
        puVar2 = operator_new(0x48);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[8] = 0;
        *(undefined8 **)(uVar3 + *plVar1) = puVar2;
        FUN_1403021d0(*(undefined8 *)(uVar3 + *plVar1),param_2);
      }
      uVar4 = (int)uVar5 + 1;
      uVar3 = uVar3 + 8;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < local_res8[0]);
  }
  return;
}

