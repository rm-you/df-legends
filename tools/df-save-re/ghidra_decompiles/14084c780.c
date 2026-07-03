// FUN_14084c780 @ 14084c780
// callees:
//   -> 14084bd00 FUN_14084bd00
//   -> 14084d460 FUN_14084d460
//   -> 140d89d60 FUN_140d89d60


undefined8 FUN_14084c780(longlong param_1,char param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  sVar1 = *(short *)(param_1 + 0x14);
  if ((sVar1 != 0x44) && (sVar1 != 0x59)) {
    uVar3 = FUN_14084bd00(sVar1,(int)*(short *)(param_1 + 0x3c),*(undefined2 *)(param_1 + 0x30),
                          *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x48),
                          param_1 + 0x50);
    return uVar3;
  }
  if (param_2 != '\0') {
    return 0xffffffff;
  }
  plVar4 = (longlong *)FUN_14084d460(param_1,0x24);
  if (plVar4 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar4 + 0xd8))(plVar4);
    switch(uVar2) {
    case 4:
      return 0x16;
    case 5:
      switch(*(undefined2 *)((longlong)plVar4 + 0x192)) {
      case 0:
        return 0x41;
      case 1:
      case 3:
      case 4:
      case 6:
        return 0x19;
      case 2:
      case 5:
        return 0x23;
      case 7:
        break;
      default:
        goto switchD_14084c824_caseD_16;
      }
    case 0xd:
      switch((short)plVar4[0x2f]) {
      case 0:
        goto switchD_14084c93e_caseD_0;
      case 1:
        return 0x12;
      case 2:
        return 4;
      case 3:
        return 0x21;
      case 4:
        return 0x1e;
      case 5:
      case 6:
        return 0x1d;
      case 7:
        return 0x31;
      case 8:
        goto switchD_14084c824_caseD_17;
      case 9:
        goto switchD_14084c824_caseD_16;
      case 10:
        return 10;
      case 0xb:
        return 0x24;
      case 0xc:
        return 0xc;
      case 0xd:
        return 0x10;
      case 0xe:
        return 0x18;
      case 0xf:
        return 0xe;
      case 0x10:
        return 0xd;
      case 0x11:
      case 0x16:
        return 0x11;
      case 0x12:
        return 5;
      case 0x13:
        return 0x15;
      case 0x14:
        return 0x42;
      case 0x15:
        return 0x45;
      }
      break;
    case 0x12:
    case 0x13:
    case 0x19:
    case 0x1a:
    case 0x21:
    case 0x2b:
    case 0x2c:
      if (199 < (ushort)((short)plVar4[5] - 0x1a3U)) {
        lVar5 = FUN_140d89d60(&DAT_141c53470,(short)plVar4[5],
                              *(undefined4 *)((longlong)plVar4 + 0x2c));
        if (lVar5 == 0) {
          return 4;
        }
        if (*(int *)(lVar5 + 0x298) < 6) {
          return 4;
        }
        if ((*(byte *)(*(longlong *)(lVar5 + 0x290) + 5) & 0x80) == 0) {
          return 4;
        }
        return 0x1d;
      }
switchD_14084c93e_caseD_0:
      return 2;
    case 0x16:
switchD_14084c824_caseD_16:
      return 0x2f;
    case 0x17:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x32:
switchD_14084c824_caseD_17:
      return 0x37;
    case 0x18:
      return 0xb;
    case 0x31:
      return 0x72;
    }
  }
  return 0xffffffff;
}

