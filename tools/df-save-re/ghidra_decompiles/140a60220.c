// FUN_140a60220 @ 140a60220
// callees:
//   -> 14000c460 FUN_14000c460
//   -> 140a60c70 FUN_140a60c70


void FUN_140a60220(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  short sVar3;
  short *psVar4;
  short *psVar5;
  longlong lVar6;
  char cVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  short sVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  short sVar20;
  longlong lVar21;
  short local_res8 [4];
  short local_res10 [4];
  
  iVar18 = 0;
  puVar1 = (ulonglong *)(param_1 + 0x483f8);
  puVar2 = (ulonglong *)(param_1 + 0x48410);
  *(ulonglong *)(param_1 + 0x48400) = *puVar1;
  *(ulonglong *)(param_1 + 0x48418) = *puVar2;
  iVar19 = 1;
  local_res10[0] = 0;
  if (0 < *(int *)(param_1 + 0xa0)) {
    do {
      sVar20 = local_res10[0];
      if ((((-1 < local_res10[0]) && (iVar18 < *(int *)(param_1 + 0xa0))) &&
          (0 < *(int *)(param_1 + 0xa4))) &&
         (((lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + (longlong)local_res10[0] * 8),
           0 < *(int *)(lVar12 + 0x28) && ((**(byte **)(lVar12 + 0x20) & 8) != 0)) ||
          (((*(short *)(lVar12 + 0x30) < 0x96 &&
            ((*(int *)(lVar12 + 0x28) < 2 ||
             ((*(byte *)(*(longlong *)(lVar12 + 0x20) + 1) & 0x40) == 0)))) &&
           (99 < *(short *)(lVar12 + 0x30))))))) {
        psVar4 = *(short **)(param_1 + 0x48400);
        if ((local_res10 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res10)) {
          if (psVar4 == *(short **)(param_1 + 0x48408)) {
            FUN_14000c460(puVar1,1);
          }
          if (*(undefined2 **)(param_1 + 0x48400) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x48400) =
                 *(undefined2 *)(*puVar1 + ((longlong)local_res10 - (longlong)psVar5 >> 1) * 2);
          }
        }
        else {
          if (psVar4 == *(short **)(param_1 + 0x48408)) {
            FUN_14000c460(puVar1,1);
          }
          if (*(short **)(param_1 + 0x48400) != (short *)0x0) {
            **(short **)(param_1 + 0x48400) = sVar20;
          }
        }
        *(longlong *)(param_1 + 0x48400) = *(longlong *)(param_1 + 0x48400) + 2;
        psVar4 = *(short **)(param_1 + 0x48418);
        local_res8[0] = 0;
        if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar2, psVar5 <= local_res8)) {
          if (psVar4 == *(short **)(param_1 + 0x48420)) {
            FUN_14000c460(puVar2,1);
          }
          if (*(undefined2 **)(param_1 + 0x48418) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x48418) =
                 *(undefined2 *)(*puVar2 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
          }
        }
        else {
          if (psVar4 == *(short **)(param_1 + 0x48420)) {
            FUN_14000c460(puVar2,1);
          }
          if (*(undefined2 **)(param_1 + 0x48418) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x48418) = 0;
          }
        }
        *(longlong *)(param_1 + 0x48418) = *(longlong *)(param_1 + 0x48418) + 2;
      }
      sVar11 = *(short *)(param_1 + 0xa4) + -1;
      if (((((-1 < sVar20) && (iVar18 < *(int *)(param_1 + 0xa0))) && (-1 < sVar11)) &&
          ((int)sVar11 < *(int *)(param_1 + 0xa4))) &&
         (((lVar12 = (longlong)sVar11 * 0x70 +
                     *(longlong *)(*(longlong *)(param_1 + 0x2a0) + (longlong)sVar20 * 8),
           0 < *(int *)(lVar12 + 0x28) && ((**(byte **)(lVar12 + 0x20) & 8) != 0)) ||
          (((*(short *)(lVar12 + 0x30) < 0x96 &&
            ((*(int *)(lVar12 + 0x28) < 2 ||
             ((*(byte *)(*(longlong *)(lVar12 + 0x20) + 1) & 0x40) == 0)))) &&
           (99 < *(short *)(lVar12 + 0x30))))))) {
        psVar4 = *(short **)(param_1 + 0x48400);
        if ((local_res10 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res10)) {
          if (psVar4 == *(short **)(param_1 + 0x48408)) {
            FUN_14000c460(puVar1,1);
          }
          if (*(undefined2 **)(param_1 + 0x48400) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x48400) =
                 *(undefined2 *)(*puVar1 + ((longlong)local_res10 - (longlong)psVar5 >> 1) * 2);
          }
        }
        else {
          if (psVar4 == *(short **)(param_1 + 0x48408)) {
            FUN_14000c460(puVar1,1);
          }
          if (*(short **)(param_1 + 0x48400) != (short *)0x0) {
            **(short **)(param_1 + 0x48400) = sVar20;
          }
        }
        *(longlong *)(param_1 + 0x48400) = *(longlong *)(param_1 + 0x48400) + 2;
        psVar4 = *(short **)(param_1 + 0x48418);
        sVar11 = *(short *)(param_1 + 0xa4) + -1;
        local_res8[0] = sVar11;
        if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar2, psVar5 <= local_res8)) {
          if (psVar4 == *(short **)(param_1 + 0x48420)) {
            FUN_14000c460(puVar2,1);
          }
          if (*(undefined2 **)(param_1 + 0x48418) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x48418) =
                 *(undefined2 *)(*puVar2 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
          }
        }
        else {
          if (psVar4 == *(short **)(param_1 + 0x48420)) {
            FUN_14000c460(puVar2,1);
          }
          if (*(short **)(param_1 + 0x48418) != (short *)0x0) {
            **(short **)(param_1 + 0x48418) = sVar11;
          }
        }
        *(longlong *)(param_1 + 0x48418) = *(longlong *)(param_1 + 0x48418) + 2;
      }
      local_res10[0] = sVar20 + 1;
      iVar18 = (int)local_res10[0];
    } while (iVar18 < *(int *)(param_1 + 0xa0));
  }
  local_res8[0] = 1;
  if (1 < *(int *)(param_1 + 0xa4) + -1) {
    do {
      sVar20 = local_res8[0];
      if ((((0 < *(int *)(param_1 + 0xa0)) && (-1 < local_res8[0])) &&
          (iVar19 < *(int *)(param_1 + 0xa4))) &&
         (((lVar12 = (longlong)local_res8[0] * 0x70 + **(longlong **)(param_1 + 0x2a0),
           0 < *(int *)(lVar12 + 0x28) && ((**(byte **)(lVar12 + 0x20) & 8) != 0)) ||
          (((*(short *)(lVar12 + 0x30) < 0x96 &&
            ((*(int *)(lVar12 + 0x28) < 2 ||
             ((*(byte *)(*(longlong *)(lVar12 + 0x20) + 1) & 0x40) == 0)))) &&
           (99 < *(short *)(lVar12 + 0x30))))))) {
        psVar4 = *(short **)(param_1 + 0x48400);
        local_res10[0] = 0;
        if ((local_res10 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res10)) {
          if (psVar4 == *(short **)(param_1 + 0x48408)) {
            FUN_14000c460(puVar1,1);
          }
          if (*(undefined2 **)(param_1 + 0x48400) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x48400) =
                 *(undefined2 *)(*puVar1 + ((longlong)local_res10 - (longlong)psVar5 >> 1) * 2);
          }
        }
        else {
          if (psVar4 == *(short **)(param_1 + 0x48408)) {
            FUN_14000c460(puVar1,1);
          }
          if (*(undefined2 **)(param_1 + 0x48400) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x48400) = 0;
          }
        }
        *(longlong *)(param_1 + 0x48400) = *(longlong *)(param_1 + 0x48400) + 2;
        psVar4 = *(short **)(param_1 + 0x48418);
        if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar2, psVar5 <= local_res8)) {
          if (psVar4 == *(short **)(param_1 + 0x48420)) {
            FUN_14000c460(puVar2,1);
          }
          if (*(undefined2 **)(param_1 + 0x48418) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x48418) =
                 *(undefined2 *)(*puVar2 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
          }
        }
        else {
          if (psVar4 == *(short **)(param_1 + 0x48420)) {
            FUN_14000c460(puVar2,1);
          }
          if (*(short **)(param_1 + 0x48418) != (short *)0x0) {
            **(short **)(param_1 + 0x48418) = sVar20;
          }
        }
        *(longlong *)(param_1 + 0x48418) = *(longlong *)(param_1 + 0x48418) + 2;
      }
      sVar11 = *(short *)(param_1 + 0xa0) + -1;
      if (((((-1 < sVar11) && ((int)sVar11 < *(int *)(param_1 + 0xa0))) && (-1 < sVar20)) &&
          (iVar19 < *(int *)(param_1 + 0xa4))) &&
         (((lVar12 = (longlong)sVar20 * 0x70 +
                     *(longlong *)(*(longlong *)(param_1 + 0x2a0) + (longlong)sVar11 * 8),
           0 < *(int *)(lVar12 + 0x28) && ((**(byte **)(lVar12 + 0x20) & 8) != 0)) ||
          (((*(short *)(lVar12 + 0x30) < 0x96 &&
            ((*(int *)(lVar12 + 0x28) < 2 ||
             ((*(byte *)(*(longlong *)(lVar12 + 0x20) + 1) & 0x40) == 0)))) &&
           (99 < *(short *)(lVar12 + 0x30))))))) {
        psVar4 = *(short **)(param_1 + 0x48400);
        local_res10[0] = sVar11;
        if ((local_res10 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res10)) {
          if (psVar4 == *(short **)(param_1 + 0x48408)) {
            FUN_14000c460(puVar1,1);
          }
          if (*(undefined2 **)(param_1 + 0x48400) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x48400) =
                 *(undefined2 *)(*puVar1 + ((longlong)local_res10 - (longlong)psVar5 >> 1) * 2);
          }
        }
        else {
          if (psVar4 == *(short **)(param_1 + 0x48408)) {
            FUN_14000c460(puVar1,1);
          }
          if (*(short **)(param_1 + 0x48400) != (short *)0x0) {
            **(short **)(param_1 + 0x48400) = sVar11;
          }
        }
        *(longlong *)(param_1 + 0x48400) = *(longlong *)(param_1 + 0x48400) + 2;
        psVar4 = *(short **)(param_1 + 0x48418);
        if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar2, psVar5 <= local_res8)) {
          if (psVar4 == *(short **)(param_1 + 0x48420)) {
            FUN_14000c460(puVar2,1);
          }
          if (*(undefined2 **)(param_1 + 0x48418) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x48418) =
                 *(undefined2 *)(*puVar2 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
          }
        }
        else {
          if (psVar4 == *(short **)(param_1 + 0x48420)) {
            FUN_14000c460(puVar2,1);
          }
          if (*(short **)(param_1 + 0x48418) != (short *)0x0) {
            **(short **)(param_1 + 0x48418) = sVar20;
          }
        }
        *(longlong *)(param_1 + 0x48418) = *(longlong *)(param_1 + 0x48418) + 2;
      }
      local_res8[0] = sVar20 + 1;
      iVar19 = (int)local_res8[0];
    } while (iVar19 < *(int *)(param_1 + 0xa4) + -1);
  }
  uVar8 = 0;
  uVar14 = uVar8;
  uVar15 = uVar8;
  if (0 < *(int *)(param_1 + 0xa0)) {
    do {
      uVar10 = uVar8;
      uVar13 = uVar8;
      if (0 < *(int *)(param_1 + 0xa4)) {
        do {
          uVar9 = (int)uVar10 + 1;
          *(undefined4 *)(uVar13 + *(longlong *)(uVar14 + *(longlong *)(param_1 + 0x2a0))) = 0;
          uVar10 = (ulonglong)uVar9;
          uVar13 = uVar13 + 0x70;
        } while ((int)uVar9 < *(int *)(param_1 + 0xa4));
      }
      uVar9 = (int)uVar15 + 1;
      uVar14 = uVar14 + 8;
      uVar15 = (ulonglong)uVar9;
    } while ((int)uVar9 < *(int *)(param_1 + 0xa0));
  }
  *(undefined1 *)(param_1 + 0x4842c) = 1;
  sVar20 = 0;
  if (*(longlong *)(param_1 + 0x230) - *(longlong *)(param_1 + 0x228) >> 3 != 0) {
    lVar12 = *(longlong *)(param_1 + 0x228);
    do {
      lVar21 = *(longlong *)(lVar12 + uVar8 * 8);
      if ((((ushort)(*(short *)(lVar21 + 0x7c) - 4U) < 2) &&
          (cVar7 = FUN_140a60c70(lVar21), cVar7 != '\0')) &&
         (iVar18 = 0, *(longlong *)(lVar21 + 0x88) - *(longlong *)(lVar21 + 0x80) >> 1 != 0)) {
        lVar17 = 0;
        do {
          iVar18 = iVar18 + 1;
          *(undefined4 *)
           ((longlong)*(short *)(*(longlong *)(lVar21 + 0x98) + -2 + lVar17 + 2) * 0x70 +
           *(longlong *)
            (*(longlong *)(param_1 + 0x2a0) +
            (longlong)*(short *)(lVar17 + *(longlong *)(lVar21 + 0x80)) * 8)) = 1;
          lVar12 = *(longlong *)(param_1 + 0x228);
          lVar21 = *(longlong *)(lVar12 + uVar8 * 8);
          lVar17 = lVar17 + 2;
        } while ((ulonglong)(longlong)iVar18 <
                 (ulonglong)(*(longlong *)(lVar21 + 0x88) - *(longlong *)(lVar21 + 0x80) >> 1));
      }
      sVar20 = sVar20 + 1;
      uVar8 = (ulonglong)sVar20;
    } while (uVar8 < (ulonglong)
                     (*(longlong *)(param_1 + 0x230) - *(longlong *)(param_1 + 0x228) >> 3));
  }
  local_res10[0] = 1;
  iVar18 = 1;
  if (1 < *(int *)(param_1 + 0xa0) + -1) {
    do {
      sVar20 = local_res10[0];
      local_res8[0] = 1;
      if (1 < *(int *)(param_1 + 0xa4) + -1) {
        iVar19 = 1;
        do {
          sVar11 = local_res8[0];
          if (((-1 < sVar20) && (iVar18 < *(int *)(param_1 + 0xa0))) &&
             ((-1 < local_res8[0] && (iVar19 < *(int *)(param_1 + 0xa4))))) {
            lVar12 = *(longlong *)(param_1 + 0x2a0);
            lVar21 = *(longlong *)(lVar12 + (longlong)sVar20 * 8);
            lVar17 = (longlong)local_res8[0] * 0x70;
            if (((0 < *(int *)(lVar17 + 0x28 + lVar21)) &&
                ((**(byte **)(lVar17 + 0x20 + lVar21) & 8) != 0)) ||
               ((sVar3 = *(short *)(lVar17 + 0x30 + lVar21), sVar3 < 0x96 &&
                (((*(int *)(lVar17 + 0x28 + lVar21) < 2 ||
                  ((*(byte *)(*(longlong *)(lVar17 + 0x20 + lVar21) + 1) & 0x40) == 0)) &&
                 (99 < sVar3)))))) {
              lVar6 = *(longlong *)(lVar12 + (longlong)(iVar18 + -1) * 8);
              lVar16 = (longlong)(iVar19 + -1) * 0x70;
              if (((((*(int *)(lVar16 + lVar6) != 0) ||
                    (lVar12 = *(longlong *)(lVar12 + (longlong)(iVar18 + 1) * 8),
                    *(int *)(lVar12 + lVar16) != 0)) ||
                   ((*(int *)(lVar6 + lVar17) != 0 ||
                    ((*(int *)(lVar12 + lVar17) != 0 ||
                     (lVar17 = (longlong)(iVar19 + 1) * 0x70, *(int *)(lVar17 + lVar6) != 0)))))) ||
                  (*(int *)(lVar17 + lVar12) != 0)) ||
                 ((*(int *)(lVar16 + lVar21) != 0 || (*(int *)(lVar17 + lVar21) != 0)))) {
                psVar4 = *(short **)(param_1 + 0x48400);
                if ((local_res10 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res10)) {
                  if (psVar4 == *(short **)(param_1 + 0x48408)) {
                    FUN_14000c460(puVar1,1);
                  }
                  if (*(undefined2 **)(param_1 + 0x48400) != (undefined2 *)0x0) {
                    **(undefined2 **)(param_1 + 0x48400) =
                         *(undefined2 *)
                          (*puVar1 + ((longlong)local_res10 - (longlong)psVar5 >> 1) * 2);
                  }
                }
                else {
                  if (psVar4 == *(short **)(param_1 + 0x48408)) {
                    FUN_14000c460(puVar1,1);
                  }
                  if (*(short **)(param_1 + 0x48400) != (short *)0x0) {
                    **(short **)(param_1 + 0x48400) = sVar20;
                  }
                }
                *(longlong *)(param_1 + 0x48400) = *(longlong *)(param_1 + 0x48400) + 2;
                psVar4 = *(short **)(param_1 + 0x48418);
                if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar2, psVar5 <= local_res8)) {
                  if (psVar4 == *(short **)(param_1 + 0x48420)) {
                    FUN_14000c460(puVar2,1);
                  }
                  if (*(undefined2 **)(param_1 + 0x48418) != (undefined2 *)0x0) {
                    **(undefined2 **)(param_1 + 0x48418) =
                         *(undefined2 *)
                          (*puVar2 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
                  }
                }
                else {
                  if (psVar4 == *(short **)(param_1 + 0x48420)) {
                    FUN_14000c460(puVar2,1);
                  }
                  if (*(short **)(param_1 + 0x48418) != (short *)0x0) {
                    **(short **)(param_1 + 0x48418) = sVar11;
                  }
                }
                *(longlong *)(param_1 + 0x48418) = *(longlong *)(param_1 + 0x48418) + 2;
              }
            }
          }
          local_res8[0] = sVar11 + 1;
          iVar19 = (int)local_res8[0];
        } while (iVar19 < *(int *)(param_1 + 0xa4) + -1);
      }
      local_res10[0] = sVar20 + 1;
      iVar18 = (int)local_res10[0];
    } while (iVar18 < *(int *)(param_1 + 0xa0) + -1);
  }
  return;
}

