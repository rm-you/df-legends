// FUN_1403197e0 @ 1403197e0
// callees:
//   -> 14031a140 FUN_14031a140
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new


void FUN_1403197e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *local_res8;
  int local_res20 [2];
  
  FUN_14031a140();
  FUN_1405bba90(param_2,param_1 + 0x150,2);
  FUN_1405bba90(param_2,local_res20,4);
  plVar1 = (longlong *)(param_1 + 0x158);
  FUN_14000b9d0(plVar1,(longlong)local_res20[0]);
  uVar10 = 0;
  uVar6 = uVar10;
  uVar7 = uVar10;
  if (*(longlong *)(param_1 + 0x160) - *plVar1 >> 3 != 0) {
    do {
      local_res8 = operator_new(0x10);
      *(undefined2 *)(local_res8 + 1) = 0;
      *(undefined8 **)(uVar7 + *plVar1) = local_res8;
      FUN_1405bba90(param_2,local_res20,4);
      iVar4 = (int)(DAT_141c67370 - DAT_141c67368 >> 3);
      uVar9 = uVar10;
      if (((iVar4 != 0) && (local_res20[0] != -1)) && (iVar4 = iVar4 + -1, iVar8 = 0, -1 < iVar4)) {
        do {
          iVar3 = iVar8 + iVar4 >> 1;
          uVar9 = *(ulonglong *)(DAT_141c67368 + (longlong)iVar3 * 8);
          iVar2 = *(int *)(uVar9 + 0x1c);
          if (iVar2 == local_res20[0]) break;
          if (local_res20[0] < iVar2) {
            iVar4 = iVar3 + -1;
          }
          else {
            iVar8 = iVar3 + 1;
          }
          uVar9 = uVar10;
        } while (iVar8 <= iVar4);
      }
      **(ulonglong **)(uVar7 + *plVar1) = uVar9;
      FUN_1405bba90(param_2,*(longlong *)(uVar7 + *plVar1) + 8,2);
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar7 = uVar7 + 8;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)(*(longlong *)(param_1 + 0x160) - *plVar1 >> 3));
  }
  FUN_1405bba90(param_2,&local_res8,1);
  if ((char)local_res8 == '\0') {
    *(undefined8 *)(param_1 + 0x170) = 0;
    return;
  }
  local_res8 = operator_new(0x30);
  *local_res8 = 0xffffffffffffffff;
  *(undefined8 *)((longlong)local_res8 + 0xc) = 0xffffffffffffffff;
  *(undefined4 *)(local_res8 + 3) = 0xffffffff;
  *(undefined2 *)(local_res8 + 1) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x14) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x1c) = 0;
  *(undefined2 *)(local_res8 + 4) = 0;
  *(undefined8 *)((longlong)local_res8 + 0x24) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x2c) = 0;
  *(undefined8 **)(param_1 + 0x170) = local_res8;
  FUN_1405bba90(param_2,local_res8,4);
  FUN_1405bba90(param_2,*(longlong *)(param_1 + 0x170) + 8,2);
  FUN_1405bba90(param_2,*(longlong *)(param_1 + 0x170) + 0xc,4);
  FUN_1405bba90(param_2,*(longlong *)(param_1 + 0x170) + 0x14,2);
  FUN_1405bba90(param_2,*(longlong *)(param_1 + 0x170) + 0x16,2);
  FUN_1405bba90(param_2,*(longlong *)(param_1 + 0x170) + 0x18,4);
  FUN_1405bba90(param_2,*(longlong *)(param_1 + 0x170) + 0x1c,2);
  FUN_1405bba90(param_2,*(longlong *)(param_1 + 0x170) + 0x1e,2);
  FUN_1405bba90(param_2,*(longlong *)(param_1 + 0x170) + 0x20,2);
  FUN_1405bba90(param_2,*(longlong *)(param_1 + 0x170) + 0x24,4);
  FUN_1405bba90(param_2,*(longlong *)(param_1 + 0x170) + 0x28,4);
  FUN_1405bba90(param_2,*(longlong *)(param_1 + 0x170) + 0x2c,4);
  FUN_1405bba90(param_2,*(longlong *)(param_1 + 0x170) + 4,4);
  FUN_1405bba90(param_2,*(longlong *)(param_1 + 0x170) + 0x10,4);
  return;
}

