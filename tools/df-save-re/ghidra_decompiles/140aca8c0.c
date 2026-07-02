// FUN_140aca8c0 @ 140aca8c0
// callees:
//   -> 14053c490 FUN_14053c490
//   -> 1404cec60 FUN_1404cec60
//   -> 14000bc60 FUN_14000bc60
//   -> 14000c390 FUN_14000c390
//   -> 140002020 FUN_140002020


void FUN_140aca8c0(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  short sVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  undefined4 uVar7;
  longlong lVar8;
  short *psVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  longlong lVar14;
  int local_res10 [2];
  undefined4 local_res18 [2];
  int local_res20;
  longlong local_70;
  undefined4 *local_60;
  undefined4 *puStack_58;
  undefined4 *local_50;
  
  *(undefined8 *)(param_1 + 0x483b8) = *(undefined8 *)(param_1 + 0x483b0);
  puVar1 = (ulonglong *)(param_1 + 0x483c8);
  *(ulonglong *)(param_1 + 0x483d0) = *puVar1;
  puVar2 = (ulonglong *)(param_1 + 0x483e0);
  *(ulonglong *)(param_1 + 0x483e8) = *puVar2;
  local_60 = (undefined4 *)0x0;
  puStack_58 = (undefined4 *)0x0;
  puVar12 = (undefined4 *)0x0;
  local_50 = (undefined4 *)0x0;
  local_res20 = 0;
  puVar11 = (undefined4 *)0x0;
  if (*(longlong *)(param_1 + 0x170) - *(longlong *)(param_1 + 0x168) >> 3 != 0) {
    local_70 = 0;
    puVar10 = (undefined4 *)0x0;
    do {
      lVar14 = *(longlong *)(local_70 + *(longlong *)(param_1 + 0x168));
      sVar3 = *(short *)(lVar14 + 0x80);
      if (((sVar3 == 0) ||
          (((sVar3 == 3 && (*(int *)(lVar14 + 0x348) == 0)) && (0 < *(int *)(lVar14 + 0x34c))))) &&
         (*(short *)(lVar14 + 0x82) != -1)) {
        lVar8 = FUN_14053c490(lVar14);
        if (lVar8 == 0) {
LAB_140aca9f6:
          uVar7 = *(undefined4 *)
                   (*(longlong *)
                     (*(longlong *)(param_1 + 0x228) +
                     (longlong)
                     *(int *)(*(longlong *)
                               (*(longlong *)(param_1 + 0x2a0) +
                               (longlong)*(short *)(lVar14 + 0x82) * 8) + 0x60 +
                             (longlong)*(short *)(lVar14 + 0x84) * 0x70) * 8) + 0x78);
          local_res18[0] = uVar7;
          FUN_14000bc60(param_1 + 0x483b0,lVar14 + 0x88);
          iVar13 = (int)*(short *)(*(longlong *)(local_70 + *(longlong *)(param_1 + 0x168)) + 0x82);
          piVar4 = *(int **)(param_1 + 0x483d0);
          local_res10[0] = iVar13;
          if ((local_res10 < piVar4) && (piVar5 = (int *)*puVar1, piVar5 <= local_res10)) {
            if (piVar4 == *(int **)(param_1 + 0x483d8)) {
              FUN_14000c390(puVar1,1);
            }
            if (*(undefined4 **)(param_1 + 0x483d0) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0x483d0) =
                   *(undefined4 *)(*puVar1 + ((longlong)local_res10 - (longlong)piVar5 >> 2) * 4);
            }
          }
          else {
            if (piVar4 == *(int **)(param_1 + 0x483d8)) {
              FUN_14000c390(puVar1,1);
            }
            if (*(int **)(param_1 + 0x483d0) != (int *)0x0) {
              **(int **)(param_1 + 0x483d0) = iVar13;
            }
          }
          *(longlong *)(param_1 + 0x483d0) = *(longlong *)(param_1 + 0x483d0) + 4;
          iVar13 = (int)*(short *)(*(longlong *)(local_70 + *(longlong *)(param_1 + 0x168)) + 0x84);
          piVar4 = *(int **)(param_1 + 0x483e8);
          local_res10[0] = iVar13;
          if ((local_res10 < piVar4) && (piVar5 = (int *)*puVar2, piVar5 <= local_res10)) {
            if (piVar4 == *(int **)(param_1 + 0x483f0)) {
              FUN_14000c390(puVar2,1);
            }
            if (*(undefined4 **)(param_1 + 0x483e8) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0x483e8) =
                   *(undefined4 *)(*puVar2 + ((longlong)local_res10 - (longlong)piVar5 >> 2) * 4);
            }
          }
          else {
            if (piVar4 == *(int **)(param_1 + 0x483f0)) {
              FUN_14000c390(puVar2,1);
            }
            if (*(int **)(param_1 + 0x483e8) != (int *)0x0) {
              **(int **)(param_1 + 0x483e8) = iVar13;
            }
          }
          *(longlong *)(param_1 + 0x483e8) = *(longlong *)(param_1 + 0x483e8) + 4;
          if ((local_res18 < puVar10) && (puVar11 <= local_res18)) {
            lVar14 = (longlong)local_res18 - (longlong)puVar11;
            if (puVar10 == puVar12) {
              FUN_14000c390(&local_60,1);
              puVar10 = puStack_58;
              puVar11 = local_60;
              puVar12 = local_50;
            }
            if (puVar10 != (undefined4 *)0x0) {
              uVar7 = puVar11[lVar14 >> 2];
LAB_140acabcb:
              *puVar10 = uVar7;
            }
          }
          else {
            if (puVar10 == puVar12) {
              FUN_14000c390(&local_60,1);
              puVar10 = puStack_58;
              puVar11 = local_60;
              puVar12 = local_50;
            }
            if (puVar10 != (undefined4 *)0x0) goto LAB_140acabcb;
          }
          puVar10 = puVar10 + 1;
          puStack_58 = puVar10;
        }
        else if ((sVar3 == 0) && (psVar9 = (short *)FUN_1404cec60(), *psVar9 == 0)) {
          if ((*(int *)(*(longlong *)(psVar9 + 4) + 0x3a8) < 1) ||
             ((**(byte **)(*(longlong *)(psVar9 + 4) + 0x3a0) & 1) == 0)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) goto LAB_140aca9f6;
        }
      }
      local_res20 = local_res20 + 1;
      local_70 = local_70 + 8;
    } while ((ulonglong)(longlong)local_res20 <
             (ulonglong)(*(longlong *)(param_1 + 0x170) - *(longlong *)(param_1 + 0x168) >> 3));
  }
  if (puVar11 != (undefined4 *)0x0) {
    FUN_140002020(puVar11,(longlong)puVar12 - (longlong)puVar11 >> 2,4);
  }
  return;
}

