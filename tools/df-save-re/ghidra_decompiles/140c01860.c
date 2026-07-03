// FUN_140c01860 @ 140c01860
// callees:
//   -> 140002250 FUN_140002250
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140b0cdb0 FUN_140b0cdb0
//   -> 140c0bdb0 FUN_140c0bdb0
//   -> 14014a480 FUN_14014a480
//   -> EXTERNAL:000000e1 memmove


void FUN_140c01860(longlong param_1,undefined8 param_2,int param_3)

{
  void *_Src;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  void *_Dst;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  int *piVar11;
  uint uVar12;
  ulonglong uVar13;
  int *piVar14;
  longlong lVar15;
  ulonglong uVar16;
  int *piVar17;
  longlong lVar18;
  int iVar19;
  int *piVar20;
  int local_res8 [2];
  int local_res18 [2];
  undefined4 *local_res20;
  
  local_res18[0] = param_3;
  FUN_140002250(param_2,param_1);
  FUN_1405bba90(param_2,local_res8,4);
  FUN_14000b9d0(param_1 + 0x30,(longlong)local_res8[0]);
  uVar10 = 0;
  uVar13 = uVar10;
  uVar16 = uVar10;
  if (*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3 != 0) {
    do {
      local_res20 = operator_new(0x28);
      *(undefined2 *)local_res20 = 0;
      *(undefined2 *)((longlong)local_res20 + 2) = 0xffff;
      local_res20[1] = 0x989681;
      *(undefined8 *)(local_res20 + 2) = 0x989681;
      local_res20[4] = 0xffffffff;
      local_res20[5] = 0xffffffff;
      local_res20[6] = 0xffffffff;
      local_res20[7] = 0xffffffff;
      local_res20[8] = 0xffffffff;
      local_res20[9] = 0xffffffff;
      *(undefined4 **)(uVar16 + *(longlong *)(param_1 + 0x30)) = local_res20;
      FUN_140b0cdb0(*(undefined8 *)(uVar16 + *(longlong *)(param_1 + 0x30)),param_2,param_3);
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
      uVar16 = uVar16 + 8;
    } while ((ulonglong)(longlong)(int)uVar12 <
             (ulonglong)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3));
  }
  FUN_1405bba90(param_2,local_res8,4);
  FUN_14000b9d0(param_1 + 0x48,(longlong)local_res8[0]);
  uVar13 = uVar10;
  if (*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48) >> 3 != 0) {
    do {
      local_res20 = operator_new(0x2c);
      local_res20[1] = 0xffffffff;
      local_res20[2] = 0xffffffff;
      local_res20[4] = 0xffffffff;
      local_res20[3] = 0xffffffff;
      local_res20[5] = 0xffffffff;
      local_res20[6] = 0xffffffff;
      local_res20[7] = 0xffffffff;
      local_res20[8] = 0xffffffff;
      local_res20[9] = 0xffffffff;
      local_res20[10] = 0xffffffff;
      *local_res20 = 0;
      *(undefined4 **)(uVar13 + *(longlong *)(param_1 + 0x48)) = local_res20;
      lVar15 = *(longlong *)(uVar13 + *(longlong *)(param_1 + 0x48));
      FUN_1405bba90(param_2,lVar15,4);
      FUN_140c0bdb0(lVar15 + 4,param_2);
      uVar12 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar12;
      uVar13 = uVar13 + 8;
      param_3 = local_res18[0];
    } while ((ulonglong)(longlong)(int)uVar12 <
             (ulonglong)(*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48) >> 3));
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x18,(longlong)local_res18[0]);
  puVar9 = *(undefined8 **)(param_1 + 0x18);
  piVar11 = (int *)0x0;
  piVar14 = (int *)((*(longlong *)(param_1 + 0x20) - (longlong)puVar9) + 7U >> 3);
  if (*(undefined8 **)(param_1 + 0x20) < puVar9) {
    piVar14 = piVar11;
  }
  piVar17 = piVar11;
  if (piVar14 != (int *)0x0) {
    do {
      FUN_1405bba90(param_2,&local_res20,4);
      iVar8 = (int)(DAT_141c68018 - DAT_141c68010 >> 3);
      piVar20 = piVar11;
      if (((iVar8 != 0) && ((int)local_res20 != -1)) && (iVar8 = iVar8 + -1, iVar19 = 0, -1 < iVar8)
         ) {
        do {
          iVar7 = iVar19 + iVar8 >> 1;
          piVar20 = *(int **)(DAT_141c68010 + (longlong)iVar7 * 8);
          iVar5 = *piVar20;
          if (iVar5 == (int)local_res20) break;
          if ((int)local_res20 < iVar5) {
            iVar8 = iVar7 + -1;
          }
          else {
            iVar19 = iVar7 + 1;
          }
          piVar20 = piVar11;
        } while (iVar19 <= iVar8);
      }
      *puVar9 = piVar20;
      piVar17 = (int *)((longlong)piVar17 + 1);
      puVar9 = puVar9 + 1;
    } while (piVar17 < piVar14);
  }
  iVar8 = (int)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3) + -1;
  if (-1 < iVar8) {
    lVar15 = (longlong)iVar8 * 8;
    lVar18 = lVar15;
    do {
      if (*(longlong *)(lVar18 + *(longlong *)(param_1 + 0x18)) == 0) {
        FUN_14014a480("NULL artifact removed on load");
        _Dst = (void *)(*(longlong *)(param_1 + 0x18) + lVar15);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,*(longlong *)(param_1 + 0x20) - (longlong)_Src);
        *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -8;
      }
      lVar15 = lVar15 + -8;
      lVar18 = lVar18 + -8;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  if (0x597 < param_3) {
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000b9d0(param_1 + 0x60,(longlong)local_res18[0]);
    puVar6 = *(undefined8 **)(param_1 + 0x68);
    for (puVar9 = *(undefined8 **)(param_1 + 0x60); puVar9 < puVar6; puVar9 = puVar9 + 1) {
      local_res20 = operator_new(0x14);
      local_res20[1] = 0xfff0bdc0;
      local_res20[2] = 0xfff0bdc0;
      puVar1 = local_res20 + 1;
      local_res20[3] = 0xfff0bdc0;
      puVar2 = local_res20 + 2;
      local_res20[4] = 0xffffffff;
      puVar3 = local_res20 + 3;
      *puVar9 = local_res20;
      puVar4 = local_res20 + 4;
      FUN_1405bba90(param_2,local_res20,4);
      FUN_1405bba90(param_2,puVar1,4);
      FUN_1405bba90(param_2,puVar2,4);
      FUN_1405bba90(param_2,puVar3,4);
      FUN_1405bba90(param_2,puVar4,4);
    }
  }
  return;
}

