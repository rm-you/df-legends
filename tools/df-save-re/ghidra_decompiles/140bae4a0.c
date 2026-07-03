// FUN_140bae4a0 @ 140bae4a0
// callees:
//   -> 140dfb9a8 `eh_vector_constructor_iterator'
//   -> 140dfc99c memset


undefined8 * FUN_140bae4a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  _eh_vector_constructor_iterator_(param_1 + 0x14e7,0xa8,0x121,FUN_140a5d8c0,FUN_140a5d980);
  _eh_vector_constructor_iterator_(param_1 + 0x2c9c,0x40,0x121,FUN_140bac620,FUN_140a5d490);
  param_1[0x4516] = 0;
  param_1[0x4517] = 0;
  param_1[0x4518] = 0;
  lVar3 = 500;
  puVar2 = (undefined4 *)((longlong)param_1 + 0x228d4);
  puVar1 = param_1 + 0x451d;
  do {
    *(undefined4 *)((longlong)puVar1 + -0xc) = 0xffffffff;
    *(undefined4 *)(puVar1 + -1) = 0xffffffff;
    *(undefined4 *)puVar1 = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + -4) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 4) = 0xffffffff;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    *(undefined4 *)(puVar1 + -2) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x24) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 0xffffffff;
    *(undefined2 *)((longlong)puVar1 + 0x26) = 0xffff;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xdc) = 0;
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 0x3d;
    puVar1 = (undefined8 *)((longlong)puVar1 + 0xf4);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[0x82e8] = 0;
  param_1[0x82e9] = 0;
  param_1[0x82ea] = 0;
  *(undefined4 *)(param_1 + 0x82e7) = 0;
  *(undefined4 *)(param_1 + 0x81ef) = 0;
  *(undefined4 *)(param_1 + 0x8204) = 0;
  *(undefined4 *)(param_1 + 0x822e) = 0;
  *(undefined4 *)(param_1 + 0x8243) = 0;
  *(undefined4 *)(param_1 + 0x8258) = 0;
  *(undefined4 *)(param_1 + 0x826d) = 0;
  *(undefined4 *)(param_1 + 0x8282) = 0;
  *(undefined4 *)(param_1 + 0x8219) = 0;
  *(undefined4 *)((longlong)param_1 + 0x228cc) = 0xfff0bdc0;
  *(undefined4 *)(param_1 + 0x451a) = 0xfff0bdc0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  memset((void *)((longlong)param_1 + 0x24),0,0xa714);
  memset(param_1 + 0x35a4,0,0x28a4);
  memset((void *)((longlong)param_1 + 0x1d5c4),0,0xa29);
  memset((void *)((longlong)param_1 + 0x1dfee),0,0x1452);
  memset(param_1 + 0x3e88,0,0xa29);
  lVar3 = 0xa9;
  puVar1 = (undefined8 *)((longlong)param_1 + 0x1fe6c);
  do {
    *puVar1 = 0xffffffffffffffff;
    puVar1[1] = 0xffffffffffffffff;
    puVar1[2] = 0xffffffffffffffff;
    puVar1[3] = 0xffffffffffffffff;
    puVar1[4] = 0xffffffffffffffff;
    puVar1[5] = 0xffffffffffffffff;
    puVar1[6] = 0xffffffffffffffff;
    puVar1[7] = 0xffffffffffffffff;
    lVar3 = lVar3 + -1;
    puVar1 = puVar1 + 8;
  } while (lVar3 != 0);
  *(undefined4 *)(param_1 + 0x4519) = 1;
  *(undefined8 *)((longlong)param_1 + 0x40564) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4056c) = 0;
  *(undefined4 *)(param_1 + 0x81da) = 0;
  return param_1;
}

