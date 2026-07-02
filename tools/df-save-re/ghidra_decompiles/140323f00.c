// FUN_140323f00 @ 140323f00
// callees:
//   -> 14031fab0 FUN_14031fab0


void FUN_140323f00(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (DAT_141c68018 - DAT_141c68010 >> 3 != 0) {
    lVar2 = 0;
    do {
      FUN_14031fab0(*(undefined8 *)(lVar2 + DAT_141c68010),param_1);
      lVar2 = lVar2 + 8;
      iVar1 = iVar1 + 1;
    } while ((ulonglong)(longlong)iVar1 < (ulonglong)(DAT_141c68018 - DAT_141c68010 >> 3));
  }
  return;
}

