// FUN_140c771c0 @ 140c771c0
// callees:
//   -> 140c76f30 FUN_140c76f30


void FUN_140c771c0(longlong param_1,short param_2,char param_3,char param_4,char param_5)

{
  short sVar1;
  short *psVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  short sVar6;
  
  if (DAT_141c34170 < 1) {
    return;
  }
  if ((*DAT_141c34168 & 1) == 0) {
    return;
  }
  if (param_3 == '\0') goto LAB_140c772d9;
  FUN_140c76f30();
  sVar6 = *(short *)(param_1 + 0xa4);
  sVar1 = *(short *)(param_1 + 300);
  if ((sVar6 < 0) || ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar6)
     ) {
    sVar6 = 0;
  }
  else {
    if (-1 < sVar1) {
      lVar5 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar6 * 8);
      if ((ulonglong)(longlong)sVar1 <
          (ulonglong)(*(longlong *)(lVar5 + 0x180) - *(longlong *)(lVar5 + 0x178) >> 3)) {
        sVar6 = *(short *)(*(longlong *)(*(longlong *)(lVar5 + 0x178) + (longlong)sVar1 * 8) + 0x46c
                          );
        goto LAB_140c77280;
      }
    }
    sVar6 = 0;
  }
LAB_140c77280:
  iVar4 = (int)(*(longlong *)(param_1 + 0xc30) - *(longlong *)(param_1 + 0xc28) >> 3) + -1;
  lVar5 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      psVar2 = *(short **)(*(longlong *)(param_1 + 0xc28) + lVar5 * 8);
      psVar2[1] = 0;
      if (sVar6 == -0x159f) {
        *psVar2 = param_2;
      }
      else {
        *psVar2 = sVar6;
      }
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfffffeff;
  *(undefined4 *)(param_1 + 0x126c) = 0xffffffff;
LAB_140c772d9:
  if (((param_4 != '\0') || (param_5 != '\0')) &&
     (iVar4 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3) + -1,
     lVar5 = (longlong)iVar4, -1 < iVar4)) {
    do {
      plVar3 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x3f8) + lVar5 * 8);
      (**(code **)(*plVar3 + 0x4c0))(plVar3,param_2,param_4,param_5);
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  return;
}

