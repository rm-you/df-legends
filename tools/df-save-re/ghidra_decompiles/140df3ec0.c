// FUN_140df3ec0 @ 140df3ec0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140df3ad0 FUN_140df3ad0


void FUN_140df3ec0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int local_res8 [2];
  
  FUN_1405bba90(param_2,local_res8,4);
  FUN_14000b9d0(param_1,(longlong)local_res8[0]);
  iVar3 = 0;
  if (0 < local_res8[0]) {
    lVar4 = 0;
    do {
      lVar1 = *param_1;
      uVar2 = FUN_140df3ad0(param_2);
      *(undefined8 *)(lVar1 + lVar4) = uVar2;
      (**(code **)(**(longlong **)(lVar4 + *param_1) + 0x10))
                (*(longlong **)(lVar4 + *param_1),param_2,param_3);
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < local_res8[0]);
  }
  return;
}

