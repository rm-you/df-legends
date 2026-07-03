// FUN_140df61e0 @ 140df61e0
// callees:
//   -> 140df4ec0 FUN_140df4ec0
//   -> 140df51b0 FUN_140df51b0
//   -> 140dfdcc6 memcpy


uint FUN_140df61e0(longlong *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = uVar1;
  if (param_3 < uVar1) {
    uVar3 = param_3;
  }
  if (uVar3 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 1) = uVar1 - uVar3;
  if (*(int *)(param_1[5] + 0x2c) == 1) {
    uVar2 = FUN_140df4ec0(*(undefined4 *)((longlong)param_1 + 0x4c),*param_1,uVar3);
  }
  else {
    if (*(int *)(param_1[5] + 0x2c) != 2) goto LAB_140df625c;
    if (*param_1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_140df51b0(*(undefined4 *)((longlong)param_1 + 0x4c),*param_1,uVar3);
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar2;
LAB_140df625c:
  memcpy(param_2,(void *)*param_1,(ulonglong)uVar3);
  *param_1 = *param_1 + (ulonglong)uVar3;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + uVar3;
  return uVar3;
}

