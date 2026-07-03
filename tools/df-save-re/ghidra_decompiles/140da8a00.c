// FUN_140da8a00 @ 140da8a00
// callees:
//   -> 140d89d60 FUN_140d89d60


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140da8a00(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  short in_R9W;
  short in_stack_00000028;
  
  lVar3 = FUN_140d89d60();
  if (((lVar3 != 0) && (iVar2 = *(int *)(lVar3 + 0x9c + (longlong)in_R9W * 4), -1 < iVar2)) &&
     ((ulonglong)(longlong)iVar2 < (ulonglong)(DAT_141d778e8 - DAT_141d778e0 >> 3))) {
    lVar3 = *(longlong *)
             (DAT_141d778b0 +
             (longlong)**(short **)(*(longlong *)(DAT_141d778e0 + (longlong)iVar2 * 8) + 0x20) * 8);
    DAT_14127122a = 1;
    cVar1 = *(char *)(lVar3 + 0x70);
    if (cVar1 != in_stack_00000028) {
      DAT_14127122a = *(undefined1 *)(lVar3 + 0x71);
    }
    _DAT_141271228 = CONCAT11((char)in_stack_00000028,cVar1);
    return;
  }
  DAT_14127122a = 1;
  _DAT_141271228 = 4;
  return;
}

