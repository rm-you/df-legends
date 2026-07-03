// FUN_140c8a700 @ 140c8a700
// callees:
//   -> 140ca8390 FUN_140ca8390
//   -> 1406f71b0 FUN_1406f71b0
//   -> 140740090 FUN_140740090


void FUN_140c8a700(longlong param_1,short param_2,undefined4 param_3,short param_4,
                  undefined1 param_5)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(uint *)(param_1 + 0x1268);
  if (uVar1 < 500) {
    puVar3 = (undefined4 *)((longlong)&DAT_141c70ac4 + (longlong)(int)uVar1 * 4);
    puVar5 = &DAT_141c70ac4 + (longlong)(int)uVar1 * 0xfa;
    lVar2 = 500;
    do {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 500;
      *(undefined4 *)puVar5 = 0xffffffff;
      puVar5 = (undefined8 *)((longlong)puVar5 + 4);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  lVar2 = FUN_140ca8390(param_1);
  if (lVar2 == 0) {
    return;
  }
  if ((*(longlong *)(param_1 + 0xa78) != 0) && (param_2 == 4)) {
    if (param_4 < 0x5a) {
      if (param_4 < 0x46) {
        if (param_4 < 0x32) {
          if (param_4 < 0x19) goto LAB_140c8a7df;
          uVar4 = 1;
        }
        else {
          uVar4 = 2;
        }
      }
      else {
        uVar4 = 5;
      }
    }
    else {
      uVar4 = 10;
    }
    FUN_1406f71b0(*(longlong *)(param_1 + 0xa78) + 0x248,2,param_3,uVar4);
  }
LAB_140c8a7df:
  FUN_140740090(lVar2,param_2,param_3,param_4,param_5);
  return;
}

