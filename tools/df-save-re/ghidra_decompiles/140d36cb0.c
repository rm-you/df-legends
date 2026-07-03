// FUN_140d36cb0 @ 140d36cb0
// callees:
//   -> 1400ba750 FUN_1400ba750
//   -> 140dfb5c4 operator_new
//   -> 1400ba260 FUN_1400ba260
//   -> 1400b93a0 FUN_1400b93a0
//   -> 1400b9510 FUN_1400b9510
//   -> 140dfb5b4 free
//   -> 1400bae40 FUN_1400bae40


longlong FUN_140d36cb0(longlong param_1,int *param_2,ushort *param_3,undefined8 param_4)

{
  ushort uVar1;
  int *piVar2;
  void *pvVar3;
  longlong lVar4;
  
  *param_2 = DAT_141d79b88;
  *param_3 = DAT_141d79b8c;
  DAT_141d79b8c = DAT_141d79b8c + 1;
  if (499 < (short)DAT_141d79b8c) {
    DAT_141d79b88 = DAT_14155b29c;
    DAT_14155b29c = DAT_14155b29c + 1;
    DAT_141d79b8c = 0;
  }
  piVar2 = (int *)FUN_1400ba750(param_1 + 0x13c08,*param_2,param_3,param_4,0xfffffffffffffffe);
  if (piVar2 == (int *)0x0) {
    pvVar3 = operator_new(0xfa8);
    piVar2 = (int *)FUN_1400ba260(pvVar3);
    *piVar2 = *param_2;
  }
  pvVar3 = operator_new(0xe0);
  lVar4 = FUN_1400b93a0(pvVar3);
  *(int *)(lVar4 + 0xd8) = *param_2;
  *(ushort *)(lVar4 + 0xdc) = *param_3;
  uVar1 = *param_3;
  if (uVar1 < 500) {
    pvVar3 = *(void **)(piVar2 + (longlong)(short)uVar1 * 2 + 2);
    if (pvVar3 != (void *)0x0) {
      FUN_1400b9510(pvVar3);
      free(pvVar3);
      (piVar2 + (longlong)(short)uVar1 * 2 + 2)[0] = 0;
      (piVar2 + (longlong)(short)uVar1 * 2 + 2)[1] = 0;
    }
  }
  uVar1 = *param_3;
  if (uVar1 < 500) {
    FUN_1400bae40(piVar2,uVar1);
    *(longlong *)(piVar2 + (longlong)(short)uVar1 * 2 + 2) = lVar4;
  }
  return lVar4;
}

