// FUN_140b05af0 @ 140b05af0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new


void FUN_140b05af0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  short local_res8 [4];
  int local_res20 [2];
  
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000b9d0(param_1,(longlong)local_res20[0]);
  iVar3 = 0;
  if (0 < local_res20[0]) {
    lVar2 = 0;
    do {
      FUN_1405bba90(param_2,local_res8,2);
      if (local_res8[0] == 0) {
        puVar1 = operator_new(0x28);
        *puVar1 = region_block_event_sphere_fieldst::vftable;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
      }
      else {
        puVar1 = (undefined8 *)0x0;
      }
      *(undefined8 **)(lVar2 + *param_1) = puVar1;
      (**(code **)(**(longlong **)(lVar2 + *param_1) + 0x10))
                (*(longlong **)(lVar2 + *param_1),param_2,param_3);
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar3 < local_res20[0]);
  }
  return;
}

