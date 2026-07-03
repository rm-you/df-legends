// FUN_140c5b130 @ 140c5b130
// callees:
//   -> 1400049b0 FUN_1400049b0


void FUN_140c5b130(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if (((*(uint *)(param_1 + 0x110) & 0x2010200) == 0) &&
     ((*(uint *)(param_1 + 0x118) & 0x180000) == 0)) {
    plVar3 = DAT_141c66fe8;
    if ((*(uint *)(param_1 + 0x110) >> 0xf & 1) == 0) {
      FUN_1400049b0(&DAT_141c53470,*(undefined2 *)(param_1 + 0xa8),*(undefined2 *)(param_1 + 0xaa),
                    *(undefined2 *)(param_1 + 0xac),8);
      return;
    }
    for (; plVar3 < DAT_141c66ff0; plVar3 = plVar3 + 1) {
      lVar1 = *plVar3;
      if (((((*(uint *)(lVar1 + 0x110) & 0x2010302) == 0) &&
           ((*(uint *)(lVar1 + 0x118) & 0x180000) == 0)) && (lVar1 != param_1)) &&
         (((*(uint *)(lVar1 + 0x110) >> 0xf & 1) != 0 &&
          (*(short *)(lVar1 + 0xac) == *(short *)(param_1 + 0xac))))) {
        if ((*(uint *)(lVar1 + 0x118) >> 10 & 1) == 0) {
          if ((*(short *)(lVar1 + 0xa8) == *(short *)(param_1 + 0xa8)) &&
             (*(short *)(lVar1 + 0xaa) == *(short *)(param_1 + 0xaa))) goto LAB_140c5b236;
        }
        else {
          uVar2 = (int)*(short *)(lVar1 + 0xa8) - (int)*(short *)(param_1 + 0xa8);
          uVar4 = (int)uVar2 >> 0x1f;
          if (((int)((uVar2 ^ uVar4) - uVar4) < 2) &&
             (uVar2 = (int)*(short *)(lVar1 + 0xaa) - (int)*(short *)(param_1 + 0xaa),
             uVar4 = (int)uVar2 >> 0x1f, (int)((uVar2 ^ uVar4) - uVar4) < 2)) {
LAB_140c5b236:
            if (plVar3 < DAT_141c66ff0) {
              return;
            }
            break;
          }
        }
      }
    }
    FUN_1400049b0(&DAT_141c53470,*(undefined2 *)(param_1 + 0xa8),*(undefined2 *)(param_1 + 0xaa),
                  *(undefined2 *)(param_1 + 0xac),0x10);
  }
  return;
}

