// FUN_140c87e70 @ 140c87e70
// callees:
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140002020 FUN_140002020


void FUN_140c87e70(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  int iVar9;
  longlong lVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong local_res8;
  longlong local_res18;
  undefined8 uVar13;
  ulonglong *local_50;
  ulonglong *puStack_48;
  ulonglong *local_40;
  ulonglong *puVar5;
  
  uVar13 = 0xfffffffffffffffe;
  local_50 = (ulonglong *)0x0;
  puStack_48 = (ulonglong *)0x0;
  puVar5 = (ulonglong *)0x0;
  iVar9 = 0;
  local_40 = (ulonglong *)0x0;
  local_res8 = local_res8 & 0xffffffff00000000;
  puVar11 = (ulonglong *)0x0;
  puVar8 = puVar5;
  puVar12 = puVar5;
  if (*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3 != 0) {
    do {
      puVar1 = *(ulonglong **)((longlong)puVar8 + *(longlong *)(param_1 + 0x3f8));
      iVar2 = (int)puVar5;
      if ((puVar1 < puStack_48) && (puVar11 <= puVar1)) {
        lVar6 = (longlong)puVar1 - (longlong)puVar11;
        if (puStack_48 == puVar12) {
          FUN_14000c2d0(&local_50,1);
          puVar11 = local_50;
          puVar12 = local_40;
          iVar2 = (int)local_res8;
        }
        if (puStack_48 != (ulonglong *)0x0) {
          uVar3 = puVar11[lVar6 >> 3];
LAB_140c87f53:
          *puStack_48 = uVar3;
        }
      }
      else {
        if (puStack_48 == puVar12) {
          FUN_14000c2d0(&local_50,1);
          puVar11 = local_50;
          puVar12 = local_40;
          iVar2 = (int)local_res8;
        }
        if (puStack_48 != (ulonglong *)0x0) {
          uVar3 = *puVar1;
          goto LAB_140c87f53;
        }
      }
      puStack_48 = puStack_48 + 1;
      uVar4 = iVar2 + 1;
      puVar5 = (ulonglong *)(ulonglong)uVar4;
      local_res8 = CONCAT44(local_res8._4_4_,uVar4);
      puVar8 = puVar8 + 1;
    } while ((ulonglong)(longlong)(int)uVar4 <
             (ulonglong)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3));
  }
  if ((longlong)puStack_48 - (longlong)puVar11 >> 3 != 0) {
    local_res18 = 0;
    puVar8 = puStack_48;
    do {
      lVar6 = *(longlong *)(local_res18 + (longlong)puVar11);
      iVar2 = (int)(*(longlong *)(lVar6 + 0x40) - *(longlong *)(lVar6 + 0x38) >> 3) + -1;
      lVar10 = (longlong)iVar2;
      if (-1 < iVar2) {
        do {
          iVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 0x38) + lVar10 * 8) + 0x10))();
          lVar7 = **(longlong **)(*(longlong *)(lVar6 + 0x38) + lVar10 * 8);
          if (iVar2 == 10) {
            uVar3 = (**(code **)(lVar7 + 0x18))();
            local_res8 = uVar3;
            if (uVar3 != 0) {
              if ((&local_res8 < puVar8) && (puVar11 <= &local_res8)) {
                lVar7 = (longlong)&local_res8 - (longlong)puVar11;
                if (puVar8 == puVar12) {
                  FUN_14000c2d0(&local_50,1);
                  puVar8 = puStack_48;
                  puVar11 = local_50;
                  puVar12 = local_40;
                }
                if (puVar8 != (ulonglong *)0x0) {
                  *puVar8 = puVar11[lVar7 >> 3];
                }
                puVar8 = puVar8 + 1;
                puStack_48 = puVar8;
              }
              else {
                if (puVar8 == puVar12) {
                  FUN_14000c2d0(&local_50,1);
                  puVar8 = puStack_48;
                  puVar11 = local_50;
                  puVar12 = local_40;
                }
                if (puVar8 != (ulonglong *)0x0) {
                  *puVar8 = uVar3;
                }
                puVar8 = puVar8 + 1;
                puStack_48 = puVar8;
              }
            }
          }
          else {
            iVar2 = (**(code **)(lVar7 + 0x10))();
            if ((iVar2 == 9) &&
               (uVar3 = (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 0x38) + lVar10 * 8) +
                                    0x20))(), local_res8 = uVar3, uVar3 != 0)) {
              puVar5 = (ulonglong *)param_2[1];
              if ((&local_res8 < puVar5) && (puVar1 = (ulonglong *)*param_2, puVar1 <= &local_res8))
              {
                if (puVar5 == (ulonglong *)param_2[2]) {
                  FUN_14000c2d0(param_2,1);
                }
                if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
                  *(undefined8 *)param_2[1] =
                       *(undefined8 *)
                        (*param_2 + ((longlong)&local_res8 - (longlong)puVar1 >> 3) * 8);
                }
              }
              else {
                if (puVar5 == (ulonglong *)param_2[2]) {
                  FUN_14000c2d0(param_2,1);
                }
                if ((ulonglong *)param_2[1] != (ulonglong *)0x0) {
                  *(ulonglong *)param_2[1] = uVar3;
                }
              }
              param_2[1] = param_2[1] + 8;
            }
          }
          lVar10 = lVar10 + -1;
        } while (-1 < lVar10);
      }
      iVar9 = iVar9 + 1;
      local_res18 = local_res18 + 8;
    } while ((ulonglong)(longlong)iVar9 < (ulonglong)((longlong)puVar8 - (longlong)puVar11 >> 3));
  }
  if (puVar11 != (ulonglong *)0x0) {
    FUN_140002020(puVar11,(longlong)puVar12 - (longlong)puVar11 >> 3,8,param_4,uVar13);
  }
  return;
}

