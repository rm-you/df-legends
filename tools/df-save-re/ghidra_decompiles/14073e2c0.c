// FUN_14073e2c0 @ 14073e2c0
// callees:
//   -> 14073f6d0 FUN_14073f6d0


void FUN_14073e2c0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  short sVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0xe8);
  plVar1 = *(longlong **)(param_1 + 0xf0);
  while( true ) {
    if (plVar1 <= plVar4) {
      FUN_14073f6d0(param_1,0,param_3,100,0);
      return;
    }
    puVar2 = (undefined8 *)*plVar4;
    sVar3 = (**(code **)*puVar2)(puVar2);
    if ((sVar3 == 0) && (*(int *)(puVar2 + 1) == param_3)) break;
    plVar4 = plVar4 + 1;
  }
  sVar3 = *(short *)((longlong)puVar2 + 0xc);
  if (sVar3 + 100 < 0x65) {
    *(short *)((longlong)puVar2 + 0xc) = sVar3 + 100;
  }
  else if (sVar3 < 100) {
    *(undefined2 *)((longlong)puVar2 + 0xc) = 100;
  }
  if (*(short *)((longlong)puVar2 + 0xc) < 0x65) {
    return;
  }
  *(undefined2 *)((longlong)puVar2 + 0xc) = 100;
  return;
}

