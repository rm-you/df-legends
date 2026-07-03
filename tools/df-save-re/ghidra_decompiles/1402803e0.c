// FUN_1402803e0 @ 1402803e0
// callees:
//   -> 140051e20 FUN_140051e20
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 14000c8b0 FUN_14000c8b0


void FUN_1402803e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  
  FUN_140051e20();
  FUN_14000b9d0(param_1,param_2[1] - *param_2 >> 3);
  iVar3 = (int)(param_2[1] - *param_2 >> 3) + -1;
  lVar5 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      puVar4 = operator_new(0x20);
      *(undefined8 *)(puVar4 + 0x18) = 0xf;
      *(undefined8 *)(puVar4 + 0x10) = 0;
      *puVar4 = 0;
      *(undefined1 **)(*param_1 + lVar5 * 8) = puVar4;
      lVar1 = *(longlong *)(*param_2 + lVar5 * 8);
      lVar2 = *(longlong *)(*param_1 + lVar5 * 8);
      if (lVar2 != lVar1) {
        FUN_14000c8b0(lVar2,lVar1,0,0xffffffffffffffff);
      }
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  return;
}

