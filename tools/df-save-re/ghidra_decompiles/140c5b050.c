// FUN_140c5b050 @ 140c5b050
// callees:
//   -> 14000de70 FUN_14000de70
//   -> 1408243e0 FUN_1408243e0
//   -> 140d227c0 FUN_140d227c0


void FUN_140c5b050(longlong param_1)

{
  longlong lVar1;
  
  if (((*(uint *)(param_1 + 0x110) & 0x2010200) == 0) &&
     ((*(uint *)(param_1 + 0x118) & 0x180000) == 0)) {
    *(undefined2 *)(param_1 + 0x4ac) = 0x8ad0;
    *(undefined4 *)(param_1 + 0x4a8) = 0x8ad08ad0;
    if (*(int *)(param_1 + 0x4b0) != -1) {
      lVar1 = FUN_14000de70(&DAT_141c67368);
      if (lVar1 != 0) {
        FUN_1408243e0(lVar1,0x3a,*(undefined4 *)(param_1 + 0x130));
      }
      *(undefined4 *)(param_1 + 0x4b0) = 0xffffffff;
    }
    if ((*(uint *)(param_1 + 0x110) >> 0xf & 1) == 0) {
      *(undefined1 *)(param_1 + 0x4a0) = 0;
      *(undefined4 *)(param_1 + 0x4a4) = 0;
    }
    *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 0x8000;
    FUN_140d227c0(&DAT_141c53470,*(undefined2 *)(param_1 + 0xa8),*(undefined2 *)(param_1 + 0xaa),
                  *(undefined2 *)(param_1 + 0xac),0x10);
  }
  return;
}

