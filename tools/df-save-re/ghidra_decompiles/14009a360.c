// FUN_14009a360 @ 14009a360
// callees:
//   -> 140051c50 FUN_140051c50


void FUN_14009a360(longlong param_1,int *param_2,longlong param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if (*(int *)(param_1 + 0x50) < param_2[10]) {
    *(int *)(param_1 + 0x50) = param_2[10];
  }
  if (param_2[0xb] < *(int *)(param_1 + 0x54)) {
    *(int *)(param_1 + 0x54) = param_2[0xb];
  }
  if (param_2[0xc] < *(int *)(param_1 + 0xe4)) {
    *(int *)(param_1 + 0xe4) = param_2[0xc];
  }
  if (*(int *)(param_1 + 0xec) < param_2[0xd]) {
    *(int *)(param_1 + 0xec) = param_2[0xd];
  }
  if (*(int *)(param_1 + 0xe8) < param_2[0xe]) {
    *(int *)(param_1 + 0xe8) = param_2[0xe];
  }
  if (param_3 == 0) {
    iVar3 = *param_2;
    if (iVar3 != -1) {
      uVar11 = 0;
      iVar7 = (int)(DAT_141c67098 - DAT_141c67090 >> 3) + -1;
      uVar10 = uVar11;
      if (-1 < iVar7) {
        do {
          iVar6 = iVar7 + (int)uVar10 >> 1;
          piVar5 = *(int **)(DAT_141c67090 + (longlong)iVar6 * 8);
          if (*piVar5 == iVar3) {
            if (piVar5 == (int *)0x0) {
              return;
            }
            lVar4 = *(longlong *)(piVar5 + 4);
            if ((0 < *(int *)(lVar4 + 0xd0)) && ((**(byte **)(lVar4 + 200) & 0x80) != 0)) {
              return;
            }
            sVar1 = *(short *)(lVar4 + 2);
            sVar2 = *(short *)(lVar4 + 4);
            if (sVar1 < 0) {
              return;
            }
            if ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar1) {
              return;
            }
            if (sVar2 < 0) {
              return;
            }
            lVar4 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8);
            if ((ulonglong)(*(longlong *)(lVar4 + 0x180) - *(longlong *)(lVar4 + 0x178) >> 3) <=
                (ulonglong)(longlong)sVar2) {
              return;
            }
            lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x178) + (longlong)sVar2 * 8);
            if (lVar4 == 0) {
              return;
            }
            puVar8 = *(undefined8 **)(lVar4 + 0x3e78);
            uVar10 = (ulonglong)((longlong)*(undefined8 **)(lVar4 + 16000) + (7 - (longlong)puVar8))
                     >> 3;
            if (*(undefined8 **)(lVar4 + 16000) < puVar8) {
              uVar10 = uVar11;
            }
            uVar9 = uVar11;
            if (uVar10 != 0) {
              do {
                FUN_140051c50(param_1 + 0x108,*puVar8);
                uVar9 = uVar9 + 1;
                puVar8 = puVar8 + 1;
              } while (uVar9 < uVar10);
            }
            puVar8 = *(undefined8 **)(lVar4 + 0x4260);
            uVar10 = (ulonglong)((longlong)*(undefined8 **)(lVar4 + 17000) + (7 - (longlong)puVar8))
                     >> 3;
            if (*(undefined8 **)(lVar4 + 17000) < puVar8) {
              uVar10 = uVar11;
            }
            if (uVar10 == 0) {
              return;
            }
            do {
              FUN_140051c50(param_1 + 0xf0,*puVar8);
              uVar11 = uVar11 + 1;
              puVar8 = puVar8 + 1;
            } while (uVar11 < uVar10);
            return;
          }
          if (iVar3 < *piVar5) {
            iVar7 = iVar6 + -1;
          }
          else {
            uVar10 = (ulonglong)(iVar6 + 1);
          }
        } while ((int)uVar10 <= iVar7);
      }
    }
  }
  else if ((*(uint *)(param_3 + 0x118) & 0x1000) == 0) {
    sVar1 = *(short *)(param_3 + 0xa4);
    sVar2 = *(short *)(param_3 + 300);
    if (((-1 < sVar1) &&
        ((ulonglong)(longlong)sVar1 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
       (-1 < sVar2)) {
      lVar4 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8);
      if (((ulonglong)(longlong)sVar2 <
           (ulonglong)(*(longlong *)(lVar4 + 0x180) - *(longlong *)(lVar4 + 0x178) >> 3)) &&
         (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x178) + (longlong)sVar2 * 8), lVar4 != 0)) {
        uVar11 = 0;
        puVar8 = *(undefined8 **)(lVar4 + 0x3e78);
        uVar10 = (ulonglong)((longlong)*(undefined8 **)(lVar4 + 16000) + (7 - (longlong)puVar8)) >>
                 3;
        if (*(undefined8 **)(lVar4 + 16000) < puVar8) {
          uVar10 = uVar11;
        }
        uVar9 = uVar11;
        if (uVar10 != 0) {
          do {
            FUN_140051c50(param_1 + 0x108,*puVar8);
            uVar9 = uVar9 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar9 < uVar10);
        }
        puVar8 = *(undefined8 **)(lVar4 + 0x4260);
        uVar10 = (ulonglong)((longlong)*(undefined8 **)(lVar4 + 17000) + (7 - (longlong)puVar8)) >>
                 3;
        if (*(undefined8 **)(lVar4 + 17000) < puVar8) {
          uVar10 = uVar11;
        }
        if (uVar10 != 0) {
          do {
            FUN_140051c50(param_1 + 0xf0,*puVar8);
            uVar11 = uVar11 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar11 < uVar10);
        }
      }
    }
  }
  return;
}

