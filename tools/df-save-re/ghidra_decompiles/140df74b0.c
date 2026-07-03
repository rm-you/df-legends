// FUN_140df74b0 @ 140df74b0
// callees:
//   -> 140df6470 FUN_140df6470
//   -> 140dfabf0 FUN_140dfabf0
//   -> 140dfdcc6 memcpy
//   -> 140df57b0 FUN_140df57b0


undefined8 FUN_140df74b0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  short *psVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar6 = 0;
  while ((*(int *)((longlong)param_1 + 0x9c) != 0 ||
         (FUN_140df6470(param_1), *(int *)((longlong)param_1 + 0x9c) != 0))) {
    *(undefined4 *)(param_1 + 0x11) = 0;
    bVar4 = *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x94) + param_1[10]);
    *(undefined2 *)(param_1[0x2df] + (ulonglong)*(uint *)((longlong)param_1 + 0x16f4) * 2) = 0;
    *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = bVar4;
    *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
    psVar3 = (short *)((longlong)param_1 + (ulonglong)bVar4 * 4 + 0xbc);
    *psVar3 = *psVar3 + 1;
    *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
    *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
    if (*(int *)((longlong)param_1 + 0x16f4) == (int)param_1[0x2de] + -1) {
      uVar7 = *(uint *)((longlong)param_1 + 0x84);
      lVar5 = lVar6;
      if (-1 < (int)uVar7) {
        lVar5 = (ulonglong)uVar7 + param_1[10];
      }
      FUN_140dfabf0(param_1,lVar5,*(int *)((longlong)param_1 + 0x94) - uVar7,0);
      lVar5 = *param_1;
      *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
      uVar7 = *(uint *)(*(longlong *)(lVar5 + 0x28) + 0x28);
      if (*(uint *)(lVar5 + 0x18) < uVar7) {
        uVar7 = *(uint *)(lVar5 + 0x18);
      }
      if (uVar7 != 0) {
        memcpy(*(void **)(lVar5 + 0x10),*(void **)(*(longlong *)(lVar5 + 0x28) + 0x20),
               (ulonglong)uVar7);
        *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + (ulonglong)uVar7;
        plVar1 = (longlong *)(*(longlong *)(lVar5 + 0x28) + 0x20);
        *plVar1 = *plVar1 + (ulonglong)uVar7;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + uVar7;
        *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) - uVar7;
        piVar2 = (int *)(*(longlong *)(lVar5 + 0x28) + 0x28);
        *piVar2 = *piVar2 - uVar7;
        lVar5 = *(longlong *)(lVar5 + 0x28);
        if (*(int *)(lVar5 + 0x28) == 0) {
          *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar5 + 0x10);
        }
      }
      if (*(int *)(*param_1 + 0x18) == 0) {
        return 0;
      }
    }
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar7 = *(uint *)((longlong)param_1 + 0x84);
  if (-1 < (int)uVar7) {
    lVar6 = (ulonglong)uVar7 + param_1[10];
  }
  FUN_140dfabf0(param_1,lVar6,*(int *)((longlong)param_1 + 0x94) - uVar7,param_2 == 4);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
  FUN_140df57b0(*param_1);
  if (*(int *)(*param_1 + 0x18) != 0) {
    if (param_2 == 4) {
      return 3;
    }
    return 1;
  }
  if (param_2 == 4) {
    return 2;
  }
  return 0;
}

