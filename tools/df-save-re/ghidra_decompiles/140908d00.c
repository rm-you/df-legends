// FUN_140908d00 @ 140908d00
// callees:
//   -> 14080a980 FUN_14080a980
//   -> 1407f0860 FUN_1407f0860
//   -> 1408246e0 FUN_1408246e0
//   -> 140908d00 FUN_140908d00


void FUN_140908d00(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  
  FUN_14080a980(param_2);
  FUN_1407f0860(param_2,4);
  (**(code **)(*param_2 + 800))(param_2);
  *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) & 0xfdb7f1dc;
  *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) & 0xfffffff7;
  if (((*(uint *)(param_2 + 2) & 0x40000) != 0) && (lVar2 = FUN_1408246e0(param_2,1), lVar2 != 0)) {
    *(undefined4 *)(lVar2 + 0xbc) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xe0);
    *(undefined8 *)(lVar2 + 0xa8) = 0xffffffffffffffff;
    *(undefined8 *)(lVar2 + 0xb0) = 0xffffffffffffffff;
    *(undefined4 *)(lVar2 + 0xb8) = 0xffffffff;
    if (0 < *(int *)(lVar2 + 0x88)) {
      **(byte **)(lVar2 + 0x80) = **(byte **)(lVar2 + 0x80) & 0xfd;
    }
    *(undefined4 *)(lVar2 + 0x98) = 0xfff0bdc0;
    *(undefined4 *)(lVar2 + 0x9c) = 0xfff0bdc0;
    *(undefined8 *)(lVar2 + 0xa0) = 0xfffffffffff0bdc0;
  }
  if (((*(byte *)(param_2 + 2) & 0x40) != 0) &&
     (sVar4 = (short)((longlong)(ulonglong)(uint)((int)param_2[8] - (int)param_2[7]) >> 3) + -1,
     -1 < sVar4)) {
    lVar2 = (longlong)sVar4 << 3;
    do {
      iVar1 = (**(code **)(**(longlong **)(lVar2 + param_2[7]) + 0x10))();
      if ((iVar1 == 10) &&
         (lVar3 = (**(code **)(**(longlong **)(lVar2 + param_2[7]) + 0x18))(), lVar3 != 0)) {
        FUN_140908d00(param_1,lVar3);
      }
      lVar2 = lVar2 + -8;
      sVar4 = sVar4 + -1;
    } while (-1 < sVar4);
  }
  return;
}

