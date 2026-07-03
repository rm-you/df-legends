// FUN_14081ff10 @ 14081ff10
// callees:
//   -> 1408248c0 FUN_1408248c0
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new


void FUN_14081ff10(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  void *pvVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  short local_res8 [4];
  int local_res20 [2];
  
  FUN_1408248c0();
  FUN_1405bba90(param_2,local_res8,2);
  uVar7 = 0;
  iVar2 = (int)(DAT_141d6e180 - DAT_141d6e178 >> 3) + -1;
  uVar3 = uVar7;
  if (-1 < iVar2) {
    lVar5 = (longlong)iVar2;
    do {
      if (*(short *)(*(longlong *)(DAT_141d6e178 + lVar5 * 8) + 0x28) == local_res8[0]) {
        uVar3 = *(ulonglong *)(DAT_141d6e178 + (longlong)iVar2 * 8);
        break;
      }
      iVar2 = iVar2 + -1;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(ulonglong *)(param_1 + 200) = uVar3;
  FUN_1405bba90(param_2,param_1 + 0xd0,4);
  FUN_1405bba90(param_2,param_1 + 0xd4,2);
  FUN_1405bba90(param_2,local_res20,4);
  plVar1 = (longlong *)(param_1 + 0xd8);
  FUN_14000b9d0(plVar1,(longlong)local_res20[0]);
  uVar3 = uVar7;
  if (*(longlong *)(param_1 + 0xe0) - *plVar1 >> 3 != 0) {
    do {
      pvVar4 = operator_new(0x1c);
      *(undefined4 *)((longlong)pvVar4 + 0xc) = 0xffffffff;
      *(undefined4 *)((longlong)pvVar4 + 0x18) = 0xffffffff;
      *(void **)(uVar3 + *plVar1) = pvVar4;
      FUN_1405bba90(param_2,*(undefined8 *)(uVar3 + *plVar1),2);
      FUN_1405bba90(param_2,*(longlong *)(uVar3 + *plVar1) + 2,2);
      FUN_1405bba90(param_2,*(longlong *)(uVar3 + *plVar1) + 4,2);
      FUN_1405bba90(param_2,*(longlong *)(uVar3 + *plVar1) + 6,2);
      FUN_1405bba90(param_2,*(longlong *)(uVar3 + *plVar1) + 8,4);
      FUN_1405bba90(param_2,*(longlong *)(uVar3 + *plVar1) + 0x10,2);
      FUN_1405bba90(param_2,*(longlong *)(uVar3 + *plVar1) + 0x14,4);
      FUN_1405bba90(param_2,*(longlong *)(uVar3 + *plVar1) + 0xc,4);
      FUN_1405bba90(param_2,*(longlong *)(uVar3 + *plVar1) + 0x18,4);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar3 = uVar3 + 8;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)(*(longlong *)(param_1 + 0xe0) - *plVar1 >> 3));
  }
  FUN_1405bba90(param_2,param_1 + 0xf0,4);
  return;
}

