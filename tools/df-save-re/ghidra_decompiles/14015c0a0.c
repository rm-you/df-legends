// FUN_14015c0a0 @ 14015c0a0
// callees:
//   -> 1401aa6e0 FUN_1401aa6e0
//   -> 1401aa830 FUN_1401aa830
//   -> 1401aa750 FUN_1401aa750
//   -> 1401aa7c0 FUN_1401aa7c0
//   -> 1401aa8a0 FUN_1401aa8a0
//   -> 14014e4b0 FUN_14014e4b0


undefined8 FUN_14015c0a0(longlong param_1,short param_2,short param_3)

{
  short sVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_3 + (longlong)param_2 * 0x10;
  uVar5 = *(uint *)(param_1 + 0x694 + lVar6 * 4) & 7;
  if ((((uVar5 - 3 & 0xfffffffc) == 0) && (uVar5 != 5)) ||
     ((*(uint *)(param_1 + 0x294 + lVar6 * 4) & 0x4000000) != 0)) {
    return 0;
  }
  if (uVar5 == 7) {
    param_2 = *(short *)(param_1 + 0x88) + param_2;
    param_3 = *(short *)(param_1 + 0x8a) + param_3;
    cVar3 = FUN_1401aa6e0(&DAT_141c6fd98,param_2,param_3,*(undefined2 *)(param_1 + 0x8c));
    if (((cVar3 != '\0') || (cVar3 = FUN_1401aa830(&DAT_141c6fd98,param_2,param_3), cVar3 != '\0'))
       || (cVar3 = FUN_1401aa750(&DAT_141c6fd98,param_2,param_3), cVar3 != '\0')) {
      sVar1 = *(short *)(param_1 + 0x92 + lVar6 * 2);
      if (sVar1 == 1) {
        return 1;
      }
      if (sVar1 == 0x20) {
        return 1;
      }
      if (sVar1 == 0x23) {
        return 1;
      }
      if (sVar1 == 0x2a) {
        return 1;
      }
    }
    cVar3 = FUN_1401aa7c0(&DAT_141c6fd98,param_2,param_3);
    if (cVar3 != '\0') {
      return 0;
    }
    cVar3 = FUN_1401aa8a0(&DAT_141c6fd98,param_2,param_3);
    if (cVar3 != '\0') {
      return 0;
    }
  }
  uVar2 = *(ushort *)(param_1 + 0x92 + lVar6 * 2);
  uVar4 = (uint)uVar2;
  cVar3 = FUN_14014e4b0(uVar2);
  if ((cVar3 == '\0') &&
     ((uVar5 != 5 ||
      (((uVar4 = uVar4 & 0xffff, uVar4 != 1 && (uVar4 != 0x20)) &&
       ((uVar4 != 0x23 && (uVar4 != 0x2a)))))))) {
    return 0;
  }
  return 1;
}

