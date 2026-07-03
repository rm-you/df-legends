// FUN_140c5f100 @ 140c5f100
// callees:
//   -> 1406d1dd0 FUN_1406d1dd0
//   -> 1405b0560 FUN_1405b0560
//   -> 140d1d410 FUN_140d1d410
//   -> 140c5f100 FUN_140c5f100


void FUN_140c5f100(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xfffbffff;
  if (DAT_1410b67dc == 0) {
    FUN_1406d1dd0(*(undefined2 *)(param_1 + 0xa4));
    lVar2 = FUN_1405b0560(&DAT_141c536c8,param_1 + 0x318);
    if (lVar2 != 0) {
      FUN_140d1d410(lVar2);
    }
  }
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 0x3b8) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x170);
  }
  iVar3 = 0;
  if (DAT_141c66ff0 - DAT_141c66fe8 >> 3 != 0) {
    lVar4 = 0;
    lVar2 = DAT_141c66fe8;
    lVar5 = DAT_141c66ff0;
    do {
      lVar1 = *(longlong *)(lVar4 + lVar2);
      if (((*(byte *)(lVar1 + 0x110) & 2) == 0) &&
         (*(int *)(lVar1 + 0x3b8) == *(int *)(param_1 + 0x130))) {
        FUN_140c5f100(lVar1,param_2);
        lVar2 = DAT_141c66fe8;
        lVar5 = DAT_141c66ff0;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while ((ulonglong)(longlong)iVar3 < (ulonglong)(lVar5 - lVar2 >> 3));
  }
  return;
}

