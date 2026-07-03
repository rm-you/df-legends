// FUN_140d7ffa0 @ 140d7ffa0
// callees:


undefined8 FUN_140d7ffa0(longlong param_1,short param_2,short param_3,short param_4)

{
  longlong *plVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  uint uVar9;
  short sVar10;
  uint uVar11;
  
  if (((((-1 < param_2) && (uVar9 = (uint)param_2, (int)uVar9 < *(int *)(param_1 + 0x1160e4))) &&
       (-1 < param_3)) &&
      ((uVar11 = (uint)param_3, (int)uVar11 < *(int *)(param_1 + 0x1160e8) && (-1 < param_4)))) &&
     (((int)param_4 < *(int *)(param_1 + 0x1160ec) &&
      ((*(longlong *)(param_1 + 0x1160b0) != 0 &&
       (lVar3 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x1160b0) + ((longlong)param_2 >> 4) * 8)
                   + ((longlong)param_3 >> 4) * 8) + (longlong)param_4 * 8), lVar3 != 0)))))) {
    uVar5 = uVar9 & 0x8000000f;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
    }
    uVar6 = uVar11 & 0x8000000f;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
    }
    uVar5 = *(uint *)(lVar3 + 0x294 + ((longlong)(int)uVar5 * 0x10 + (longlong)(int)uVar6) * 4);
    if (((uVar5 >> 0x1c & 1) != 0) && (sVar2 = *(short *)(lVar3 + 0x38), sVar2 != -1)) {
      iVar7 = *(int *)(param_1 + 0x1160f0) + (int)uVar9 / 0x30;
      sVar8 = (short)((int)(iVar7 + (iVar7 >> 0x1f & 0xfU)) >> 4);
      iVar7 = *(int *)(param_1 + 0x1160f4) + (int)uVar11 / 0x30;
      sVar10 = (short)((int)(iVar7 + (iVar7 >> 0x1f & 0xfU)) >> 4);
      lVar4 = *(longlong *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x119b60) + 0x483a8) +
                 ((longlong)sVar8 >> 4) * 8) + 8 + ((longlong)sVar10 >> 4) * 0x20);
      if (lVar4 != 0) {
        uVar9 = (int)sVar8 & 0x8000000f;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffffff0) + 1;
        }
        uVar11 = (int)sVar10 & 0x8000000f;
        if ((int)uVar11 < 0) {
          uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
        }
        plVar1 = (longlong *)
                 (lVar4 + ((longlong)(short)uVar9 * 0x10 + (longlong)(short)uVar11) * 0x18);
        if (-1 < sVar2) {
          lVar4 = *plVar1;
          if ((ulonglong)(longlong)sVar2 < (ulonglong)(plVar1[1] - lVar4 >> 3)) {
            return *(undefined8 *)(lVar4 + (longlong)sVar2 * 8);
          }
        }
      }
    }
    if (((uVar5 >> 0x1d & 1) != 0) && (*(int *)(lVar3 + 0x3c) != -1)) {
      return *(undefined8 *)
              (*(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x119b60) + 0x240) +
                (longlong)*(int *)(lVar3 + 0x3c) * 8) + 0x110);
    }
  }
  return 0;
}

