// FUN_1408dd360 @ 1408dd360
// callees:
//   -> 14000c390 FUN_14000c390
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 140002020 FUN_140002020


uint FUN_1408dd360(ulonglong *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  longlong *plVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint *puVar11;
  uint local_res8 [2];
  uint local_res10;
  uint local_res18;
  uint *local_70;
  uint *puStack_68;
  uint *local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  plVar1 = (longlong *)param_1[1];
  plVar5 = (longlong *)*param_1;
  if ((longlong)plVar1 - (longlong)plVar5 >> 3 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    local_70 = (uint *)0x0;
    puStack_68 = (uint *)0x0;
    puVar4 = (uint *)0x0;
    local_60 = (uint *)0x0;
    local_res8[0] = 0;
    local_48 = (uint *)0x0;
    puVar3 = (uint *)((ulonglong)((longlong)plVar1 + (7 - (longlong)plVar5)) >> 3);
    if (plVar1 < plVar5) {
      puVar3 = puVar4;
    }
    puVar8 = (uint *)0x0;
    puVar10 = (uint *)0x0;
    local_res10 = param_2;
    local_res18 = param_3;
    if (puVar3 != (uint *)0x0) {
      local_58 = param_2 & 7;
      local_54 = param_3 & 7;
      local_50 = param_4 & 7;
      uVar6 = param_5 & 7;
      puVar11 = puVar4;
      local_4c = uVar6;
      do {
        lVar7 = *plVar5;
        if ((((((-1 < (int)param_2) && (iVar2 = (int)param_2 >> 3, -1 < iVar2)) &&
              (iVar2 < *(int *)(lVar7 + 0x40))) &&
             (((byte)(1 << ((byte)local_58 & 0x1f)) &
              *(byte *)((longlong)iVar2 + *(longlong *)(lVar7 + 0x38))) != 0)) ||
            (param_2 == 0xffffffff)) &&
           (((((-1 < (int)param_3 && (iVar2 = (int)param_3 >> 3, -1 < iVar2)) &&
              ((iVar2 < *(int *)(lVar7 + 0x440) &&
               (((byte)(1 << ((byte)local_54 & 0x1f)) &
                *(byte *)((longlong)iVar2 + *(longlong *)(lVar7 + 0x438))) != 0)))) ||
             (param_3 == 0xffffffff)) &&
            (((((int)param_4 < 0 || (iVar2 = (int)param_4 >> 3, iVar2 < 0)) ||
              ((*(int *)(lVar7 + 0x40) <= iVar2 ||
               ((((byte)(1 << ((byte)local_50 & 0x1f)) &
                 *(byte *)((longlong)iVar2 + *(longlong *)(lVar7 + 0x38))) == 0 ||
                (param_4 == 0xffffffff)))))) &&
             (((int)param_5 < 0 ||
              ((((iVar2 = (int)param_5 >> 3, iVar2 < 0 || (*(int *)(lVar7 + 0x440) <= iVar2)) ||
                (((byte)(1 << ((byte)uVar6 & 0x1f)) &
                 *(byte *)((longlong)iVar2 + *(longlong *)(lVar7 + 0x438))) == 0)) ||
               (param_5 == 0xffffffff)))))))))) {
          if ((local_res8 < puVar8) && (puVar10 <= local_res8)) {
            lVar7 = (longlong)local_res8 - (longlong)puVar10;
            if (puVar8 == puVar4) {
              FUN_14000c390(&local_70);
              puVar4 = local_60;
              puVar8 = puStack_68;
              puVar10 = local_70;
              param_3 = local_res18;
              param_2 = local_res10;
            }
            uVar6 = local_4c;
            if (puVar8 != (uint *)0x0) {
              *puVar8 = puVar10[lVar7 >> 2];
            }
          }
          else {
            if (puVar8 == puVar4) {
              FUN_14000c390(&local_70);
              puVar4 = local_60;
              puVar8 = puStack_68;
              puVar10 = local_70;
              param_3 = local_res18;
              param_2 = local_res10;
            }
            if (puVar8 != (uint *)0x0) {
              *puVar8 = (uint)puVar11;
            }
          }
          puVar8 = puVar8 + 1;
          puStack_68 = puVar8;
        }
        local_res8[0] = (uint)puVar11 + 1;
        puVar11 = (uint *)(ulonglong)local_res8[0];
        plVar5 = plVar5 + 1;
        local_48 = (uint *)((longlong)local_48 + 1);
      } while (local_48 < puVar3);
    }
    uVar6 = 0;
    uVar9 = (longlong)puVar8 - (longlong)puVar10 >> 2;
    if (uVar9 == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      if (1 < (uint)uVar9) {
        uVar6 = FUN_1409fc0c0();
        uVar6 = (uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                ((int)(0x7fffffff / (uVar9 & 0xffffffff)) + 1U);
      }
      uVar6 = puVar10[(int)uVar6];
    }
    if (puVar10 != (uint *)0x0) {
      FUN_140002020(puVar10,(longlong)puVar4 - (longlong)puVar10 >> 2,4);
    }
  }
  return uVar6;
}

