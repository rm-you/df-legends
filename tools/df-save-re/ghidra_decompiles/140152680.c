// FUN_140152680 @ 140152680
// callees:
//   -> 1401aa6e0 FUN_1401aa6e0
//   -> 14018f680 FUN_14018f680
//   -> 1401aa830 FUN_1401aa830
//   -> 1401aa750 FUN_1401aa750
//   -> 14014ffe0 FUN_14014ffe0


ulonglong FUN_140152680(longlong param_1,ushort param_2,short param_3,undefined1 param_4,
                       char param_5,char param_6,char param_7,byte param_8)

{
  longlong *plVar1;
  undefined2 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  short sVar6;
  longlong lVar7;
  ulonglong uVar8;
  short sVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar8 = (ulonglong)(short)param_2;
  uVar11 = *(uint *)(param_1 + 0x694 + (uVar8 * 0x10 + (longlong)param_3) * 4) & 7;
  if (((uVar11 - 3 & 0xfffffffc) == 0) && (uVar11 != 4)) {
    return (ulonglong)(uint3)(uVar11 - 3 >> 8) << 8;
  }
  if (uVar11 == 7) {
    if (param_7 == '\0') {
      uVar4 = FUN_1401aa6e0(&DAT_141c6fd98,*(short *)(param_1 + 0x88) + param_2,
                            *(short *)(param_1 + 0x8a) + param_3,*(undefined2 *)(param_1 + 0x8c));
      if ((char)uVar4 != '\0') {
        return uVar4 & 0xffffffffffffff00;
      }
    }
    else {
      uVar2 = *(undefined2 *)(param_1 + 0x8c);
      sVar9 = *(short *)(param_1 + 0x88) + param_2;
      sVar6 = *(short *)(param_1 + 0x8a) + param_3;
      uVar8 = 0;
      lVar7 = DAT_141c6ff50;
      if (((param_8 & 0x40) != 0) && (DAT_141c6ff58 - DAT_141c6ff50 >> 3 != 0)) {
        uVar4 = uVar8;
        uVar10 = uVar8;
        do {
          if ((((((param_8 & 4) == 0) ||
                (199 < (ushort)(*(short *)(*(longlong *)(uVar10 + lVar7) + 0x28) - 0x1a3U))) &&
               ((param_8 & 0x18) == 0)) &&
              ((iVar3 = (**(code **)(**(longlong **)(uVar10 + lVar7) + 0x128))(),
               plVar1 = (longlong *)(uVar10 + lVar7), lVar7 = DAT_141c6ff50,
               iVar3 <= *(short *)(*plVar1 + 0x150) &&
               ((*(byte *)(*(longlong *)(uVar10 + DAT_141c6ff50) + 0x178) & 0x50) == 0x10)))) &&
             (uVar5 = FUN_14018f680(*(longlong *)(uVar10 + DAT_141c6ff50),sVar9,sVar6,uVar2,0),
             lVar7 = DAT_141c6ff50, (char)uVar5 != '\0')) goto LAB_140152975;
          uVar11 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar11;
          uVar10 = uVar10 + 8;
        } while ((ulonglong)(longlong)(int)uVar11 < (ulonglong)(DAT_141c6ff58 - lVar7 >> 3));
      }
      if (((char)param_8 < '\0') && (uVar4 = uVar8, DAT_141c6ff58 - lVar7 >> 3 != 0)) {
        do {
          iVar3 = (**(code **)(**(longlong **)(uVar4 + lVar7) + 0x128))();
          if ((iVar3 <= *(short *)(*(longlong *)(uVar4 + lVar7) + 0x150)) &&
             (uVar5 = FUN_14018f680(*(undefined8 *)(uVar4 + DAT_141c6ff50),sVar9,sVar6,uVar2,0),
             (char)uVar5 != '\0')) goto LAB_140152975;
          uVar11 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar11;
          lVar7 = DAT_141c6ff50;
          uVar4 = uVar4 + 8;
        } while ((ulonglong)(longlong)(int)uVar11 < (ulonglong)(DAT_141c6ff58 - DAT_141c6ff50 >> 3))
        ;
      }
      uVar8 = (ulonglong)param_2;
    }
    if ((param_5 == '\0') && (param_6 == '\0')) {
      sVar6 = *(short *)(param_1 + 0x8a) + param_3;
      sVar9 = *(short *)(param_1 + 0x88) + (short)uVar8;
      uVar5 = FUN_1401aa830(&DAT_141c6fd98,sVar9,sVar6,*(undefined2 *)(param_1 + 0x8c));
      if (((char)uVar5 != '\0') ||
         (uVar5 = FUN_1401aa750(&DAT_141c6fd98,sVar9,sVar6), (char)uVar5 != '\0')) {
LAB_140152975:
        return uVar5 & 0xffffffffffffff00;
      }
    }
  }
  uVar8 = FUN_14014ffe0(param_1,uVar8 & 0xffff,param_3,param_4,param_5);
  return uVar8;
}

