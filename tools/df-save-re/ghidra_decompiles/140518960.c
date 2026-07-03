// FUN_140518960 @ 140518960
// callees:


ulonglong FUN_140518960(longlong param_1,short param_2,short param_3)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  ulonglong uVar8;
  short sVar9;
  undefined8 *puVar10;
  int *piVar6;
  
  sVar9 = param_2 >> 4;
  uVar3 = param_3 >> 4;
  piVar6 = (int *)(ulonglong)uVar3;
  if ((((-1 < sVar9) && (sVar9 < *(short *)(DAT_141d6cfd0 + 0x160))) && (-1 < (short)uVar3)) &&
     ((short)uVar3 < *(short *)(DAT_141d6cfd0 + 0x162))) {
    puVar10 = (undefined8 *)
              ((longlong)(short)uVar3 * 0x30 +
              *(longlong *)(*(longlong *)(DAT_141d6cfd0 + 0x158) + (longlong)sVar9 * 8));
    piVar1 = (int *)*puVar10;
    piVar2 = (int *)puVar10[1];
    piVar6 = piVar1;
    if (piVar1 < piVar2) {
      do {
        if (*piVar6 == *(int *)(param_1 + 4)) {
          if (piVar6 < piVar2) {
            iVar4 = (int)(short)((longlong)piVar6 - (longlong)piVar1 >> 2);
            uVar7 = iVar4 >> 0x1f & 7;
            uVar5 = iVar4 + uVar7;
            iVar4 = (uVar5 & 7) - uVar7;
            uVar8 = (ulonglong)(short)((int)uVar5 >> 3);
            if ((ulonglong)((longlong)(puVar10[4] - puVar10[3]) >> 3) <= uVar8) {
              return (ulonglong)(uint3)((uint)iVar4 >> 8) << 8;
            }
            uVar5 = (int)param_3 & 0x8000000f;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
            }
            uVar7 = (int)param_2 & 0x8000000f;
            if ((int)uVar7 < 0) {
              uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
            }
            return (ulonglong)
                   ((*(byte *)((longlong)(int)uVar7 * 0x10 + *(longlong *)(puVar10[3] + uVar8 * 8) +
                              (longlong)(int)uVar5) & '\x01' << ((byte)iVar4 & 0x1f)) != 0);
          }
          break;
        }
        piVar6 = piVar6 + 1;
      } while (piVar6 < piVar2);
    }
  }
  return (ulonglong)piVar6 & 0xffffffffffffff00;
}

