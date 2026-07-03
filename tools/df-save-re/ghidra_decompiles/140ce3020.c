// FUN_140ce3020 @ 140ce3020
// callees:
//   -> 14000d840 FUN_14000d840
//   -> 1409165e0 FUN_1409165e0


void FUN_140ce3020(longlong param_1,undefined8 param_2)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + 0x130);
  if (lVar7 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar7 + 0x18);
  if (lVar3 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x30) != -1) {
    return;
  }
  if ((0 < *(int *)(param_1 + 0xd0)) && ((**(byte **)(param_1 + 200) & 0x80) != 0)) {
    return;
  }
  lVar7 = *(longlong *)(lVar7 + 0x48);
  if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0x130) == 0)) {
    sVar1 = *(short *)(param_1 + 2);
    sVar2 = *(short *)(param_1 + 4);
    if ((sVar1 < 0) ||
       (((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar1 ||
        (sVar2 < 0)))) {
LAB_140ce3109:
      if (((lVar7 != 0) && ((*(uint *)(lVar7 + 0x4c) & 0x1000) == 0)) &&
         ((*(uint *)(lVar7 + 0x48) & 0x1000) != 0)) goto LAB_140ce3105;
    }
    else {
      lVar4 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8);
      if (((ulonglong)(*(longlong *)(lVar4 + 0x180) - *(longlong *)(lVar4 + 0x178) >> 3) <=
           (ulonglong)(longlong)sVar2) ||
         (cVar6 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar4 + 0x178) + (longlong)sVar2 * 8) +
                                0x6a8,0x47), cVar6 == '\0')) goto LAB_140ce3109;
      if ((lVar7 == 0) || ((*(uint *)(lVar7 + 0x4c) & 0x1000) == 0)) goto LAB_140ce3105;
    }
    bVar5 = false;
  }
  else {
LAB_140ce3105:
    bVar5 = true;
  }
  FUN_1409165e0(lVar3,param_2,!bVar5);
  return;
}

