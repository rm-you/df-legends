// FUN_140002660 @ 140002660
// callees:


void FUN_140002660(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar1 = (undefined2 *)((longlong)param_1 + 0x5c);
  puVar2 = param_1 + 8;
  lVar3 = 7;
  do {
    *(undefined4 *)puVar2 = 0xffffffff;
    puVar2 = (undefined8 *)((longlong)puVar2 + 4);
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  param_1[2] = 0;
  puVar2 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  *(undefined1 *)puVar2 = 0;
  param_1[6] = 0;
  if ((ulonglong)param_1[7] < 0x10) {
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined1 *)((longlong)param_1 + 0x72) = 0;
    return;
  }
  *(undefined1 *)param_1[4] = 0;
  *(undefined1 *)((longlong)param_1 + 0x72) = 0;
  return;
}

