// FUN_140190090 @ 140190090
// callees:
//   -> 1400f1b70 FUN_1400f1b70
//   -> 140dfb5b4 free


void FUN_140190090(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  void *_Memory;
  int iVar4;
  longlong lVar5;
  
  *(ushort *)(param_1 + 0x184) = *(ushort *)(param_1 + 0x184) | 1;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined2 *)(param_1 + 0x186) = 0;
  iVar4 = (int)(*(longlong *)(param_1 + 0x160) - *(longlong *)(param_1 + 0x158) >> 3) + -1;
  lVar5 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x158) + lVar5 * 8);
      if ((short)plVar2[1] == 0) {
        lVar3 = *plVar2;
        uVar1 = *(uint *)(lVar3 + 0x10);
        if ((uVar1 & 0x20) != 0) {
          *(uint *)(lVar3 + 0x10) = uVar1 & 0xffffffdf;
        }
      }
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  iVar4 = (int)(*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3) + -1;
  lVar5 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      _Memory = *(void **)(*(longlong *)(param_1 + 0x58) + lVar5 * 8);
      if ((*(short *)((longlong)_Memory + 0x14) == 0xe) && (_Memory != (void *)0x0)) {
        FUN_1400f1b70(_Memory);
        free(_Memory);
      }
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  return;
}

