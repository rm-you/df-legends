// FUN_140d86200 @ 140d86200
// callees:
//   -> 140d864a0 FUN_140d864a0
//   -> 1401745b0 FUN_1401745b0
//   -> 1400046c0 FUN_1400046c0


longlong *
FUN_140d86200(longlong param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,char param_5
             )

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  
  uVar8 = 0;
  uVar7 = 1;
  lVar3 = FUN_140d864a0();
  if (lVar3 == 0) {
    return (longlong *)0x0;
  }
  iVar2 = (int)(*(longlong *)(param_1 + 0x1c998) - *(longlong *)(param_1 + 0x1c990) >> 3) + -1;
  lVar6 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1c990) + lVar6 * 8);
      cVar1 = FUN_1401745b0(lVar5,param_2,param_3,param_4,uVar7,uVar8);
      if (cVar1 != '\0') {
        switch(*(undefined4 *)(lVar5 + 0x180)) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x3f:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x4f:
        case 0x50:
          if ((*(int *)(lVar5 + 0x148) != -1) &&
             (plVar4 = (longlong *)FUN_1400046c0(lVar3), plVar4 != (longlong *)0x0)) {
            if (param_5 == '\0') {
              return plVar4;
            }
            lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
            if ((lVar5 != 0) && (*(char *)(lVar5 + 0x72) != '\0')) {
              return plVar4;
            }
          }
        }
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  return (longlong *)0x0;
}

