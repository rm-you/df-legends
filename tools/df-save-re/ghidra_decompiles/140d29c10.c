// FUN_140d29c10 @ 140d29c10
// callees:
//   -> 140adbc70 FUN_140adbc70
//   -> 140d299e0 FUN_140d299e0
//   -> 140a60220 FUN_140a60220
//   -> 1400b3970 FUN_1400b3970


void FUN_140d29c10(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  FUN_140adbc70(*(undefined8 *)(param_1 + 0x119b60),0);
  FUN_140d299e0(*(undefined8 *)(param_1 + 0x119b60));
  FUN_140a60220(*(undefined8 *)(param_1 + 0x119b60));
  uVar6 = 0;
  uVar5 = (ulonglong)((longlong)DAT_141d69258 + (7 - (longlong)DAT_141d69250)) >> 3;
  if (DAT_141d69258 < DAT_141d69250) {
    uVar5 = uVar6;
  }
  plVar4 = DAT_141d69250;
  lVar7 = DAT_141d6cfd0;
  if (uVar5 != 0) {
    do {
      lVar1 = *plVar4;
      iVar2 = (int)*(short *)(lVar1 + 4) / 0x30;
      iVar3 = (int)*(short *)(lVar1 + 6) / 0x30;
      if ((((-1 < iVar2) && (iVar2 < *(int *)(lVar7 + 0xa0))) && (-1 < iVar3)) &&
         ((iVar3 < *(int *)(lVar7 + 0xa4) && (*(ushort *)(lVar1 + 8) < 6)))) {
        FUN_1400b3970(lVar1,((longlong)iVar3 >> 4) * 0x30 + 0x18 +
                            *(longlong *)
                             (*(longlong *)
                               (lVar7 + 0x2d0 + (longlong)(short)*(ushort *)(lVar1 + 8) * 8) +
                             ((longlong)iVar2 >> 4) * 8));
        lVar7 = DAT_141d6cfd0;
      }
      uVar6 = uVar6 + 1;
      plVar4 = plVar4 + 1;
    } while (uVar6 < uVar5);
  }
  if (0 < *(int *)(param_1 + 0x1266e0)) {
    **(byte **)(param_1 + 0x1266d8) = **(byte **)(param_1 + 0x1266d8) & 0x7f;
  }
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x119b60) + 0x168);
  while( true ) {
    if (*(longlong **)(*(longlong *)(param_1 + 0x119b60) + 0x170) <= plVar4) {
      return;
    }
    if (*(longlong *)(*plVar4 + 0x308) != 0) break;
    plVar4 = plVar4 + 1;
  }
  if (*(int *)(param_1 + 0x1266e0) < 1) {
    return;
  }
  **(byte **)(param_1 + 0x1266d8) = **(byte **)(param_1 + 0x1266d8) | 0x80;
  return;
}

