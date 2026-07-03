// FUN_140339f70 @ 140339f70
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140315ac0 FUN_140315ac0
//   -> 140002140 FUN_140002140
//   -> 140002250 FUN_140002250
//   -> 1405b8380 FUN_1405b8380


void FUN_140339f70(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  char local_res8 [8];
  
  FUN_1405bba90(param_2,param_1 + 0x80,4);
  FUN_1405bba90(param_2,param_1,2);
  FUN_1405bba90(param_2,param_1 + 0x84,2);
  FUN_1405bba90(param_2,param_1 + 0x86,2);
  FUN_1405bba90(param_2,param_1 + 0x88,2);
  FUN_1405bba90(param_2,param_1 + 0x8a,2);
  FUN_1405bba90(param_2,param_1 + 0x8c,2);
  FUN_1405bba90(param_2,param_1 + 0x8e,2);
  FUN_1405bba90(param_2,param_1 + 0x90,2);
  FUN_1405bba90(param_2,param_1 + 0x92,2);
  FUN_1405bba90(param_2,param_1 + 0x94,2);
  FUN_140315ac0(param_1 + 8,param_2);
  FUN_140002140(param_2,param_1 + 0x98);
  FUN_140002140(param_2,param_1 + 0xb0);
  FUN_140002140(param_2,param_1 + 200);
  FUN_140002140(param_2,param_1 + 0xe0);
  FUN_140002250(param_2,param_1 + 0xf8);
  FUN_1405bba90(param_2,local_res8,1);
  if (local_res8[0] != '\0') {
    plVar1 = (longlong *)FUN_1405b8380(param_2);
    *(longlong **)(param_1 + 0x110) = plVar1;
                    /* WARNING: Could not recover jumptable at 0x00014033a109. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3,1);
    return;
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  return;
}

