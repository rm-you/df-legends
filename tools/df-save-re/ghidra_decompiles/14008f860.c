// FUN_14008f860 @ 14008f860
// callees:
//   -> 140073930 FUN_140073930
//   -> 140ad7830 FUN_140ad7830


void FUN_14008f860(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  
  uVar3 = (int)*(short *)(param_1 + 4) / 0x30;
  uVar4 = (int)*(short *)(param_1 + 6) / 0x30;
  if ((((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(DAT_141d6cfd0 + 0xa0))) && (-1 < (int)uVar4)) &&
     (((int)uVar4 < *(int *)(DAT_141d6cfd0 + 0xa4) && (*(ushort *)(param_1 + 8) < 6)))) {
    lVar1 = ((longlong)(int)uVar3 >> 4) * 8;
    lVar8 = ((longlong)(int)uVar4 >> 4) * 0x30;
    FUN_140073930(param_1,*(longlong *)
                           (*(longlong *)
                             (DAT_141d6cfd0 + 0x2d0 + (longlong)(short)*(ushort *)(param_1 + 8) * 8)
                           + lVar1) + 0x18 + lVar8);
    iVar7 = 0;
    plVar5 = (longlong *)(DAT_141d6cfd0 + 0x2d0);
    do {
      lVar2 = *(longlong *)(*plVar5 + lVar1);
      for (plVar6 = *(longlong **)(lVar2 + 0x18 + lVar8);
          plVar6 < *(longlong **)(lVar2 + 0x20 + lVar8); plVar6 = plVar6 + 1) {
        if (((int)*(short *)(*plVar6 + 4) / 0x30 == uVar3) &&
           ((int)*(short *)(*plVar6 + 6) / 0x30 == uVar4)) goto LAB_14008f9d0;
      }
      iVar7 = iVar7 + 1;
      plVar5 = plVar5 + 1;
    } while (iVar7 < 6);
    FUN_140ad7830(DAT_141d6cfd0,uVar3 & 0xffff,uVar4 & 0xffff);
  }
LAB_14008f9d0:
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_1 + 4);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_1 + 6);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_1 + 8);
  *(undefined2 *)(param_1 + 4) = 0xffff;
  *(undefined2 *)(param_1 + 6) = 0xffff;
  *(undefined2 *)(param_1 + 8) = 0xffff;
  return;
}

