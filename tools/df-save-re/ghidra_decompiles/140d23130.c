// FUN_140d23130 @ 140d23130
// callees:
//   -> 140dfc99c memset


void FUN_140d23130(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)(*(longlong *)(param_1 + 0x1160a0) - *(longlong *)(param_1 + 0x116098) >> 3) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      memset((void *)(*(longlong *)(*(longlong *)(param_1 + 0x116098) + lVar2 * 8) + 0xb94),0,0x400)
      ;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}

