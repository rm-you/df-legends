// FUN_140c7fb40 @ 140c7fb40
// callees:
//   -> 14000bd10 FUN_14000bd10
//   -> 140002020 FUN_140002020


void FUN_140c7fb40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  short sVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_20 [3];
  
  if ((*(byte *)(param_1 + 0x118) & 1) == 0) {
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    FUN_14000bd10(local_20,(*(longlong **)(param_1 + 0x5d8))[1] - **(longlong **)(param_1 + 0x5d8)
                           >> 3,param_3,param_4,0xfffffffffffffffe);
    sVar6 = (short)(*(longlong *)(param_1 + 0x12a8) - *(longlong *)(param_1 + 0x12a0) >> 2) + -1;
    if (-1 < sVar6) {
      lVar4 = (longlong)sVar6 * 4;
      lVar8 = (longlong)sVar6 * 8;
      do {
        *(undefined4 *)(lVar4 + *(longlong *)(param_1 + 0x12a0)) =
             *(undefined4 *)(*(longlong *)(lVar8 + **(longlong **)(param_1 + 0x5d8)) + 0x80);
        *(undefined4 *)(lVar4 + local_20[0]) = 100000;
        lVar8 = lVar8 + -8;
        lVar4 = lVar4 + -4;
        sVar6 = sVar6 + -1;
      } while (-1 < sVar6);
    }
    sVar6 = *(short *)(param_1 + 300);
    sVar2 = *(short *)(param_1 + 0xa4);
    if (-1 < sVar2) {
      if (((ulonglong)(longlong)sVar2 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3)) &&
         (-1 < sVar6)) {
        lVar8 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar2 * 8);
        if (((ulonglong)(longlong)sVar6 <
             (ulonglong)(*(longlong *)(lVar8 + 0x180) - *(longlong *)(lVar8 + 0x178) >> 3)) &&
           (lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x178) + (longlong)sVar6 * 8), lVar8 != 0))
        {
          iVar7 = (int)(*(longlong *)(param_1 + 0x6e8) - *(longlong *)(param_1 + 0x6e0) >> 2) + -1;
          if (-1 < iVar7) {
            uVar5 = (ulonglong)iVar7;
            lVar4 = uVar5 * 4;
            lVar9 = uVar5 * 2;
            do {
              if ((*(short *)(lVar9 + *(longlong *)(lVar8 + 0x1630)) == -1) &&
                 (**(ushort **)
                    (*(longlong *)(lVar8 + 0x15e8) +
                    (longlong)*(int *)(lVar4 + *(longlong *)(lVar8 + 0x1600)) * 8) < 3)) {
                piVar1 = (int *)(local_20[0] +
                                (longlong)*(short *)(lVar9 + *(longlong *)(lVar8 + 0x1618)) * 4);
                if (iVar7 < 0) {
                  iVar3 = 100;
                }
                else {
                  iVar3 = *(int *)(lVar4 + *(longlong *)(param_1 + 0x6e0));
                  if (uVar5 < (ulonglong)
                              (*(longlong *)(param_1 + 0x8b0) - *(longlong *)(param_1 + 0x8a8) >> 2)
                     ) {
                    iVar3 = (*(int *)(lVar4 + *(longlong *)(param_1 + 0x8a8)) * iVar3) / 100;
                  }
                }
                *piVar1 = *piVar1 * iVar3;
                *piVar1 = *piVar1 / 100;
              }
              uVar5 = uVar5 - 1;
              lVar9 = lVar9 + -2;
              lVar4 = lVar4 + -4;
              iVar7 = iVar7 + -1;
            } while (-1 < iVar7);
          }
          sVar6 = (short)(*(longlong *)(param_1 + 0x12a8) - *(longlong *)(param_1 + 0x12a0) >> 2) +
                  -1;
          if (-1 < sVar6) {
            lVar8 = (longlong)sVar6 << 2;
            do {
              iVar7 = *(int *)(lVar8 + local_20[0]) / 1000;
              *(int *)(lVar8 + local_20[0]) = iVar7;
              if (iVar7 < 0) {
                iVar7 = 0;
                *(undefined4 *)(lVar8 + local_20[0]) = 0;
              }
              else if (1000 < iVar7) {
                iVar7 = 1000;
                *(undefined4 *)(lVar8 + local_20[0]) = 1000;
              }
              *(int *)(*(longlong *)(param_1 + 0x12a0) + lVar8) =
                   *(int *)(*(longlong *)(param_1 + 0x12a0) + lVar8) * iVar7;
              *(int *)(*(longlong *)(param_1 + 0x12a0) + lVar8) =
                   *(int *)(*(longlong *)(param_1 + 0x12a0) + lVar8) / 100;
              lVar8 = lVar8 + -4;
              sVar6 = sVar6 + -1;
            } while (-1 < sVar6);
          }
        }
      }
    }
    *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 1;
    if (local_20[0] != 0) {
      FUN_140002020(local_20[0],local_20[2] - local_20[0] >> 2,4);
    }
  }
  return;
}

