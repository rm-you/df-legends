// FUN_140de31f0 @ 140de31f0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove
//   -> 140050b50 FUN_140050b50
//   -> 140de35c0 FUN_140de35c0
//   -> 140de36e0 FUN_140de36e0
//   -> 140de4a60 FUN_140de4a60
//   -> 140de4b80 FUN_140de4b80
//   -> 140002020 FUN_140002020


void FUN_140de31f0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  undefined4 *puVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong local_60 [4];
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x119b60) + 0x170);
  for (plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x119b60) + 0x168); plVar15 < plVar1;
      plVar15 = plVar15 + 1) {
    plVar13 = *(longlong **)(*plVar15 + 0x2b0);
    plVar2 = *(longlong **)(*plVar15 + 0x2b8);
    if (plVar13 < plVar2) {
      do {
        lVar3 = *plVar13;
        plVar4 = *(longlong **)(lVar3 + 0x88);
        if ((plVar4 != (longlong *)0x0) &&
           (iVar17 = (int)(plVar4[1] - *plVar4 >> 3) + -1, -1 < iVar17)) {
          lVar12 = (longlong)iVar17 * 8;
          lVar18 = lVar12;
          do {
            pvVar5 = *(void **)(**(longlong **)(lVar3 + 0x88) + lVar18);
            if (0x1ec2ff <
                ((DAT_1416b1980 - *(int *)((longlong)pvVar5 + 0x10)) * 0x62700 -
                *(int *)((longlong)pvVar5 + 0x14)) + DAT_1416b1974) {
              lVar11 = 0;
              if (*(longlong *)(lVar3 + 0x90) == 0) {
                puVar10 = operator_new(0x20);
                *puVar10 = 0;
                puVar10[1] = 0;
                puVar10[2] = 0;
                puVar10[3] = 0;
                *(undefined8 **)(lVar3 + 0x90) = puVar10;
              }
              do {
                iVar9 = *(int *)((longlong)pvVar5 + lVar11 + 0x18);
                if (0 < iVar9) {
                  lVar6 = *(longlong *)(lVar3 + 0x90);
                  if (*(int *)(lVar6 + lVar11) == 0) {
                    *(int *)(lVar6 + lVar11) = iVar9;
                  }
                  else {
                    *(int *)(lVar6 + lVar11) = (*(int *)(lVar6 + lVar11) + iVar9 + 1) / 2;
                  }
                }
                lVar11 = lVar11 + 4;
              } while (lVar11 < 0x20);
              free(pvVar5);
              plVar4 = *(longlong **)(lVar3 + 0x88);
              pvVar5 = (void *)(lVar12 + *plVar4 + 8);
              memmove((void *)(lVar12 + *plVar4),pvVar5,plVar4[1] - (longlong)pvVar5);
              plVar4[1] = plVar4[1] + -8;
            }
            lVar12 = lVar12 + -8;
            lVar18 = lVar18 + -8;
            iVar17 = iVar17 + -1;
          } while (-1 < iVar17);
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 < plVar2);
    }
  }
  uVar19 = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  puVar10 = *(undefined8 **)(param_1 + 0x115d38);
  uVar14 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x115d40) + (7 - (longlong)puVar10)) >>
           3;
  if (*(undefined8 **)(param_1 + 0x115d40) < puVar10) {
    uVar14 = uVar19;
  }
  uVar16 = uVar19;
  if (uVar14 != 0) {
    do {
      puVar7 = (undefined4 *)*puVar10;
      if ((*(byte *)(puVar7 + 0x3b) & 4) == 0) {
        bVar8 = false;
        iVar17 = DAT_1416b1980 - puVar7[0x39];
        if (-1 < iVar17) {
          iVar9 = DAT_1416b1974 - puVar7[0x3a];
          if (iVar17 < 2) {
            if (iVar17 == 1) {
              iVar9 = iVar9 + 0x62700;
            }
          }
          else {
            bVar8 = true;
          }
          if ((0x20cf < iVar9) || (bVar8)) {
            FUN_140050b50(*puVar7);
            puVar7[0x3b] = puVar7[0x3b] | 4;
          }
        }
      }
      puVar10 = puVar10 + 1;
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar14);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x115e70);
  uVar14 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x115e78) + (7 - (longlong)puVar10)) >>
           3;
  if (*(undefined8 **)(param_1 + 0x115e78) < puVar10) {
    uVar14 = uVar19;
  }
  uVar16 = uVar19;
  if (uVar14 != 0) {
    do {
      FUN_140de35c0(*puVar10,local_60);
      puVar10 = puVar10 + 1;
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar14);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x126c38);
  uVar14 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x126c40) + (7 - (longlong)puVar10)) >>
           3;
  if (*(undefined8 **)(param_1 + 0x126c40) < puVar10) {
    uVar14 = uVar19;
  }
  uVar16 = uVar19;
  if (uVar14 != 0) {
    do {
      FUN_140de36e0(*puVar10,local_60);
      puVar10 = puVar10 + 1;
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar14);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x13b60);
  uVar14 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x13b68) + (7 - (longlong)puVar10)) >> 3
  ;
  if (*(undefined8 **)(param_1 + 0x13b68) < puVar10) {
    uVar14 = uVar19;
  }
  uVar16 = uVar19;
  if (uVar14 != 0) {
    do {
      FUN_140de4a60(*puVar10,local_60);
      puVar10 = puVar10 + 1;
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar14);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x2a8);
  uVar14 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x2b0) + (7 - (longlong)puVar10)) >> 3;
  if (*(undefined8 **)(param_1 + 0x2b0) < puVar10) {
    uVar14 = uVar19;
  }
  if (uVar14 != 0) {
    do {
      FUN_140de4b80(*puVar10,local_60);
      puVar10 = puVar10 + 1;
      uVar19 = uVar19 + 1;
    } while (uVar19 < uVar14);
  }
  if (local_60[0] != 0) {
    FUN_140002020(local_60[0],local_60[2] - local_60[0] >> 2,4);
  }
  return;
}

