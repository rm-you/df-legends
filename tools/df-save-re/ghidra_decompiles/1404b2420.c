// FUN_1404b2420 @ 1404b2420
// callees:
//   -> 140566780 FUN_140566780
//   -> 140d89d60 FUN_140d89d60
//   -> 140d3cf30 FUN_140d3cf30
//   -> 1402cb830 FUN_1402cb830


undefined4
FUN_1404b2420(longlong param_1,undefined2 param_2,short param_3,short param_4,int param_5,
             longlong param_6)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  short *psVar7;
  
  sVar2 = (short)param_5;
  switch(param_2) {
  case 0:
    if (param_4 == 0) {
      for (piVar6 = *(int **)(param_1 + 0x518); piVar6 < *(int **)(param_1 + 0x520);
          piVar6 = piVar6 + 1) {
        if (*piVar6 == param_5) {
          sVar2 = (short)((longlong)piVar6 - (longlong)*(int **)(param_1 + 0x518) >> 2);
          if (sVar2 != -1) {
            return *(undefined4 *)(*(longlong *)(param_6 + 0x80) + (longlong)sVar2 * 4);
          }
          break;
        }
      }
    }
    break;
  case 1:
    if (param_4 == 0) {
      for (piVar6 = *(int **)(param_1 + 0x548); piVar6 < *(int **)(param_1 + 0x550);
          piVar6 = piVar6 + 1) {
        if (*piVar6 == param_5) {
          sVar2 = (short)((longlong)piVar6 - (longlong)*(int **)(param_1 + 0x548) >> 2);
          if (sVar2 != -1) {
            return *(undefined4 *)(*(longlong *)(param_6 + 0x98) + (longlong)sVar2 * 4);
          }
          break;
        }
      }
    }
    break;
  case 2:
    if (param_4 == 0) {
      for (piVar6 = *(int **)(param_1 + 0x530); piVar6 < *(int **)(param_1 + 0x538);
          piVar6 = piVar6 + 1) {
        if (*piVar6 == param_5) {
          sVar2 = (short)((longlong)piVar6 - (longlong)*(int **)(param_1 + 0x530) >> 2);
          if (sVar2 != -1) {
            return *(undefined4 *)(*(longlong *)(param_6 + 200) + (longlong)sVar2 * 4);
          }
          break;
        }
      }
    }
    break;
  case 3:
    piVar6 = *(int **)(param_1 + 0x698);
    for (psVar7 = *(short **)(param_1 + 0x680); psVar7 < *(short **)(param_1 + 0x688);
        psVar7 = psVar7 + 1) {
      if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x680) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x4b8) + (longlong)sVar2 * 4);
        }
        break;
      }
      piVar6 = piVar6 + 1;
    }
    break;
  case 4:
    for (piVar6 = *(int **)(param_1 + 0x530); piVar6 < *(int **)(param_1 + 0x538);
        piVar6 = piVar6 + 1) {
      if (*piVar6 == param_5) {
        sVar2 = (short)((longlong)piVar6 - (longlong)*(int **)(param_1 + 0x530) >> 2);
        if ((-1 < sVar2) &&
           ((ulonglong)(longlong)sVar2 <
            (ulonglong)(*(longlong *)(param_6 + 0x370) - *(longlong *)(param_6 + 0x368) >> 2))) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x368) + (longlong)sVar2 * 4);
        }
        break;
      }
    }
    piVar6 = *(int **)(param_1 + 0x6f8);
    for (psVar7 = *(short **)(param_1 + 0x6e0); psVar7 < *(short **)(param_1 + 0x6e8);
        psVar7 = psVar7 + 1) {
      if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x6e0) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x5c0) + (longlong)sVar2 * 4);
        }
        break;
      }
      piVar6 = piVar6 + 1;
    }
    break;
  case 5:
    piVar6 = *(int **)(param_1 + 0x500);
    for (psVar7 = *(short **)(param_1 + 0x4e8); psVar7 < *(short **)(param_1 + 0x4f0);
        psVar7 = psVar7 + 1) {
      if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x4e8) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x68) + (longlong)sVar2 * 4);
        }
        break;
      }
      piVar6 = piVar6 + 1;
    }
    break;
  case 10:
    if ((((ushort)(param_4 - 0x1a3U) < 200) &&
        (sVar2 = FUN_1402cb830(param_4,param_5,param_1 + 0x458,param_1 + 0x470), -1 < sVar2)) &&
       ((ulonglong)(longlong)sVar2 <
        (ulonglong)(*(longlong *)(param_6 + 0x418) - *(longlong *)(param_6 + 0x410) >> 2))) {
      return *(undefined4 *)(*(longlong *)(param_6 + 0x410) + (longlong)sVar2 * 4);
    }
    cVar1 = FUN_140d3cf30(&DAT_141c53470,0x1e,param_4,param_5);
    if (((cVar1 != '\0') &&
        (sVar2 = FUN_1402cb830(param_4,param_5,param_1 + 0x488,param_1 + 0x4a0), -1 < sVar2)) &&
       ((ulonglong)(longlong)sVar2 <
        (ulonglong)(*(longlong *)(param_6 + 0x430) - *(longlong *)(param_6 + 0x428) >> 2))) {
      return *(undefined4 *)(*(longlong *)(param_6 + 0x428) + (longlong)sVar2 * 4);
    }
    cVar1 = FUN_140d3cf30(&DAT_141c53470,0x3e,param_4,param_5);
    if (((cVar1 != '\0') &&
        (sVar2 = FUN_1402cb830(param_4,param_5,param_1 + 0x4b8,param_1 + 0x4d0), -1 < sVar2)) &&
       ((ulonglong)(longlong)sVar2 <
        (ulonglong)(*(longlong *)(param_6 + 0x568) - *(longlong *)(param_6 + 0x560) >> 2))) {
      return *(undefined4 *)(*(longlong *)(param_6 + 0x560) + (longlong)sVar2 * 4);
    }
    break;
  case 0xb:
    piVar6 = *(int **)(param_1 + 0x7b8);
    for (psVar7 = *(short **)(param_1 + 0x7a0); psVar7 < *(short **)(param_1 + 0x7a8);
        psVar7 = psVar7 + 1) {
      if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x7a0) >> 1);
        if ((-1 < sVar2) &&
           ((ulonglong)(longlong)sVar2 <
            (ulonglong)(*(longlong *)(param_6 + 0x460) - *(longlong *)(param_6 + 0x458) >> 2))) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x458) + (longlong)sVar2 * 4);
        }
        break;
      }
      piVar6 = piVar6 + 1;
    }
    break;
  case 0xc:
    piVar6 = *(int **)(param_1 + 0x728);
    for (psVar7 = *(short **)(param_1 + 0x710); psVar7 < *(short **)(param_1 + 0x718);
        psVar7 = psVar7 + 1) {
      if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x710) >> 1);
        if (sVar2 != -1) {
          if ((-1 < sVar2) &&
             ((ulonglong)(longlong)sVar2 <
              (ulonglong)(*(longlong *)(param_6 + 0x5f8) - *(longlong *)(param_6 + 0x5f0) >> 2))) {
            return *(undefined4 *)(*(longlong *)(param_6 + 0x5f0) + (longlong)sVar2 * 4);
          }
          goto LAB_1404b3d89;
        }
        break;
      }
      piVar6 = piVar6 + 1;
    }
    break;
  case 0xd:
    for (psVar7 = *(short **)(param_1 + 0x248); psVar7 < *(short **)(param_1 + 0x250);
        psVar7 = psVar7 + 1) {
      if (*psVar7 == param_3) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x248) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x230) + (longlong)sVar2 * 4);
        }
        break;
      }
    }
    break;
  case 0xe:
    for (psVar7 = *(short **)(param_1 + 0x230); psVar7 < *(short **)(param_1 + 0x238);
        psVar7 = psVar7 + 1) {
      if (*psVar7 == param_3) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x230) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x218) + (longlong)sVar2 * 4);
        }
        break;
      }
    }
    break;
  case 0x10:
    piVar6 = *(int **)(param_1 + 0x848);
    for (psVar7 = *(short **)(param_1 + 0x830); psVar7 < *(short **)(param_1 + 0x838);
        psVar7 = psVar7 + 1) {
      if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x830) >> 1);
        if ((-1 < sVar2) &&
           ((ulonglong)(longlong)sVar2 <
            (ulonglong)(*(longlong *)(param_6 + 0x388) - *(longlong *)(param_6 + 0x380) >> 2))) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x380) + (longlong)sVar2 * 4);
        }
        break;
      }
      piVar6 = piVar6 + 1;
    }
    break;
  case 0x11:
    sVar2 = FUN_1402cb830(param_4,param_5,param_1 + 0x770,param_1 + 0x788);
    if ((-1 < sVar2) &&
       ((ulonglong)(longlong)sVar2 <
        (ulonglong)(*(longlong *)(param_6 + 0x448) - *(longlong *)(param_6 + 0x440) >> 2))) {
      return *(undefined4 *)(*(longlong *)(param_6 + 0x440) + (longlong)sVar2 * 4);
    }
    break;
  case 0x12:
    sVar2 = FUN_1402cb830(param_4,param_5,param_1 + 0x770,param_1 + 0x788);
    if ((-1 < sVar2) &&
       ((ulonglong)(longlong)sVar2 <
        (ulonglong)(*(longlong *)(param_6 + 0x4f0) - *(longlong *)(param_6 + 0x4e8) >> 2))) {
      return *(undefined4 *)(*(longlong *)(param_6 + 0x4e8) + (longlong)sVar2 * 4);
    }
    break;
  case 0x18:
    for (psVar7 = *(short **)(param_1 + 0x140); psVar7 < *(short **)(param_1 + 0x148);
        psVar7 = psVar7 + 1) {
      if (*psVar7 == param_3) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x140) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x110) + (longlong)sVar2 * 4);
        }
        break;
      }
    }
    for (psVar7 = *(short **)(param_1 + 0x128); psVar7 < *(short **)(param_1 + 0x130);
        psVar7 = psVar7 + 1) {
      if (*psVar7 == param_3) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x128) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x170) + (longlong)sVar2 * 4);
        }
        break;
      }
    }
    for (psVar7 = *(short **)(param_1 + 0x158); psVar7 < *(short **)(param_1 + 0x160);
        psVar7 = psVar7 + 1) {
      if (*psVar7 == param_3) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x158) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x128) + (longlong)sVar2 * 4);
        }
        break;
      }
    }
    break;
  case 0x19:
    for (psVar7 = *(short **)(param_1 + 0x170); psVar7 < *(short **)(param_1 + 0x178);
        psVar7 = psVar7 + 1) {
      if (*psVar7 == param_3) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x170) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x188) + (longlong)sVar2 * 4);
        }
        break;
      }
    }
    break;
  case 0x1a:
    for (psVar7 = *(short **)(param_1 + 0x1d0); psVar7 < *(short **)(param_1 + 0x1d8);
        psVar7 = psVar7 + 1) {
      if (*psVar7 == param_3) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x1d0) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x1d0) + (longlong)sVar2 * 4);
        }
        break;
      }
    }
    break;
  case 0x1b:
    for (psVar7 = *(short **)(param_1 + 0x200); psVar7 < *(short **)(param_1 + 0x208);
        psVar7 = psVar7 + 1) {
      if (*psVar7 == param_3) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x200) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x200) + (longlong)sVar2 * 4);
        }
        break;
      }
    }
    break;
  case 0x1c:
    for (psVar7 = *(short **)(param_1 + 0x1a0); psVar7 < *(short **)(param_1 + 0x1a8);
        psVar7 = psVar7 + 1) {
      if (*psVar7 == param_3) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x1a0) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x1a0) + (longlong)sVar2 * 4);
        }
        break;
      }
    }
    break;
  case 0x1d:
    for (psVar7 = *(short **)(param_1 + 0x1b8); psVar7 < *(short **)(param_1 + 0x1c0);
        psVar7 = psVar7 + 1) {
      if (*psVar7 == param_3) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x1b8) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x1b8) + (longlong)sVar2 * 4);
        }
        break;
      }
    }
    break;
  case 0x1e:
    lVar4 = FUN_140d89d60(&DAT_141c53470,param_4,param_5);
    if (((lVar4 != 0) && (3 < *(int *)(lVar4 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar4 + 0x290) + 3) & 0x20) != 0)) {
      piVar6 = *(int **)(param_1 + 0x410);
      for (psVar7 = *(short **)(param_1 + 0x3f8); psVar7 < *(short **)(param_1 + 0x400);
          psVar7 = psVar7 + 1) {
        if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
          sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x3f8) >> 1);
          if ((-1 < sVar2) &&
             ((ulonglong)(longlong)sVar2 <
              (ulonglong)(*(longlong *)(param_6 + 0x3a0) - *(longlong *)(param_6 + 0x398) >> 2))) {
            return *(undefined4 *)(*(longlong *)(param_6 + 0x398) + (longlong)sVar2 * 4);
          }
          break;
        }
        piVar6 = piVar6 + 1;
      }
    }
    if ((ushort)(param_4 - 0x1a3U) < 200) {
      piVar6 = *(int **)(param_1 + 0x470);
      for (psVar7 = *(short **)(param_1 + 0x458); psVar7 < *(short **)(param_1 + 0x460);
          psVar7 = psVar7 + 1) {
        if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
          sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x458) >> 1);
          if ((-1 < sVar2) &&
             ((ulonglong)(longlong)sVar2 <
              (ulonglong)(*(longlong *)(param_6 + 0x3b8) - *(longlong *)(param_6 + 0x3b0) >> 2))) {
            return *(undefined4 *)(*(longlong *)(param_6 + 0x3b0) + (longlong)sVar2 * 4);
          }
          break;
        }
        piVar6 = piVar6 + 1;
      }
    }
    lVar4 = FUN_140d89d60(&DAT_141c53470,param_4,param_5);
    if (((lVar4 != 0) && (3 < *(int *)(lVar4 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar4 + 0x290) + 3) & 0x40) != 0)) {
      piVar6 = *(int **)(param_1 + 0x4a0);
      for (psVar7 = *(short **)(param_1 + 0x488); psVar7 < *(short **)(param_1 + 0x490);
          psVar7 = psVar7 + 1) {
        if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
          sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x488) >> 1);
          if ((-1 < sVar2) &&
             ((ulonglong)(longlong)sVar2 <
              (ulonglong)(*(longlong *)(param_6 + 0x3d0) - *(longlong *)(param_6 + 0x3c8) >> 2))) {
            return *(undefined4 *)(*(longlong *)(param_6 + 0x3c8) + (longlong)sVar2 * 4);
          }
          break;
        }
        piVar6 = piVar6 + 1;
      }
    }
    lVar4 = FUN_140d89d60(&DAT_141c53470,param_4,param_5);
    if (((lVar4 != 0) && (7 < *(int *)(lVar4 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar4 + 0x290) + 7) & 0x40) != 0)) {
      piVar6 = *(int **)(param_1 + 0x4d0);
      for (psVar7 = *(short **)(param_1 + 0x4b8); psVar7 < *(short **)(param_1 + 0x4c0);
          psVar7 = psVar7 + 1) {
        if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
          sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x4b8) >> 1);
          if ((-1 < sVar2) &&
             ((ulonglong)(longlong)sVar2 <
              (ulonglong)(*(longlong *)(param_6 + 0x550) - *(longlong *)(param_6 + 0x548) >> 2))) {
            return *(undefined4 *)(*(longlong *)(param_6 + 0x548) + (longlong)sVar2 * 4);
          }
          break;
        }
        piVar6 = piVar6 + 1;
      }
    }
    break;
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x3a:
  case 0x58:
    piVar6 = *(int **)(param_1 + 0x728);
    for (psVar7 = *(short **)(param_1 + 0x710); psVar7 < *(short **)(param_1 + 0x718);
        psVar7 = psVar7 + 1) {
      if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x710) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x50) + (longlong)sVar2 * 4);
        }
        break;
      }
      piVar6 = piVar6 + 1;
    }
    break;
  case 0x26:
    for (psVar7 = *(short **)(param_1 + 0x188); psVar7 < *(short **)(param_1 + 400);
        psVar7 = psVar7 + 1) {
      if (*psVar7 == param_3) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x188) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x140) + (longlong)sVar2 * 4);
        }
        break;
      }
    }
    break;
  case 0x2b:
    if (param_4 == 0) {
      for (piVar6 = *(int **)(param_1 + 0x548); piVar6 < *(int **)(param_1 + 0x550);
          piVar6 = piVar6 + 1) {
        if (*piVar6 == param_5) {
          sVar2 = (short)((longlong)piVar6 - (longlong)*(int **)(param_1 + 0x548) >> 2);
          if (sVar2 != -1) {
            return *(undefined4 *)(*(longlong *)(param_6 + 0xb0) + (longlong)sVar2 * 4);
          }
          break;
        }
      }
    }
    break;
  case 0x2c:
    piVar6 = *(int **)(param_1 + 0x3e0);
    for (psVar7 = *(short **)(param_1 + 0x3c8); psVar7 < *(short **)(param_1 + 0x3d0);
        psVar7 = psVar7 + 1) {
      if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x3c8) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0xf8) + (longlong)sVar2 * 4);
        }
        break;
      }
      piVar6 = piVar6 + 1;
    }
    break;
  case 0x2f:
    piVar6 = *(int **)(param_1 + 0x998);
    for (psVar7 = *(short **)(param_1 + 0x980); psVar7 < *(short **)(param_1 + 0x988);
        psVar7 = psVar7 + 1) {
      if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x980) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x2c0) + (longlong)sVar2 * 4);
        }
        break;
      }
      piVar6 = piVar6 + 1;
    }
    break;
  case 0x30:
  case 0x31:
    piVar6 = *(int **)(param_1 + 0x9b0);
    psVar7 = *(short **)(param_1 + 0x9c8);
    if (piVar6 < *(int **)(param_1 + 0x9b8)) {
      piVar5 = piVar6;
      do {
        if ((*piVar5 == (int)param_4) && (*psVar7 == sVar2)) {
          sVar2 = (short)((longlong)piVar5 - (longlong)piVar6 >> 2);
          if (sVar2 != -1) {
            return *(undefined4 *)(*(longlong *)(param_6 + 0x2d8) + (longlong)sVar2 * 4);
          }
          break;
        }
        piVar5 = piVar5 + 1;
        psVar7 = psVar7 + 1;
      } while (piVar5 < *(int **)(param_1 + 0x9b8));
    }
    break;
  case 0x32:
  case 0x33:
    piVar6 = *(int **)(param_1 + 0xb30);
    psVar7 = *(short **)(param_1 + 0xbd8);
    if (piVar6 < *(int **)(param_1 + 0xb38)) {
      piVar5 = piVar6;
      do {
        if ((*piVar5 == (int)param_4) && (*psVar7 == sVar2)) {
          sVar2 = (short)((longlong)piVar5 - (longlong)piVar6 >> 2);
          if (sVar2 != -1) {
            return *(undefined4 *)(*(longlong *)(param_6 + 0x248) + (longlong)sVar2 * 4);
          }
          break;
        }
        piVar5 = piVar5 + 1;
        psVar7 = psVar7 + 1;
      } while (piVar5 < *(int **)(param_1 + 0xb38));
    }
    break;
  case 0x34:
    piVar6 = *(int **)(param_1 + 0xab8);
    for (psVar7 = *(short **)(param_1 + 0xaa0); psVar7 < *(short **)(param_1 + 0xaa8);
        psVar7 = psVar7 + 1) {
      if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0xaa0) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0xe0) + (longlong)sVar2 * 4);
        }
        break;
      }
      piVar6 = piVar6 + 1;
    }
    break;
  case 0x35:
    piVar6 = *(int **)(param_1 + 0xa28);
    for (psVar7 = *(short **)(param_1 + 0xa10); psVar7 < *(short **)(param_1 + 0xa18);
        psVar7 = psVar7 + 1) {
      if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0xa10) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x2f0) + (longlong)sVar2 * 4);
        }
        break;
      }
      piVar6 = piVar6 + 1;
    }
    break;
  case 0x36:
    piVar6 = *(int **)(param_1 + 0x410);
    for (psVar7 = *(short **)(param_1 + 0x3f8); psVar7 < *(short **)(param_1 + 0x400);
        psVar7 = psVar7 + 1) {
      if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x3f8) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 8) + (longlong)sVar2 * 4);
        }
        break;
      }
      piVar6 = piVar6 + 1;
    }
    break;
  case 0x37:
    if ((ushort)(param_4 - 0x1a3U) < 200) {
      psVar7 = *(short **)(param_1 + 0xa58);
      for (piVar6 = *(int **)(param_1 + 0xa40); piVar6 < *(int **)(param_1 + 0xa48);
          piVar6 = piVar6 + 1) {
        if ((*piVar6 == param_5) && (*psVar7 == param_3)) {
          sVar2 = (short)((longlong)piVar6 - (longlong)*(int **)(param_1 + 0xa40) >> 2);
          if (sVar2 != -1) {
            return *(undefined4 *)(*(longlong *)(param_6 + 0x308) + (longlong)sVar2 * 4);
          }
          break;
        }
        psVar7 = psVar7 + 1;
      }
      psVar7 = *(short **)(param_1 + 0xa88);
      for (piVar6 = *(int **)(param_1 + 0xa70); piVar6 < *(int **)(param_1 + 0xa78);
          piVar6 = piVar6 + 1) {
        if ((*piVar6 == param_5) && (*psVar7 == param_3)) {
          sVar2 = (short)((longlong)piVar6 - (longlong)*(int **)(param_1 + 0xa70) >> 2);
          if (sVar2 != -1) {
            return *(undefined4 *)(*(longlong *)(param_6 + 800) + (longlong)sVar2 * 4);
          }
          break;
        }
        psVar7 = psVar7 + 1;
      }
    }
    break;
  case 0x38:
    if ((ushort)(param_4 - 0x1a3U) < 200) {
      piVar6 = *(int **)(param_1 + 0x470);
      for (psVar7 = *(short **)(param_1 + 0x458); psVar7 < *(short **)(param_1 + 0x460);
          psVar7 = psVar7 + 1) {
        if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
          sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x458) >> 1);
          if ((-1 < sVar2) &&
             ((ulonglong)(longlong)sVar2 <
              (ulonglong)(*(longlong *)(param_6 + 1000) - *(longlong *)(param_6 + 0x3e0) >> 2))) {
            return *(undefined4 *)(*(longlong *)(param_6 + 0x3e0) + (longlong)sVar2 * 4);
          }
          break;
        }
        piVar6 = piVar6 + 1;
      }
    }
    cVar1 = FUN_140d3cf30(&DAT_141c53470,0x1e,param_4,param_5);
    if (((cVar1 != '\0') &&
        (sVar2 = FUN_1402cb830(param_4,param_5,param_1 + 0x488,param_1 + 0x4a0), -1 < sVar2)) &&
       ((ulonglong)(longlong)sVar2 <
        (ulonglong)(*(longlong *)(param_6 + 0x400) - *(longlong *)(param_6 + 0x3f8) >> 2))) {
      return *(undefined4 *)(*(longlong *)(param_6 + 0x3f8) + (longlong)sVar2 * 4);
    }
    cVar1 = FUN_140d3cf30(&DAT_141c53470,0x3e,param_4,param_5);
    if (((cVar1 != '\0') &&
        (sVar2 = FUN_1402cb830(param_4,param_5,param_1 + 0x4b8,param_1 + 0x4d0), -1 < sVar2)) &&
       ((ulonglong)(longlong)sVar2 <
        (ulonglong)(*(longlong *)(param_6 + 0x598) - *(longlong *)(param_6 + 0x590) >> 2))) {
      return *(undefined4 *)(*(longlong *)(param_6 + 0x590) + (longlong)sVar2 * 4);
    }
    break;
  case 0x39:
    if ((ushort)(param_4 - 0x1a3U) < 200) {
      piVar6 = *(int **)(param_1 + 0x470);
      for (psVar7 = *(short **)(param_1 + 0x458); psVar7 < *(short **)(param_1 + 0x460);
          psVar7 = psVar7 + 1) {
        if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
          sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x458) >> 1);
          if (sVar2 != -1) {
            return *(undefined4 *)(*(longlong *)(param_6 + 0x20) + (longlong)sVar2 * 4);
          }
          break;
        }
        piVar6 = piVar6 + 1;
      }
    }
    else {
      lVar4 = FUN_140d89d60(&DAT_141c53470,param_4,param_5);
      if (((lVar4 == 0) || (*(int *)(lVar4 + 0x298) < 4)) ||
         ((*(byte *)(*(longlong *)(lVar4 + 0x290) + 3) & 0x40) == 0)) {
        lVar4 = FUN_140d89d60(&DAT_141c53470,param_4,param_5);
        if (((lVar4 != 0) && (7 < *(int *)(lVar4 + 0x298))) &&
           ((*(byte *)(*(longlong *)(lVar4 + 0x290) + 7) & 0x40) != 0)) {
          piVar6 = *(int **)(param_1 + 0x4d0);
          for (psVar7 = *(short **)(param_1 + 0x4b8); psVar7 < *(short **)(param_1 + 0x4c0);
              psVar7 = psVar7 + 1) {
            if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
              sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x4b8) >> 1);
              if (sVar2 != -1) {
                return *(undefined4 *)(*(longlong *)(param_6 + 0x578) + (longlong)sVar2 * 4);
              }
              break;
            }
            piVar6 = piVar6 + 1;
          }
        }
      }
      else {
        piVar6 = *(int **)(param_1 + 0x4a0);
        for (psVar7 = *(short **)(param_1 + 0x488); psVar7 < *(short **)(param_1 + 0x490);
            psVar7 = psVar7 + 1) {
          if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
            sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x488) >> 1);
            if (sVar2 != -1) {
              return *(undefined4 *)(*(longlong *)(param_6 + 0x38) + (longlong)sVar2 * 4);
            }
            break;
          }
          piVar6 = piVar6 + 1;
        }
      }
    }
    break;
  case 0x3b:
    for (psVar7 = *(short **)(param_1 + 0x1e8); psVar7 < *(short **)(param_1 + 0x1f0);
        psVar7 = psVar7 + 1) {
      if (*psVar7 == param_3) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x1e8) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x1e8) + (longlong)sVar2 * 4);
        }
        break;
      }
    }
    break;
  case 0x3c:
    piVar6 = *(int **)(param_1 + 0x818);
    for (psVar7 = *(short **)(param_1 + 0x800); psVar7 < *(short **)(param_1 + 0x808);
        psVar7 = psVar7 + 1) {
      if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x800) >> 1);
        if ((-1 < sVar2) &&
           ((ulonglong)(longlong)sVar2 <
            (ulonglong)(*(longlong *)(param_6 + 0x490) - *(longlong *)(param_6 + 0x488) >> 2))) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x488) + (longlong)sVar2 * 4);
        }
        break;
      }
      piVar6 = piVar6 + 1;
    }
    break;
  case 0x3d:
    piVar6 = *(int **)(param_1 + 0x7e8);
    for (psVar7 = *(short **)(param_1 + 2000); psVar7 < *(short **)(param_1 + 0x7d8);
        psVar7 = psVar7 + 1) {
      if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 2000) >> 1);
        if ((-1 < sVar2) &&
           ((ulonglong)(longlong)sVar2 <
            (ulonglong)(*(longlong *)(param_6 + 0x478) - *(longlong *)(param_6 + 0x470) >> 2))) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x470) + (longlong)sVar2 * 4);
        }
        break;
      }
      piVar6 = piVar6 + 1;
    }
    break;
  case 0x43:
    for (psVar7 = *(short **)(param_1 + 0x218); psVar7 < *(short **)(param_1 + 0x220);
        psVar7 = psVar7 + 1) {
      if (*psVar7 == param_3) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x218) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x158) + (longlong)sVar2 * 4);
        }
        break;
      }
    }
    break;
  case 0x44:
    piVar6 = *(int **)(param_1 + 0x8d8);
    for (psVar7 = *(short **)(param_1 + 0x8c0); psVar7 < *(short **)(param_1 + 0x8c8);
        psVar7 = psVar7 + 1) {
      if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x8c0) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x260) + (longlong)sVar2 * 4);
        }
        break;
      }
      piVar6 = piVar6 + 1;
    }
    break;
  case 0x45:
    piVar6 = *(int **)(param_1 + 0x938);
    for (psVar7 = *(short **)(param_1 + 0x920); psVar7 < *(short **)(param_1 + 0x928);
        psVar7 = psVar7 + 1) {
      if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x920) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x290) + (longlong)sVar2 * 4);
        }
        break;
      }
      piVar6 = piVar6 + 1;
    }
    piVar6 = *(int **)(param_1 + 0x6c8);
    for (psVar7 = *(short **)(param_1 + 0x6b0); psVar7 < *(short **)(param_1 + 0x6b8);
        psVar7 = psVar7 + 1) {
      if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x6b0) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x4a0) + (longlong)sVar2 * 4);
        }
        break;
      }
      piVar6 = piVar6 + 1;
    }
    break;
  case 0x46:
    piVar6 = *(int **)(param_1 + 0x908);
    for (psVar7 = *(short **)(param_1 + 0x8f0); psVar7 < *(short **)(param_1 + 0x8f8);
        psVar7 = psVar7 + 1) {
      if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x8f0) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x278) + (longlong)sVar2 * 4);
        }
        break;
      }
      piVar6 = piVar6 + 1;
    }
    break;
  case 0x48:
    piVar6 = *(int **)(param_1 + 0x968);
    for (psVar7 = *(short **)(param_1 + 0x950); psVar7 < *(short **)(param_1 + 0x958);
        psVar7 = psVar7 + 1) {
      if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x950) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x2a8) + (longlong)sVar2 * 4);
        }
        break;
      }
      piVar6 = piVar6 + 1;
    }
    break;
  case 0x51:
    sVar2 = FUN_1402cb830(param_4,param_5,param_1 + 0x770,param_1 + 0x788);
    if ((-1 < sVar2) &&
       ((ulonglong)(longlong)sVar2 <
        (ulonglong)(*(longlong *)(param_6 + 0x508) - *(longlong *)(param_6 + 0x500) >> 2))) {
      return *(undefined4 *)(*(longlong *)(param_6 + 0x500) + (longlong)sVar2 * 4);
    }
    break;
  case 0x52:
    sVar2 = FUN_1402cb830(param_4,param_5,param_1 + 0x770,param_1 + 0x788);
    if ((-1 < sVar2) &&
       ((ulonglong)(longlong)sVar2 <
        (ulonglong)(*(longlong *)(param_6 + 0x520) - *(longlong *)(param_6 + 0x518) >> 2))) {
      return *(undefined4 *)(*(longlong *)(param_6 + 0x518) + (longlong)sVar2 * 4);
    }
    break;
  case 0x55:
    for (psVar7 = *(short **)(param_1 + 0x278); psVar7 < *(short **)(param_1 + 0x280);
        psVar7 = psVar7 + 1) {
      if (*psVar7 == param_3) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x278) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x5a8) + (longlong)sVar2 * 4);
        }
        break;
      }
    }
    break;
  case 0x57:
    piVar6 = *(int **)(param_1 + 0x9e0);
    psVar7 = *(short **)(param_1 + 0x9f8);
    if (piVar6 < *(int **)(param_1 + 0x9e8)) {
      piVar5 = piVar6;
      do {
        if ((*piVar5 == (int)param_4) && (*psVar7 == sVar2)) {
          sVar2 = (short)((longlong)piVar5 - (longlong)piVar6 >> 2);
          if (sVar2 != -1) {
            return *(undefined4 *)(*(longlong *)(param_6 + 0x530) + (longlong)sVar2 * 4);
          }
          break;
        }
        piVar5 = piVar5 + 1;
        psVar7 = psVar7 + 1;
      } while (piVar5 < *(int **)(param_1 + 0x9e8));
    }
    break;
  case 0x59:
    piVar6 = *(int **)(param_1 + 0x440);
    for (psVar7 = *(short **)(param_1 + 0x428); psVar7 < *(short **)(param_1 + 0x430);
        psVar7 = psVar7 + 1) {
      if ((*psVar7 == param_4) && (*piVar6 == param_5)) {
        sVar2 = (short)((longlong)psVar7 - (longlong)*(short **)(param_1 + 0x428) >> 1);
        if (sVar2 != -1) {
          return *(undefined4 *)(*(longlong *)(param_6 + 0x5d8) + (longlong)sVar2 * 4);
        }
        break;
      }
      piVar6 = piVar6 + 1;
    }
  }
  sVar2 = FUN_140566780(param_2,param_3,param_4,param_5,param_1 + 0xad0,param_1 + 0xae8,
                        param_1 + 0xb00,param_1 + 0xb18);
  if ((sVar2 < 0) ||
     ((ulonglong)(*(longlong *)(param_6 + 0x4d8) - *(longlong *)(param_6 + 0x4d0) >> 2) <=
      (ulonglong)(longlong)sVar2)) {
LAB_1404b3d89:
    uVar3 = 0x80;
  }
  else {
    uVar3 = *(undefined4 *)(*(longlong *)(param_6 + 0x4d0) + (longlong)sVar2 * 4);
  }
  return uVar3;
}

