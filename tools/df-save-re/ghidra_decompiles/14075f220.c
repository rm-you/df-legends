// FUN_14075f220 @ 14075f220
// callees:
//   -> 14000d840 FUN_14000d840
//   -> 14000c460 FUN_14000c460
//   -> 14000c390 FUN_14000c390


void FUN_14075f220(longlong param_1,short param_2,short param_3,int param_4,undefined8 param_5,
                  int param_6,short param_7,int param_8)

{
  ulonglong *puVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  bool bVar11;
  char cVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  short *psVar17;
  uint uVar18;
  int iVar19;
  bool bVar20;
  bool bVar21;
  short local_res10 [4];
  short local_res18 [4];
  int local_res20 [2];
  undefined4 local_78 [2];
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  
  lVar14 = DAT_141d6dd50;
  bVar20 = false;
  local_78[0] = 0xffffffff;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  if (param_2 < 0) goto LAB_14075f351;
  uVar15 = (ulonglong)param_2;
  uVar13 = DAT_141d6dd58 - DAT_141d6dd50 >> 3;
  if (uVar13 <= uVar15) goto LAB_14075f351;
  if (param_3 < 0) {
LAB_14075f2cc:
    if ((uVar13 <= uVar15) || (param_3 < 0)) goto LAB_14075f351;
    lVar16 = *(longlong *)(lVar14 + uVar15 * 8);
    if (((ulonglong)(*(longlong *)(lVar16 + 0x180) - *(longlong *)(lVar16 + 0x178) >> 3) <=
         (ulonglong)(longlong)param_3) ||
       (cVar12 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar16 + 0x178) + (longlong)param_3 * 8)
                               + 0x6a8,0xb0), cVar12 == '\0')) goto LAB_14075f351;
  }
  else {
    lVar16 = *(longlong *)(DAT_141d6dd50 + uVar15 * 8);
    if (((ulonglong)(*(longlong *)(lVar16 + 0x180) - *(longlong *)(lVar16 + 0x178) >> 3) <=
         (ulonglong)(longlong)param_3) ||
       (cVar12 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar16 + 0x178) + (longlong)param_3 * 8)
                               + 0x6a8,0x91), cVar12 == '\0')) goto LAB_14075f2cc;
  }
  cVar12 = FUN_14000d840(lVar16 + 0x1a8,0x5b);
  bVar20 = cVar12 != '\0';
LAB_14075f351:
  uVar18 = (int)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 1) - 1;
  local_70 = (ulonglong)uVar18;
  if (-1 < (int)uVar18) {
    local_60 = *(longlong *)(param_1 + 0x30);
    local_68 = (longlong)(int)uVar18;
    psVar17 = (short *)(local_60 + local_68 * 2);
    local_58 = *(longlong *)(param_1 + 0x18) - local_60;
    local_60 = -local_60;
    do {
      iVar19 = (int)local_70;
      sVar3 = *(short *)(local_58 + (longlong)psVar17);
      bVar21 = false;
      sVar4 = *psVar17;
      bVar11 = false;
      if (-1 < sVar3) {
        uVar15 = (ulonglong)sVar3;
        uVar13 = DAT_141d6dd58 - DAT_141d6dd50 >> 3;
        bVar21 = bVar11;
        if (uVar15 < uVar13) {
          if (sVar4 < 0) {
LAB_14075f415:
            if ((uVar15 < uVar13) && (-1 < sVar4)) {
              lVar14 = *(longlong *)(DAT_141d6dd50 + uVar15 * 8);
              if (((ulonglong)(longlong)sVar4 <
                   (ulonglong)(*(longlong *)(lVar14 + 0x180) - *(longlong *)(lVar14 + 0x178) >> 3))
                 && (cVar12 = FUN_14000d840(*(longlong *)
                                             (*(longlong *)(lVar14 + 0x178) + (longlong)sVar4 * 8) +
                                            0x6a8,0xb0), cVar12 != '\0')) goto LAB_14075f45f;
            }
          }
          else {
            lVar14 = *(longlong *)(DAT_141d6dd50 + uVar15 * 8);
            if (((ulonglong)(*(longlong *)(lVar14 + 0x180) - *(longlong *)(lVar14 + 0x178) >> 3) <=
                 (ulonglong)(longlong)sVar4) ||
               (cVar12 = FUN_14000d840(*(longlong *)
                                        (*(longlong *)(lVar14 + 0x178) + (longlong)sVar4 * 8) +
                                       0x6a8,0x91), cVar12 == '\0')) goto LAB_14075f415;
LAB_14075f45f:
            cVar12 = FUN_14000d840(lVar14 + 0x1a8,0x5b);
            bVar21 = cVar12 != '\0';
          }
        }
        iVar19 = (int)local_70;
      }
      if ((((sVar3 == local_res10[0]) && (sVar4 == local_res18[0])) || ((bVar20 && (bVar21)))) &&
         ((((*(int *)(*(longlong *)(param_1 + 0x48) + local_68 * 4) == -1 &&
            (*(int *)(*(longlong *)(param_1 + 0x60) + local_68 * 4) == local_res20[0])) &&
           (*(int *)(*(longlong *)(param_1 + 0x78) + local_68 * 4) == param_6)) &&
          (*(short *)((longlong)psVar17 + *(longlong *)(param_1 + 0x90) + local_60) == param_7)))) {
        piVar2 = (int *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar19 * 4);
        *piVar2 = *piVar2 + param_8;
        return;
      }
      local_70 = (ulonglong)(iVar19 - 1);
      local_68 = local_68 + -1;
      psVar17 = psVar17 + -1;
      param_3 = local_res18[0];
      param_2 = local_res10[0];
    } while (-1 < local_68);
  }
  psVar17 = *(short **)(param_1 + 0x20);
  if ((local_res10 < psVar17) && (psVar5 = *(short **)(param_1 + 0x18), psVar5 <= local_res10)) {
    if (psVar17 == *(short **)(param_1 + 0x28)) {
      FUN_14000c460(param_1 + 0x18,1);
    }
    if (*(undefined2 **)(param_1 + 0x20) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x20) =
           *(undefined2 *)
            (*(longlong *)(param_1 + 0x18) + ((longlong)local_res10 - (longlong)psVar5 >> 1) * 2);
    }
  }
  else {
    if (psVar17 == *(short **)(param_1 + 0x28)) {
      FUN_14000c460(param_1 + 0x18,1);
    }
    if (*(short **)(param_1 + 0x20) != (short *)0x0) {
      **(short **)(param_1 + 0x20) = param_2;
    }
  }
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 2;
  psVar17 = *(short **)(param_1 + 0x38);
  if ((local_res18 < psVar17) && (psVar5 = *(short **)(param_1 + 0x30), psVar5 <= local_res18)) {
    if (psVar17 == *(short **)(param_1 + 0x40)) {
      FUN_14000c460(param_1 + 0x30,1);
    }
    if (*(undefined2 **)(param_1 + 0x38) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x38) =
           *(undefined2 *)
            (*(longlong *)(param_1 + 0x30) + ((longlong)local_res18 - (longlong)psVar5 >> 1) * 2);
    }
  }
  else {
    if (psVar17 == *(short **)(param_1 + 0x40)) {
      FUN_14000c460(param_1 + 0x30,1);
    }
    if (*(short **)(param_1 + 0x38) != (short *)0x0) {
      **(short **)(param_1 + 0x38) = param_3;
    }
  }
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 2;
  puVar6 = *(undefined4 **)(param_1 + 0x50);
  if ((local_78 < puVar6) && (puVar7 = *(undefined4 **)(param_1 + 0x48), puVar7 <= local_78)) {
    if (puVar6 == *(undefined4 **)(param_1 + 0x58)) {
      FUN_14000c390(param_1 + 0x48,1);
    }
    if (*(undefined4 **)(param_1 + 0x50) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 0x50) =
           *(undefined4 *)
            (*(longlong *)(param_1 + 0x48) + ((longlong)local_78 - (longlong)puVar7 >> 2) * 4);
    }
  }
  else {
    if (puVar6 == *(undefined4 **)(param_1 + 0x58)) {
      FUN_14000c390(param_1 + 0x48,1);
    }
    if (*(undefined4 **)(param_1 + 0x50) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 0x50) = 0xffffffff;
    }
  }
  *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + 4;
  piVar2 = *(int **)(param_1 + 0x68);
  if ((local_res20 < piVar2) && (piVar8 = *(int **)(param_1 + 0x60), piVar8 <= local_res20)) {
    if (piVar2 == *(int **)(param_1 + 0x70)) {
      FUN_14000c390(param_1 + 0x60,1);
    }
    if (*(undefined4 **)(param_1 + 0x68) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 0x68) =
           *(undefined4 *)
            (*(longlong *)(param_1 + 0x60) + ((longlong)local_res20 - (longlong)piVar8 >> 2) * 4);
    }
  }
  else {
    if (piVar2 == *(int **)(param_1 + 0x70)) {
      FUN_14000c390(param_1 + 0x60,1);
    }
    if (*(int **)(param_1 + 0x68) != (int *)0x0) {
      **(int **)(param_1 + 0x68) = local_res20[0];
    }
  }
  *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + 4;
  puVar6 = *(undefined4 **)(param_1 + 0x80);
  if ((&param_6 < puVar6) && (puVar7 = *(undefined4 **)(param_1 + 0x78), puVar7 <= &param_6)) {
    if (puVar6 == *(undefined4 **)(param_1 + 0x88)) {
      FUN_14000c390(param_1 + 0x78,1);
    }
    if (*(undefined4 **)(param_1 + 0x80) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 0x80) =
           *(undefined4 *)
            (*(longlong *)(param_1 + 0x78) + ((longlong)&param_6 - (longlong)puVar7 >> 2) * 4);
    }
  }
  else {
    if (puVar6 == *(undefined4 **)(param_1 + 0x88)) {
      FUN_14000c390(param_1 + 0x78,1);
    }
    if (*(int **)(param_1 + 0x80) != (int *)0x0) {
      **(int **)(param_1 + 0x80) = param_6;
    }
  }
  *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + 4;
  puVar1 = (ulonglong *)(param_1 + 0x90);
  puVar9 = *(undefined2 **)(param_1 + 0x98);
  if ((&param_7 < puVar9) && (puVar10 = (undefined2 *)*puVar1, puVar10 <= &param_7)) {
    if (puVar9 == *(undefined2 **)(param_1 + 0xa0)) {
      FUN_14000c460(puVar1,1);
    }
    if (*(undefined2 **)(param_1 + 0x98) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x98) =
           *(undefined2 *)(*puVar1 + ((longlong)&param_7 - (longlong)puVar10 >> 1) * 2);
    }
  }
  else {
    if (puVar9 == *(undefined2 **)(param_1 + 0xa0)) {
      FUN_14000c460(puVar1,1);
    }
    if (*(short **)(param_1 + 0x98) != (short *)0x0) {
      **(short **)(param_1 + 0x98) = param_7;
    }
  }
  *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 2;
  puVar1 = (ulonglong *)(param_1 + 0xa8);
  puVar6 = *(undefined4 **)(param_1 + 0xb0);
  if ((&param_8 < puVar6) && (puVar7 = (undefined4 *)*puVar1, puVar7 <= &param_8)) {
    if (puVar6 == *(undefined4 **)(param_1 + 0xb8)) {
      FUN_14000c390(puVar1,1);
    }
    if (*(undefined4 **)(param_1 + 0xb0) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 0xb0) =
           *(undefined4 *)(*puVar1 + ((longlong)&param_8 - (longlong)puVar7 >> 2) * 4);
    }
  }
  else {
    if (puVar6 == *(undefined4 **)(param_1 + 0xb8)) {
      FUN_14000c390(puVar1,1);
    }
    if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
      **(int **)(param_1 + 0xb0) = param_8;
    }
  }
  *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + 4;
  return;
}

