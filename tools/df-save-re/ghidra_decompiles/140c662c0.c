// FUN_140c662c0 @ 140c662c0
// callees:
//   -> 14000f360 FUN_14000f360


void FUN_140c662c0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (DAT_141c347ac != '\0') {
    *(int *)(param_1 + 0x470) = *(int *)(param_1 + 0x470) + param_2;
    uVar1 = *(undefined4 *)(param_1 + 0x470);
    if ((*(int *)(param_1 + 0x3a8) != -1) && (lVar3 = FUN_14000f360(&DAT_141c66fd0), lVar3 != 0)) {
      *(undefined4 *)(lVar3 + 0x470) = uVar1;
    }
    uVar6 = 0;
    uVar4 = uVar6;
    if (*(int *)(param_1 + 0x3ac) != -1) {
      uVar4 = FUN_14000f360(&DAT_141c66fd0);
    }
    if (((*(int *)(param_1 + 0x3b0) != -1) && (lVar3 = FUN_14000f360(&DAT_141c66fd0), lVar3 != 0))
       && ((ushort)(*(short *)(param_1 + 0xa0) - 0x67U) < 2)) {
      *(undefined4 *)(lVar3 + 0x470) = *(undefined4 *)(param_1 + 0x470);
    }
    if ((uVar4 != 0) && ((ushort)(*(short *)(param_1 + 0xa0) - 0x67U) < 2)) {
      *(undefined4 *)(uVar4 + 0x470) = *(undefined4 *)(param_1 + 0x470);
    }
    lVar3 = DAT_141c66fe8;
    uVar4 = uVar6;
    lVar7 = DAT_141c66ff0;
    if (DAT_141c66ff0 - DAT_141c66fe8 >> 3 != 0) {
      do {
        lVar2 = *(longlong *)(uVar4 + lVar3);
        if ((((*(byte *)(lVar2 + 0x110) & 2) == 0) &&
            ((ushort)(*(short *)(lVar2 + 0xa0) - 0x67U) < 2)) &&
           ((*(int *)(lVar2 + 0x3b0) == *(int *)(param_1 + 0x130) ||
            (*(int *)(lVar2 + 0x3ac) == *(int *)(param_1 + 0x130))))) {
          *(undefined4 *)(lVar2 + 0x470) = *(undefined4 *)(param_1 + 0x470);
          lVar3 = DAT_141c66fe8;
          lVar7 = DAT_141c66ff0;
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        uVar4 = uVar4 + 8;
      } while ((ulonglong)(longlong)(int)uVar5 < (ulonglong)(lVar7 - lVar3 >> 3));
    }
  }
  return;
}

