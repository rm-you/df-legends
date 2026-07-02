// FUN_140d2af20 @ 140d2af20
// callees:
//   -> 14014a480 FUN_14014a480
//   -> 1400508e0 FUN_1400508e0
//   -> 14007b9f0 FUN_14007b9f0
//   -> 140050640 FUN_140050640
//   -> 14000bc60 FUN_14000bc60
//   -> 14000be20 FUN_14000be20
//   -> 140050070 FUN_140050070
//   -> 140ced1b0 FUN_140ced1b0
//   -> 140cee3c0 FUN_140cee3c0
//   -> 140907980 FUN_140907980
//   -> 140ced860 FUN_140ced860
//   -> 140dfb5c4 operator_new
//   -> 140ced020 FUN_140ced020
//   -> 140cee4c0 FUN_140cee4c0


void FUN_140d2af20(longlong param_1,longlong *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  short sVar6;
  longlong lVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  void *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  uVar11 = 0;
  if (*(int *)((longlong)param_2 + 0x54) == -1) {
    uVar12 = uVar11;
    uVar14 = uVar11;
    if (*(longlong *)(param_1 + 0x13c28) - *(longlong *)(param_1 + 0x13c20) >> 3 != 0) {
      do {
        lVar3 = *(longlong *)(uVar12 + *(longlong *)(param_1 + 0x13c20));
        if (*(longlong *)(lVar3 + 0x18) != 0) {
          iVar1 = *(int *)(lVar3 + 8);
          if (iVar1 == -1) {
            FUN_14014a480("Null unit chunk on export");
          }
          else if ((*(uint *)(*(longlong *)(lVar3 + 0x18) + 0x110) & 0x80000000) == 0) {
            piVar2 = (int *)*param_2;
            uVar10 = param_2[1] - (longlong)piVar2 >> 2;
            uVar5 = uVar11;
            piVar8 = piVar2;
            uVar9 = uVar11;
            uVar13 = 0;
            if (uVar10 != 0) {
              do {
                uVar13 = (uint)uVar5;
                if ((iVar1 < *piVar8) ||
                   ((*piVar8 == iVar1 && (*(short *)(lVar3 + 0xc) < *(short *)(uVar9 + param_2[3])))
                   )) {
                  lVar7 = (longlong)(int)uVar13;
                  FUN_1400508e0(param_2,&local_res10,piVar2 + lVar7,uVar9,(int *)(lVar3 + 8));
                  FUN_14007b9f0(param_2 + 3,local_res18,param_2[3] + lVar7 * 2);
                  FUN_140050640(param_2 + 6,local_res20,param_2[6] + lVar7 * 8);
                  break;
                }
                uVar13 = uVar13 + 1;
                uVar5 = (ulonglong)uVar13;
                piVar8 = piVar8 + 1;
                uVar9 = uVar9 + 2;
              } while ((ulonglong)(longlong)(int)uVar13 < uVar10);
            }
            if ((longlong)(int)uVar13 == param_2[1] - *param_2 >> 2) {
              FUN_14000bc60(param_2,*(longlong *)(uVar12 + *(longlong *)(param_1 + 0x13c20)) + 8);
              FUN_14000be20(param_2 + 3,
                            *(longlong *)(uVar12 + *(longlong *)(param_1 + 0x13c20)) + 0xc);
              FUN_140050070(param_2 + 6,
                            *(longlong *)(uVar12 + *(longlong *)(param_1 + 0x13c20)) + 0x18);
            }
            *(undefined8 *)(*(longlong *)(uVar12 + *(longlong *)(param_1 + 0x13c20)) + 0x18) = 0;
          }
        }
        uVar13 = (int)uVar14 + 1;
        uVar12 = uVar12 + 8;
        uVar14 = (ulonglong)uVar13;
      } while ((ulonglong)(longlong)(int)uVar13 <
               (ulonglong)(*(longlong *)(param_1 + 0x13c28) - *(longlong *)(param_1 + 0x13c20) >> 3)
              );
    }
    *(undefined4 *)((longlong)param_2 + 0x54) = 0;
  }
  lVar3 = *param_2;
  iVar1 = *(int *)((longlong)param_2 + 0x54);
  if (iVar1 < (int)(param_2[1] - lVar3 >> 2)) {
    if (*(int *)(lVar3 + (longlong)iVar1 * 4) != (int)param_2[10]) {
      *(undefined4 *)(param_2 + 10) = *(undefined4 *)(lVar3 + (longlong)iVar1 * 4);
      if (param_2[9] != 0) {
        FUN_140ced1b0();
        lVar3 = param_2[9];
        sVar6 = 0;
        do {
          FUN_140cee3c0(lVar3,sVar6);
          sVar6 = sVar6 + 1;
        } while (sVar6 < 100);
        FUN_140907980(param_1 + 0x13bf0,param_2[9]);
        param_2[9] = 0;
      }
      lVar3 = FUN_140ced860();
      param_2[9] = lVar3;
      if (lVar3 == 0) {
        local_res10 = operator_new(0xc88);
        puVar4 = (undefined4 *)FUN_140ced020(local_res10);
        param_2[9] = (longlong)puVar4;
        *puVar4 = (int)param_2[10];
      }
    }
    if (param_2[9] != 0) {
      FUN_140cee4c0(param_2[9],
                    *(undefined2 *)(param_2[3] + (longlong)*(int *)((longlong)param_2 + 0x54) * 2),
                    *(undefined8 *)(param_2[6] + (longlong)*(int *)((longlong)param_2 + 0x54) * 8));
    }
    *(int *)((longlong)param_2 + 0x54) = *(int *)((longlong)param_2 + 0x54) + 1;
  }
  if (((int)(param_2[1] - *param_2 >> 2) <= *(int *)((longlong)param_2 + 0x54)) && (param_2[9] != 0)
     ) {
    FUN_140ced1b0();
    lVar3 = param_2[9];
    sVar6 = 0;
    do {
      FUN_140cee3c0(lVar3,sVar6);
      sVar6 = sVar6 + 1;
    } while (sVar6 < 100);
    FUN_140907980(param_1 + 0x13bf0,param_2[9]);
    param_2[9] = 0;
  }
  return;
}

