// FUN_1407b5510 @ 1407b5510
// callees:
//   -> 14000ef80 FUN_14000ef80
//   -> 14000d840 FUN_14000d840
//   -> 140764cb0 FUN_140764cb0


void FUN_1407b5510(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  if (DAT_1410b67dc == 3) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (((DAT_1416b1980 - *(int *)(param_2 + 0x98)) * 0x62700 - *(int *)(param_2 + 0x9c)) +
      DAT_1416b1974 < 100) {
    return;
  }
  *(int *)(param_2 + 0x98) = DAT_1416b1980;
  *(int *)(param_2 + 0x9c) = DAT_1416b1974;
  *(undefined8 *)(param_2 + 0x90) = 0;
  if ((param_3 == 0) || (cVar2 = FUN_14000ef80(param_3), cVar2 == '\0')) {
    lVar7 = *(longlong *)(param_1 + 0x130);
    if ((lVar7 != 0) &&
       ((*(longlong *)(lVar7 + 0x48) != 0 &&
        (*(longlong *)(*(longlong *)(lVar7 + 0x48) + 0x130) != 0)))) goto LAB_1407b5653;
    sVar5 = *(short *)(param_1 + 2);
    sVar3 = *(short *)(param_1 + 4);
    if ((-1 < sVar5) &&
       (((ulonglong)(longlong)sVar5 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) &&
        (-1 < sVar3)))) {
      lVar1 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar5 * 8);
      if (((ulonglong)(longlong)sVar3 <
           (ulonglong)(*(longlong *)(lVar1 + 0x180) - *(longlong *)(lVar1 + 0x178) >> 3)) &&
         (cVar2 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar1 + 0x178) + (longlong)sVar3 * 8) +
                                0x6a8,0x3a), cVar2 != '\0')) {
        if (((lVar7 != 0) && (*(longlong *)(lVar7 + 0x48) != 0)) &&
           ((*(uint *)(*(longlong *)(lVar7 + 0x48) + 0x4c) & 0x2000000) != 0)) goto LAB_1407b5653;
        goto LAB_1407b568e;
      }
    }
    if ((((lVar7 == 0) || (lVar7 = *(longlong *)(lVar7 + 0x48), lVar7 == 0)) ||
        ((*(uint *)(lVar7 + 0x4c) & 0x2000000) != 0)) ||
       ((*(uint *)(lVar7 + 0x48) & 0x2000000) == 0)) {
LAB_1407b5653:
      *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_2 + 0x60);
      *(undefined8 *)(param_2 + 0x84) = 0;
      *(undefined4 *)(param_2 + 0x8c) = 0;
      return;
    }
  }
LAB_1407b568e:
  iVar8 = *(int *)(param_2 + 0x60);
  *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x54) + iVar8;
  *(int *)(param_2 + 0x80) = iVar8;
  *(int *)(param_2 + 0x88) = -*(int *)(param_2 + 0x5c);
  *(int *)(param_2 + 0x8c) = *(int *)(param_2 + 0x5c) - iVar8;
  if (param_3 == 0) {
    FUN_140764cb0(param_1);
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x18);
  }
  else {
    if (*(longlong *)(param_3 + 0xa78) == 0) goto LAB_1407b58d0;
    lVar7 = *(longlong *)(param_3 + 0xa78) + 0x248;
  }
  if (lVar7 != 0) {
    sVar3 = 0;
    sVar5 = *(short *)(lVar7 + 0x86);
    if (((*(longlong *)(lVar7 + 0x158) != 0) &&
        (sVar4 = *(short *)(lVar7 + 0x86) + *(short *)(*(longlong *)(lVar7 + 0x158) + 6),
        sVar5 = sVar3, -1 < sVar4)) && (sVar5 = sVar4, 100 < sVar4)) {
      sVar5 = 100;
    }
    if ((-1 < *(int *)(param_2 + 0x80)) && (0x3c < sVar5)) {
      *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + -0x3c + (int)sVar5;
    }
    sVar5 = *(short *)(lVar7 + 0x9e);
    if (((*(longlong *)(lVar7 + 0x158) != 0) &&
        (sVar4 = *(short *)(lVar7 + 0x9e) + *(short *)(*(longlong *)(lVar7 + 0x158) + 0x1e),
        sVar5 = sVar3, -1 < sVar4)) && (sVar5 = sVar4, 100 < sVar4)) {
      sVar5 = 100;
    }
    *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + sVar5 + -0x32;
    sVar5 = *(short *)(lVar7 + 0xd8);
    if (((*(longlong *)(lVar7 + 0x158) != 0) &&
        (sVar4 = *(short *)(lVar7 + 0xd8) + *(short *)(*(longlong *)(lVar7 + 0x158) + 0x58),
        sVar5 = 0, -1 < sVar4)) && (sVar5 = sVar4, 100 < sVar4)) {
      sVar5 = 100;
    }
    if ((-1 < *(int *)(param_2 + 0x88)) || (sVar5 < 0x32)) {
      *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + sVar5 * 2 + -100;
    }
    sVar5 = *(short *)(lVar7 + 0xda);
    if (((*(longlong *)(lVar7 + 0x158) != 0) &&
        (sVar4 = *(short *)(lVar7 + 0xda) + *(short *)(*(longlong *)(lVar7 + 0x158) + 0x5a),
        sVar5 = sVar3, -1 < sVar4)) && (sVar5 = sVar4, 100 < sVar4)) {
      sVar5 = 100;
    }
    *(int *)(param_2 + 0x8c) = *(int *)(param_2 + 0x8c) + sVar5 + -0x32;
    *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x84) + (0x32 - sVar5) * 2;
    sVar5 = *(short *)(lVar7 + 0x8c);
    if (((*(longlong *)(lVar7 + 0x158) != 0) &&
        (sVar4 = *(short *)(lVar7 + 0x8c) + *(short *)(*(longlong *)(lVar7 + 0x158) + 0xc),
        sVar5 = sVar3, -1 < sVar4)) && (sVar5 = sVar4, 100 < sVar4)) {
      sVar5 = 100;
    }
    iVar8 = *(int *)(param_2 + 0x8c) + -0x32 + (int)sVar5;
    *(int *)(param_2 + 0x8c) = iVar8;
    sVar5 = *(short *)(lVar7 + 0x88);
    if (((*(longlong *)(lVar7 + 0x158) != 0) &&
        (sVar4 = *(short *)(lVar7 + 0x88) + *(short *)(*(longlong *)(lVar7 + 0x158) + 8),
        sVar5 = sVar3, -1 < sVar4)) && (sVar5 = sVar4, 100 < sVar4)) {
      sVar5 = 100;
    }
    if ((-1 < *(int *)(param_2 + 0x80)) && (0x3c < sVar5)) {
      iVar6 = (sVar5 + -0x3c) / 2;
      *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) - iVar6;
      *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) - iVar6;
      *(int *)(param_2 + 0x8c) = iVar8 - iVar6;
    }
    sVar5 = *(short *)(lVar7 + 0xd6);
    if (((*(longlong *)(lVar7 + 0x158) != 0) &&
        (sVar4 = *(short *)(lVar7 + 0xd6) + *(short *)(*(longlong *)(lVar7 + 0x158) + 0x56),
        sVar5 = sVar3, -1 < sVar4)) && (sVar5 = sVar4, 100 < sVar4)) {
      sVar5 = 100;
    }
    *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x84) + -0x32 + (int)sVar5;
  }
LAB_1407b58d0:
  if (*(int *)(param_2 + 0x80) < -100) {
    *(undefined4 *)(param_2 + 0x80) = 0xffffff9c;
  }
  if (100 < *(int *)(param_2 + 0x80)) {
    *(undefined4 *)(param_2 + 0x80) = 100;
  }
  if (*(int *)(param_2 + 0x84) < -100) {
    *(undefined4 *)(param_2 + 0x84) = 0xffffff9c;
  }
  if (100 < *(int *)(param_2 + 0x84)) {
    *(undefined4 *)(param_2 + 0x84) = 100;
  }
  if (*(int *)(param_2 + 0x88) < -100) {
    *(undefined4 *)(param_2 + 0x88) = 0xffffff9c;
  }
  if (100 < *(int *)(param_2 + 0x88)) {
    *(undefined4 *)(param_2 + 0x88) = 100;
  }
  if (*(int *)(param_2 + 0x8c) < -100) {
    *(undefined4 *)(param_2 + 0x8c) = 0xffffff9c;
  }
  if (100 < *(int *)(param_2 + 0x8c)) {
    *(undefined4 *)(param_2 + 0x8c) = 100;
  }
  return;
}

