// FUN_140141df0 @ 140141df0
// callees:


void FUN_140141df0(undefined4 *param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = DAT_141c53720 - DAT_141c53718 >> 3;
  if ((lVar1 != 0) && (DAT_141c36b88 != -1)) {
    iVar4 = (int)lVar1 + -1;
    iVar5 = 0;
    if (-1 < iVar4) {
      do {
        iVar2 = iVar4 + iVar5 >> 1;
        lVar1 = *(longlong *)(DAT_141c53718 + (longlong)iVar2 * 8);
        if (*(int *)(lVar1 + 4) == DAT_141c36b88) {
          if (lVar1 != 0) {
            sVar3 = 0xf;
            switch(param_2) {
            case 4:
            case 0xc:
              sVar3 = 0;
              break;
            case 6:
            case 7:
              sVar3 = 0xc;
              break;
            case 8:
            case 9:
            case 0xb:
            case 0xf:
            case 0x12:
              sVar3 = 0xe;
              break;
            case 0xd:
            case 0xe:
              sVar3 = 0x10;
              break;
            case 0x10:
            case 0x11:
              sVar3 = 9;
            }
            sVar3 = *(short *)(lVar1 + 0xce4 + (longlong)sVar3 * 2);
            if (sVar3 != 0xc) {
              if (sVar3 != 0xe) {
                return;
              }
              *param_1 = 0x32;
              param_1[1] = 8;
              return;
            }
            param_1[1] = 1;
          }
          break;
        }
        if (DAT_141c36b88 < *(int *)(lVar1 + 4)) {
          iVar4 = iVar2 + -1;
        }
        else {
          iVar5 = iVar2 + 1;
        }
      } while (iVar5 <= iVar4);
    }
  }
  param_1[2] = 1;
  return;
}

