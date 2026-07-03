// FUN_1404c59d0 @ 1404c59d0
// callees:
//   -> 14000d840 FUN_14000d840
//   -> 140002660 FUN_140002660
//   -> 1404c50d0 FUN_1404c50d0
//   -> 1401b83c0 FUN_1401b83c0
//   -> 14061e7d0 FUN_14061e7d0


void FUN_1404c59d0(longlong param_1,char *param_2,undefined2 param_3)

{
  short sVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  sVar1 = *(short *)(param_1 + 0x90);
  if (((-1 < sVar1) &&
      ((ulonglong)(longlong)sVar1 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
     (cVar3 = FUN_14000d840(*(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8) + 0x1a8),
     cVar3 != '\0')) {
    FUN_140002660(param_2);
    param_2[0x72] = '\x01';
    param_2[0x6c] = -1;
    param_2[0x6d] = -1;
    param_2[0x6e] = -1;
    param_2[0x6f] = -1;
    FUN_1404c50d0();
    pcVar2 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pcVar2 = *(char **)param_2;
      param_2 = *(char **)param_2;
    }
    *param_2 = *pcVar2 + -0x20;
    return;
  }
  lVar6 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar6 + 0x3c0) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = FUN_1401b83c0(&DAT_141d6e1a8,lVar6 + 0x3b0);
  }
  switch(param_3) {
  case 2:
    lVar5 = lVar6 + 0x1930;
    lVar6 = lVar6 + 0x4f0;
    break;
  default:
    lVar5 = lVar6 + 0x1810;
    lVar6 = lVar6 + 0x3d0;
    break;
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x27:
    lVar5 = lVar6 + 0x1a50;
    lVar6 = lVar6 + 0x610;
    break;
  case 0x10:
    lVar5 = lVar6 + 0x1b70;
    lVar6 = lVar6 + 0x730;
    break;
  case 0x11:
  case 0x2a:
    lVar5 = lVar6 + 0x1c90;
    lVar6 = lVar6 + 0x850;
    break;
  case 0x12:
    lVar5 = lVar6 + 0x1db0;
    lVar6 = lVar6 + 0x970;
    break;
  case 0x15:
    lVar5 = lVar6 + 0x1ed0;
    lVar6 = lVar6 + 0xa90;
    break;
  case 0x1d:
    lVar5 = lVar6 + 0x1ff0;
    lVar6 = lVar6 + 0xbb0;
    break;
  case 0x1e:
    lVar5 = lVar6 + 0x2110;
    lVar6 = lVar6 + 0xcd0;
    break;
  case 0x1f:
    lVar5 = lVar6 + 0x2230;
    lVar6 = lVar6 + 0xdf0;
    break;
  case 0x20:
    lVar5 = lVar6 + 0x2350;
    lVar6 = lVar6 + 0xf10;
    break;
  case 0x21:
    lVar5 = lVar6 + 0x26b0;
    lVar6 = lVar6 + 0x1270;
    break;
  case 0x22:
    lVar5 = lVar6 + 0x2470;
    lVar6 = lVar6 + 0x1030;
    break;
  case 0x23:
    lVar5 = lVar6 + 0x2590;
    lVar6 = lVar6 + 0x1150;
    break;
  case 0x2b:
    lVar5 = lVar6 + 0x27d0;
    lVar6 = lVar6 + 0x1390;
    break;
  case 0x2f:
    lVar5 = lVar6 + 0x28f0;
    lVar6 = lVar6 + 0x14b0;
    break;
  case 0x31:
    lVar5 = lVar6 + 0x2a10;
    lVar6 = lVar6 + 0x15d0;
    break;
  case 0x33:
    lVar5 = lVar6 + 0x2b30;
    lVar6 = lVar6 + 0x16f0;
  }
  FUN_14061e7d0(param_2,uVar4,param_3,lVar6,lVar5);
  return;
}

