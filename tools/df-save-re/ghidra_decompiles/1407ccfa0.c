// FUN_1407ccfa0 @ 1407ccfa0
// callees:
//   -> 1407cd0a0 FUN_1407cd0a0


void FUN_1407ccfa0(undefined8 param_1,undefined **param_2,char param_3)

{
  longlong *plVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  longlong lVar4;
  int iVar5;
  
  DAT_14127159e = DAT_14127159e + 2;
  ppuVar3 = &PTR_vftable_1410b6858;
  ppuVar2 = DAT_1410b6860;
  if (param_3 == '\0') {
    for (; ppuVar2 != (undefined **)0x0; ppuVar2 = (undefined **)ppuVar2[1]) {
      ppuVar3 = ppuVar2;
    }
  }
  else if (param_3 == '\x01') {
    for (; ppuVar2 != (undefined **)0x0; ppuVar2 = (undefined **)ppuVar2[1]) {
      ppuVar3 = ppuVar2;
    }
  }
  else {
    if (param_3 == '\x03') {
      param_2[1] = (undefined *)DAT_1410b6860;
      param_2[2] = (undefined *)&PTR_vftable_1410b6858;
      ppuVar3 = param_2;
      if (DAT_1410b6860 != (undefined **)0x0) {
        DAT_1410b6860[2] = (undefined *)param_2;
        ppuVar3 = param_2;
      }
      goto LAB_1407cd02b;
    }
    for (; ppuVar2 != (undefined **)0x0; ppuVar2 = (undefined **)ppuVar2[1]) {
      ppuVar3 = ppuVar2;
    }
  }
  FUN_1407cd0a0(&DAT_1410b6850,param_2,ppuVar3);
  ppuVar3 = DAT_1410b6860;
LAB_1407cd02b:
  DAT_1410b6860 = ppuVar3;
  if (DAT_1410b67dc == 0) {
    iVar5 = 0;
    DAT_141d64e88 = 0;
    if (DAT_141d64dd0 - DAT_141d64dc8 >> 3 != 0) {
      lVar4 = 0;
      do {
        plVar1 = (longlong *)(lVar4 + DAT_141d64dc8);
        lVar4 = lVar4 + 8;
        iVar5 = iVar5 + 1;
        *(undefined4 *)(*plVar1 + 0x2c) = 0;
      } while ((ulonglong)(longlong)iVar5 < (ulonglong)(DAT_141d64dd0 - DAT_141d64dc8 >> 3));
    }
  }
  return;
}

