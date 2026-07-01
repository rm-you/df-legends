// FUN_140301fe0 @ 140301fe0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002250 FUN_140002250


void FUN_140301fe0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  uVar4 = 0;
  uVar3 = (*(longlong *)(param_1 + 0x20) - (longlong)plVar2) + 7U >> 3;
  if (*(longlong **)(param_1 + 0x20) < plVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      lVar1 = *plVar2;
      FUN_1405bba90(param_2,lVar1,4);
      FUN_1405bba90(param_2,lVar1 + 4,4);
      FUN_1405bba90(param_2,lVar1 + 8,4);
      FUN_1405bba90(param_2,lVar1 + 0xc,4);
      FUN_140002250(param_2,lVar1 + 0x10);
      uVar4 = uVar4 + 1;
      plVar2 = plVar2 + 1;
    } while (uVar4 < uVar3);
  }
  return;
}

