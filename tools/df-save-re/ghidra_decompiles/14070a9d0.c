// FUN_14070a9d0 @ 14070a9d0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140315ac0 FUN_140315ac0
//   -> 140002380 FUN_140002380
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140707820 FUN_140707820
//   -> 140707c90 FUN_140707c90
//   -> 140708160 FUN_140708160
//   -> 140dfb5c4 operator_new
//   -> 14070b110 FUN_14070b110
//   -> 14000d840 FUN_14000d840
//   -> 140914ff0 FUN_140914ff0
//   -> 1407ba900 FUN_1407ba900
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove
//   -> 1406fb120 FUN_1406fb120


void FUN_14070a9d0(longlong param_1,undefined8 param_2,int param_3)

{
  void *pvVar1;
  longlong *plVar2;
  short sVar3;
  short sVar4;
  longlong lVar5;
  int *piVar6;
  char cVar7;
  undefined8 uVar8;
  void *pvVar9;
  uint uVar10;
  int iVar11;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  int local_res8 [2];
  char local_res18 [8];
  undefined8 *local_res20;
  ulonglong uVar12;
  
  FUN_1405bba90(param_2,param_1,2);
  FUN_1405bba90(param_2,param_1 + 2,2);
  FUN_1405bba90(param_2,param_1 + 4,2);
  FUN_1405bba90(param_2,param_1 + 6,1);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_1405bba90(param_2,param_1 + 0x10,4);
  FUN_1405bba90(param_2,param_1 + 0x14,4);
  FUN_1405bba90(param_2,param_1 + 0x18,4);
  FUN_1405bba90(param_2,param_1 + 0x1c,4);
  FUN_1405bba90(param_2,param_1 + 0x20,4);
  FUN_1405bba90(param_2,param_1 + 0x24,4);
  FUN_1405bba90(param_2,param_1 + 0x28,4);
  FUN_1405bba90(param_2,param_1 + 0x2c,4);
  FUN_1405bba90(param_2,param_1 + 0x30,4);
  FUN_1405bba90(param_2,param_1 + 0x34,4);
  FUN_140315ac0(param_1 + 0x38,param_2);
  FUN_1405bba90(param_2,param_1 + 0xb0,4);
  FUN_1405bba90(param_2,param_1 + 0xb4,4);
  FUN_1405bba90(param_2,param_1 + 0xb8,4);
  FUN_1405bba90(param_2,param_1 + 0xbc,4);
  if (0x618 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0xc0,4);
  }
  FUN_1405bba90(param_2,param_1 + 0xe4,4);
  FUN_1405bba90(param_2,param_1 + 0xd8,4);
  FUN_1405bba90(param_2,param_1 + 0xdc,4);
  FUN_140002380(param_1 + 200,param_2);
  FUN_1405bba90(param_2,param_1 + 0xe0,4);
  FUN_1405bba90(param_2,local_res8,4);
  plVar2 = (longlong *)(param_1 + 0xe8);
  FUN_14000b9d0(plVar2,(longlong)local_res8[0]);
  uVar12 = 0;
  uVar14 = uVar12;
  if (*(longlong *)(param_1 + 0xf0) - *plVar2 >> 3 != 0) {
    do {
      lVar13 = *plVar2;
      uVar8 = FUN_140707820(param_2);
      *(undefined8 *)(lVar13 + uVar14) = uVar8;
      (**(code **)(**(longlong **)(uVar14 + *plVar2) + 0x18))
                (*(longlong **)(uVar14 + *plVar2),param_2,param_3);
      uVar10 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar10;
      uVar14 = uVar14 + 8;
    } while ((ulonglong)(longlong)(int)uVar10 <
             (ulonglong)(*(longlong *)(param_1 + 0xf0) - *plVar2 >> 3));
  }
  uVar12 = 0;
  FUN_1405bba90(param_2,local_res8,4);
  plVar2 = (longlong *)(param_1 + 0x100);
  FUN_14000b9d0(plVar2,(longlong)local_res8[0]);
  uVar14 = uVar12;
  if (*(longlong *)(param_1 + 0x108) - *plVar2 >> 3 != 0) {
    do {
      lVar13 = *plVar2;
      uVar8 = FUN_140707c90(param_2);
      *(undefined8 *)(lVar13 + uVar14) = uVar8;
      (**(code **)(**(longlong **)(uVar14 + *plVar2) + 0x18))
                (*(longlong **)(uVar14 + *plVar2),param_2,param_3);
      uVar10 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar10;
      uVar14 = uVar14 + 8;
    } while ((ulonglong)(longlong)(int)uVar10 <
             (ulonglong)(*(longlong *)(param_1 + 0x108) - *plVar2 >> 3));
  }
  lVar13 = 0;
  FUN_1405bba90(param_2,local_res8,4);
  plVar2 = (longlong *)(param_1 + 0x118);
  FUN_14000b9d0(plVar2,(longlong)local_res8[0]);
  iVar11 = 0;
  if (*(longlong *)(param_1 + 0x120) - *plVar2 >> 3 != 0) {
    do {
      lVar15 = *plVar2;
      uVar8 = FUN_140708160(param_2);
      *(undefined8 *)(lVar15 + lVar13) = uVar8;
      (**(code **)(**(longlong **)(lVar13 + *plVar2) + 0x18))
                (*(longlong **)(lVar13 + *plVar2),param_2,param_3);
      lVar13 = lVar13 + 8;
      iVar11 = iVar11 + 1;
    } while ((ulonglong)(longlong)iVar11 <
             (ulonglong)(*(longlong *)(param_1 + 0x120) - *plVar2 >> 3));
  }
  FUN_1405bba90(param_2,local_res18,1);
  if (local_res18[0] == '\0') {
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  else {
    local_res20 = operator_new(0x68);
    *local_res20 = 0;
    local_res20[1] = 0;
    local_res20[2] = 0;
    local_res20[3] = 0;
    local_res20[4] = 0;
    local_res20[5] = 0;
    local_res20[6] = 0;
    local_res20[7] = 0;
    local_res20[8] = 0;
    local_res20[9] = 0;
    local_res20[10] = 0;
    local_res20[0xb] = 0;
    local_res20[0xc] = 0;
    *(undefined8 **)(param_1 + 0x130) = local_res20;
    FUN_14070b110(local_res20,param_2,param_3);
  }
  lVar13 = DAT_141d6dd50;
  if (((param_3 < 0x5cb) && (*(longlong *)(param_1 + 0x130) != 0)) &&
     (lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x18), lVar15 != 0)) {
    sVar3 = *(short *)(param_1 + 2);
    sVar4 = *(short *)(param_1 + 4);
    if (((-1 < sVar3) &&
        ((ulonglong)(longlong)sVar3 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
       (-1 < sVar4)) {
      lVar5 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar3 * 8);
      if (((ulonglong)(longlong)sVar4 <
           (ulonglong)(*(longlong *)(lVar5 + 0x180) - *(longlong *)(lVar5 + 0x178) >> 3)) &&
         (cVar7 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar5 + 0x178) + (longlong)sVar4 * 8) +
                                0x6a8,0x3a), cVar7 != '\0')) {
        FUN_140914ff0(lVar15);
        FUN_1407ba900(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x18));
        lVar13 = DAT_141d6dd50;
      }
    }
  }
  if (((param_3 < 0x648) && (*(longlong *)(param_1 + 0x130) != 0)) &&
     (lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x18), lVar15 != 0)) {
    sVar3 = *(short *)(param_1 + 2);
    sVar4 = *(short *)(param_1 + 4);
    if (((-1 < sVar3) && ((ulonglong)(longlong)sVar3 < (ulonglong)(DAT_141d6dd58 - lVar13 >> 3))) &&
       (-1 < sVar4)) {
      lVar13 = *(longlong *)(lVar13 + (longlong)sVar3 * 8);
      if (((ulonglong)(longlong)sVar4 <
           (ulonglong)(*(longlong *)(lVar13 + 0x180) - *(longlong *)(lVar13 + 0x178) >> 3)) &&
         (cVar7 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar13 + 0x178) + (longlong)sVar4 * 8) +
                                0x6a8,0x3a), cVar7 != '\0')) goto LAB_14070b0a6;
    }
    if (0 < *(int *)(lVar15 + 0x130)) {
      if ((99 < *(int *)(lVar15 + 0x130)) &&
         (iVar11 = (int)(*(longlong *)(lVar15 + 0x140) - *(longlong *)(lVar15 + 0x138) >> 3) + -1,
         -1 < iVar11)) {
        lVar13 = (longlong)iVar11 * 8;
        lVar15 = lVar13;
        do {
          piVar6 = *(int **)(lVar13 + *(longlong *)
                                       (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x18) + 0x138
                                       ));
          if (*piVar6 == 1) {
            free(piVar6);
            lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x18);
            pvVar9 = (void *)(*(longlong *)(lVar5 + 0x138) + lVar15);
            pvVar1 = (void *)((longlong)pvVar9 + 8);
            memmove(pvVar9,pvVar1,*(longlong *)(lVar5 + 0x140) - (longlong)pvVar1);
            *(longlong *)(lVar5 + 0x140) = *(longlong *)(lVar5 + 0x140) + -8;
          }
          lVar15 = lVar15 + -8;
          lVar13 = lVar13 + -8;
          iVar11 = iVar11 + -1;
        } while (-1 < iVar11);
      }
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x18) + 0x130) = 0;
    }
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x18);
    iVar11 = (int)(*(longlong *)(lVar13 + 0x140) - *(longlong *)(lVar13 + 0x138) >> 3) + -1;
    if (-1 < iVar11) {
      lVar13 = (longlong)iVar11 * 8;
      lVar15 = lVar13;
      do {
        piVar6 = *(int **)(lVar13 + *(longlong *)
                                     (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x18) + 0x138))
        ;
        if (*piVar6 == 2) {
          free(piVar6);
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x18);
          pvVar9 = (void *)(*(longlong *)(lVar5 + 0x138) + lVar15);
          pvVar1 = (void *)((longlong)pvVar9 + 8);
          memmove(pvVar9,pvVar1,*(longlong *)(lVar5 + 0x140) - (longlong)pvVar1);
          *(longlong *)(lVar5 + 0x140) = *(longlong *)(lVar5 + 0x140) + -8;
        }
        lVar15 = lVar15 + -8;
        lVar13 = lVar13 + -8;
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
    }
  }
LAB_14070b0a6:
  if ((0x6a0 < param_3) && (FUN_1405bba90(param_2,local_res18,1), local_res18[0] != '\0')) {
    local_res20 = operator_new(0x28);
    *(undefined4 *)((longlong)local_res20 + 0x24) = 0;
    *(undefined8 **)(param_1 + 0x138) = local_res20;
    FUN_1406fb120(local_res20,param_2);
  }
  return;
}

