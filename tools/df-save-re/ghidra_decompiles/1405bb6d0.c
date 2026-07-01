// FUN_1405bb6d0 @ 1405bb6d0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb6d8 operator_new
//   -> 140dfb5b4 free
//   -> 14000c780 FUN_14000c780


undefined1 FUN_1405bb6d0(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  char *_Memory;
  longlong lVar4;
  short local_res10 [4];
  
  lVar4 = 0;
  param_2[2] = 0;
  puVar3 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar3 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar3 = 0;
  cVar1 = FUN_1405bba90(param_1,local_res10,2);
  if (cVar1 != '\0') {
    if (local_res10[0] != 0) {
      _Memory = operator_new((longlong)(local_res10[0] + 1));
      cVar1 = FUN_1405bba90(param_1,_Memory,(longlong)local_res10[0]);
      if (cVar1 == '\0') {
        free(_Memory);
        uVar2 = 0;
      }
      else {
        _Memory[local_res10[0]] = '\0';
        if (*_Memory != '\0') {
          lVar4 = -1;
          do {
            lVar4 = lVar4 + 1;
          } while (_Memory[lVar4] != '\0');
        }
        FUN_14000c780(param_2,_Memory,lVar4);
        free(_Memory);
        uVar2 = 1;
      }
      return uVar2;
    }
    return 1;
  }
  return 0;
}

