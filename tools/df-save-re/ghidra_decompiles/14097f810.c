// FUN_14097f810 @ 14097f810
// callees:
//   -> 140dfc99c memset
//   -> 140c88550 FUN_140c88550
//   -> 140cae7d0 FUN_140cae7d0
//   -> 140c753f0 FUN_140c753f0
//   -> 140c3e0c0 FUN_140c3e0c0
//   -> 140c6e450 FUN_140c6e450
//   -> 140c3bf40 FUN_140c3bf40


void FUN_14097f810(longlong param_1)

{
  short *psVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  memset((void *)(param_1 + 0x234),0,0x130);
  uVar7 = 0;
  *(undefined8 *)(param_1 + 0x364) = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined2 *)(param_1 + 0x370) = 0;
  *(undefined4 *)(param_1 + 0x374) = 0;
  uVar8 = uVar7;
  uVar11 = uVar7;
  if (DAT_141c66ff0 - DAT_141c66fe8 >> 3 != 0) {
    do {
      lVar3 = *(longlong *)(uVar8 + DAT_141c66fe8);
      if (((*(byte *)(lVar3 + 0x110) & 2) == 0) && (cVar4 = FUN_140c88550(lVar3), cVar4 != '\0')) {
        if (*(longlong *)(lVar3 + 0xd60) == 0) {
          if ((*(int *)(lVar3 + 0x1260) < 8) ||
             ((*(byte *)(*(longlong *)(lVar3 + 0x1258) + 7) & 4) == 0)) {
            if (((*(uint *)(lVar3 + 0x810) & 0x2000000) == 0) &&
               ((*(uint *)(lVar3 + 0x80c) & 0x2000000) != 0)) goto LAB_14097f8f5;
          }
          else if ((*(uint *)(lVar3 + 0x810) & 0x2000000) == 0) {
LAB_14097f8f5:
            cVar4 = FUN_140cae7d0(lVar3,DAT_141c36b88);
            if (cVar4 == '\0') {
              uVar2 = *(ushort *)(*(longlong *)(uVar8 + DAT_141c66fe8) + 0xa0);
              if (uVar2 < 0x87) {
                psVar1 = (short *)(param_1 + 0x234 + (longlong)(short)uVar2 * 2);
                *psVar1 = *psVar1 + 1;
              }
            }
            else {
              *(short *)(param_1 + 0x366) = *(short *)(param_1 + 0x366) + 1;
            }
            *(short *)(param_1 + 0x364) = *(short *)(param_1 + 0x364) + 1;
          }
        }
        uVar9 = *(undefined8 *)(uVar8 + DAT_141c66fe8);
        cVar4 = FUN_140c753f0(uVar9);
        if (cVar4 != '\0') {
          cVar4 = FUN_140c3e0c0(uVar9);
          if (cVar4 == '\0') {
            *(short *)(param_1 + 0x368) = *(short *)(param_1 + 0x368) + 1;
          }
          else {
            *(short *)(param_1 + 0x36a) = *(short *)(param_1 + 0x36a) + 1;
          }
        }
        if ((*(uint *)(*(longlong *)(uVar8 + DAT_141c66fe8) + 0x110) & 0x4000000) != 0) {
          if ((ushort)(*(short *)(*(longlong *)(uVar8 + DAT_141c66fe8) + 0xa0) - 0x62U) < 2) {
            *(short *)(param_1 + 0x36c) = *(short *)(param_1 + 0x36c) + 1;
          }
          else {
            *(short *)(param_1 + 0x36e) = *(short *)(param_1 + 0x36e) + 1;
          }
        }
        cVar4 = FUN_140c6e450(*(undefined8 *)(uVar8 + DAT_141c66fe8));
        if (cVar4 != '\0') {
          *(short *)(param_1 + 0x370) = *(short *)(param_1 + 0x370) + 1;
          iVar5 = FUN_140c3bf40(*(undefined8 *)(uVar8 + DAT_141c66fe8));
          *(int *)(param_1 + 0x374) = *(int *)(param_1 + 0x374) + iVar5;
        }
      }
      uVar10 = (int)uVar11 + 1;
      uVar8 = uVar8 + 8;
      uVar11 = (ulonglong)uVar10;
    } while ((ulonglong)(longlong)(int)uVar10 < (ulonglong)(DAT_141c66ff0 - DAT_141c66fe8 >> 3));
  }
  plVar6 = *(longlong **)(DAT_141c3d250 + 0x1428);
  uVar8 = (ulonglong)((longlong)*(longlong **)(DAT_141c3d250 + 0x1430) + (7 - (longlong)plVar6)) >>
          3;
  if (*(longlong **)(DAT_141c3d250 + 0x1430) < plVar6) {
    uVar8 = uVar7;
  }
  if (uVar8 != 0) {
    do {
      lVar3 = *(longlong *)(*plVar6 + 0x10);
      if (((lVar3 != 0) &&
          (((0 < *(int *)(lVar3 + 0xd0) && ((**(byte **)(lVar3 + 200) & 0x80) != 0)) ||
           (*(int *)(lVar3 + 0x30) == -1)))) &&
         ((lVar3 = *(longlong *)(*plVar6 + 0x18), lVar3 == 0 ||
          ((*(uint *)(lVar3 + 0x110) & 0x80000000) == 0)))) {
        *(short *)(param_1 + 0x364) = *(short *)(param_1 + 0x364) + 1;
      }
      plVar6 = plVar6 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  return;
}

