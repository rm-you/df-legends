// FUN_1402cbbd0 @ 1402cbbd0
// callees:
//   -> 140dfb9a8 `eh_vector_constructor_iterator'
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new


void * FUN_1402cbbd0(void *param_1)

{
  undefined4 *puVar1;
  
  _eh_vector_constructor_iterator_(param_1,0x20,4,FUN_14000c2b0,FUN_14000c260);
  *(undefined4 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined2 *)((longlong)param_1 + 0x80) = 0xffff;
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    free(*(void **)((longlong)param_1 + 0x88));
  }
  puVar1 = operator_new(6);
  *(undefined4 **)((longlong)param_1 + 0x88) = puVar1;
  *puVar1 = 0;
  *(undefined2 *)(puVar1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x90) = 6;
  *(undefined4 *)((longlong)param_1 + 0x98) = 1000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 1;
  return param_1;
}

