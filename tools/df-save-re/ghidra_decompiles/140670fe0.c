// FUN_140670fe0 @ 140670fe0
// callees:
//   -> 14000d840 FUN_14000d840


void FUN_140670fe0(short param_1,undefined4 *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = (ulonglong)param_1;
  *param_2 = 0;
  if (-1 < param_1) {
    lVar3 = DAT_141d6dc10;
    if (uVar2 < (ulonglong)(DAT_141d6dc18 - DAT_141d6dc10 >> 3)) {
      cVar1 = FUN_14000d840(*(longlong *)(DAT_141d6dc10 + uVar2 * 8) + 0x40,0);
      if (cVar1 != '\0') {
        *(undefined1 *)param_2 = 1;
        lVar3 = DAT_141d6dc10;
      }
    }
    if (-1 < param_1) {
      if (uVar2 < (ulonglong)(DAT_141d6dc18 - lVar3 >> 3)) {
        cVar1 = FUN_14000d840(*(longlong *)(lVar3 + uVar2 * 8) + 0x40,1);
        if (cVar1 != '\0') {
          *(undefined1 *)((longlong)param_2 + 1) = 1;
          lVar3 = DAT_141d6dc10;
        }
      }
      if (-1 < param_1) {
        if (uVar2 < (ulonglong)(DAT_141d6dc18 - lVar3 >> 3)) {
          cVar1 = FUN_14000d840(*(longlong *)(lVar3 + uVar2 * 8) + 0x40,2);
          if (cVar1 != '\0') {
            *(undefined1 *)((longlong)param_2 + 2) = 1;
            lVar3 = DAT_141d6dc10;
          }
        }
        if ((-1 < param_1) && (uVar2 < (ulonglong)(DAT_141d6dc18 - lVar3 >> 3))) {
          cVar1 = FUN_14000d840(*(longlong *)(lVar3 + uVar2 * 8) + 0x40,3);
          if (cVar1 != '\0') {
            *(undefined1 *)((longlong)param_2 + 3) = 1;
          }
        }
      }
    }
  }
  return;
}

