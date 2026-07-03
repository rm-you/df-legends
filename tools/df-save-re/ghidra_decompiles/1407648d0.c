// FUN_1407648d0 @ 1407648d0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 1406f8040 FUN_1406f8040
//   -> 140428600 FUN_140428600


void FUN_1407648d0(longlong param_1)

{
  uint *puVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  
  if (*(longlong *)(param_1 + 0x130) == 0) {
    puVar5 = operator_new(0x68);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    *(undefined8 **)(param_1 + 0x130) = puVar5;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x38) == 0) {
    pvVar6 = operator_new(0x48);
    uVar7 = FUN_1406f8040(pvVar6);
    *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x38) = uVar7;
    sVar2 = *(short *)(param_1 + 4);
    sVar3 = *(short *)(param_1 + 2);
    if (-1 < sVar3) {
      if (((ulonglong)(longlong)sVar3 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3)) &&
         (-1 < sVar2)) {
        lVar4 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar3 * 8);
        if ((ulonglong)(longlong)sVar2 <
            (ulonglong)(*(longlong *)(lVar4 + 0x180) - *(longlong *)(lVar4 + 0x178) >> 3)) {
          lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x178) + (longlong)sVar2 * 8);
          plVar8 = (longlong *)(lVar4 + 0x6c0);
          if (plVar8 != (longlong *)0x0) {
            FUN_140428600(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x38) + 0x18,
                          *(longlong *)(lVar4 + 0x6c8) - *plVar8 >> 3);
            iVar9 = (int)(*(longlong *)(lVar4 + 0x6c8) - *plVar8 >> 3) + -1;
            if (-1 < iVar9) {
              uVar10 = (ulonglong)iVar9;
              do {
                puVar1 = (uint *)(*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x38) + 0x18) +
                                 (uVar10 >> 5) * 4);
                *puVar1 = *puVar1 & ~(1 << ((uint)uVar10 & 0x1f));
                uVar10 = uVar10 - 1;
                iVar9 = iVar9 + -1;
              } while (-1 < iVar9);
            }
          }
        }
      }
    }
  }
  return;
}

