// FUN_140367040 @ 140367040
// callees:
//   -> 140dfb9a8 `eh_vector_constructor_iterator'


void * FUN_140367040(void *param_1)

{
  _eh_vector_constructor_iterator_(param_1,0x18,7,FUN_1400025a0,FUN_1400030c0);
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0xf;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0xffffffff;
  return param_1;
}

