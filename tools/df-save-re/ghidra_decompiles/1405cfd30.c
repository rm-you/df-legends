// FUN_1405cfd30 @ 1405cfd30
// callees:
//   -> 140907ac0 FUN_140907ac0
//   -> 140dfb5b4 free


void FUN_1405cfd30(longlong *param_1)

{
  void *_Memory;
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *(undefined1 *)(param_1 + 0x5a) = 1;
  iVar1 = (int)(param_1[1] - *param_1 >> 3) + -1;
  lVar3 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      _Memory = *(void **)(*param_1 + lVar3 * 8);
      if (_Memory != (void *)0x0) {
        FUN_140907ac0(_Memory);
        free(_Memory);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  lVar3 = 0xf;
  param_1[1] = *param_1;
  param_1[4] = param_1[3];
  param_1[7] = param_1[6];
  param_1[10] = param_1[9];
  param_1[0xd] = param_1[0xc];
  plVar2 = param_1 + 0xf;
  do {
    plVar2[1] = *plVar2;
    plVar2 = plVar2 + 3;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[0x3d] = param_1[0x3c];
  param_1[0x40] = param_1[0x3f];
  param_1[0x43] = param_1[0x42];
  param_1[0x46] = param_1[0x45];
  param_1[0x49] = param_1[0x48];
  param_1[0x4c] = param_1[0x4b];
  param_1[0x4f] = param_1[0x4e];
  param_1[0x52] = param_1[0x51];
  param_1[0x55] = param_1[0x54];
  *(undefined1 *)(param_1 + 0x5a) = 0;
  return;
}

