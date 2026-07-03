// FUN_140cad900 @ 140cad900
// callees:
//   -> 1400049b0 FUN_1400049b0


void FUN_140cad900(longlong param_1)

{
  uint *puVar1;
  short sVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  uint uVar8;
  short sVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  
  uVar8 = (int)*(short *)(param_1 + 0xa8) - 1;
  uVar6 = (uint)(short)uVar8;
  if ((int)uVar6 <= *(short *)(param_1 + 0xa8) + 1) {
    do {
      uVar4 = (int)*(short *)(param_1 + 0xaa) - 1;
      uVar11 = (uint)(short)uVar4;
      sVar7 = (short)uVar8;
      if ((int)uVar11 <= *(short *)(param_1 + 0xaa) + 1) {
        do {
          sVar9 = (short)uVar4;
          if ((*(uint *)(param_1 + 0x110) & 0x8000) == 0) {
            FUN_1400049b0(&DAT_141c53470,uVar8 & 0xffff,uVar4 & 0xffff,
                          *(undefined2 *)(param_1 + 0xac),8);
          }
          else {
            iVar12 = 0;
            uVar13 = DAT_141c66ff0 - (longlong)DAT_141c66fe8 >> 3;
            plVar10 = DAT_141c66fe8;
            if (uVar13 != 0) {
              do {
                lVar3 = *plVar10;
                if ((((lVar3 != param_1) && ((*(uint *)(lVar3 + 0x110) & 0x2010302) == 0)) &&
                    ((*(uint *)(lVar3 + 0x118) & 0x180000) == 0)) &&
                   (((*(uint *)(lVar3 + 0x110) >> 0xf & 1) != 0 &&
                    (*(short *)(lVar3 + 0xac) == *(short *)(param_1 + 0xac))))) {
                  if ((*(uint *)(lVar3 + 0x118) >> 10 & 1) == 0) {
                    if ((*(short *)(lVar3 + 0xa8) == sVar7) && (*(short *)(lVar3 + 0xaa) == sVar9))
                    break;
                  }
                  else {
                    uVar4 = (int)*(short *)(lVar3 + 0xa8) - uVar6;
                    uVar5 = (int)uVar4 >> 0x1f;
                    if (((int)((uVar4 ^ uVar5) - uVar5) < 2) &&
                       (uVar4 = (int)*(short *)(lVar3 + 0xaa) - uVar11, uVar5 = (int)uVar4 >> 0x1f,
                       (int)((uVar4 ^ uVar5) - uVar5) < 2)) break;
                  }
                }
                iVar12 = iVar12 + 1;
                plVar10 = plVar10 + 1;
              } while ((ulonglong)(longlong)iVar12 < uVar13);
            }
            if (((((longlong)iVar12 == uVar13) && (sVar2 = *(short *)(param_1 + 0xac), -1 < sVar7))
                && ((int)uVar6 < DAT_141d69554)) &&
               ((((-1 < sVar9 && ((int)uVar11 < DAT_141d69558)) &&
                 ((-1 < sVar2 && ((sVar2 < DAT_141d6955c && (DAT_141d69520 != 0)))))) &&
                (lVar3 = *(longlong *)
                          (*(longlong *)
                            (*(longlong *)(DAT_141d69520 + ((longlong)sVar7 >> 4) * 8) +
                            ((longlong)sVar9 >> 4) * 8) + (longlong)sVar2 * 8), lVar3 != 0)))) {
              uVar4 = uVar6 & 0x8000000f;
              if ((int)uVar4 < 0) {
                uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
              }
              uVar11 = uVar11 & 0x8000000f;
              if ((int)uVar11 < 0) {
                uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
              }
              puVar1 = (uint *)(lVar3 + 0x694 +
                               ((longlong)(int)uVar4 * 0x10 + (longlong)(int)uVar11) * 4);
              *puVar1 = *puVar1 & 0xffffffef;
            }
          }
          uVar4 = (uint)(ushort)(sVar9 + 1U);
          uVar11 = (uint)(short)(sVar9 + 1U);
        } while ((int)uVar11 <= *(short *)(param_1 + 0xaa) + 1);
      }
      uVar8 = (uint)(ushort)(sVar7 + 1U);
      uVar6 = (uint)(short)(sVar7 + 1U);
    } while ((int)uVar6 <= *(short *)(param_1 + 0xa8) + 1);
  }
  return;
}

