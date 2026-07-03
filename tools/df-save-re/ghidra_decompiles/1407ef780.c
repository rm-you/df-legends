// FUN_1407ef780 @ 1407ef780
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140dfb5c4 operator_new
//   -> 1407ef330 FUN_1407ef330
//   -> EXTERNAL:000000e1 memmove
//   -> 140dfb5b4 free
//   -> 140dfc99c memset
//   -> 140050150 FUN_140050150


void FUN_1407ef780(undefined4 *param_1,undefined4 *param_2)

{
  void *_Dst;
  void *pvVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  if (param_1 + 6 != param_2 + 6) {
    FUN_14000c8b0(param_1 + 6,param_2 + 6,0,0xffffffffffffffff);
  }
  if (param_1 + 0xe != param_2 + 0xe) {
    FUN_14000c8b0(param_1 + 0xe,param_2 + 0xe,0,0xffffffffffffffff);
  }
  if (param_1 + 0x16 != param_2 + 0x16) {
    FUN_14000c8b0(param_1 + 0x16,param_2 + 0x16,0,0xffffffffffffffff);
  }
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  *(undefined1 *)((longlong)param_1 + 0x79) = *(undefined1 *)((longlong)param_2 + 0x79);
  *(undefined1 *)((longlong)param_1 + 0x7a) = *(undefined1 *)((longlong)param_2 + 0x7a);
  *(undefined1 *)((longlong)param_1 + 0x7b) = *(undefined1 *)((longlong)param_2 + 0x7b);
  *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined1 *)((longlong)param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x7d);
  *(undefined1 *)((longlong)param_1 + 0x7e) = *(undefined1 *)((longlong)param_2 + 0x7e);
  *(undefined1 *)((longlong)param_1 + 0x7f) = *(undefined1 *)((longlong)param_2 + 0x7f);
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  if (*(longlong *)(param_2 + 0x24) == 0) {
    if (*(void **)(param_1 + 0x24) != (void *)0x0) {
      free(*(void **)(param_1 + 0x24));
      *(undefined8 *)(param_1 + 0x24) = 0;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x24) == 0) {
      pvVar1 = operator_new(0x98);
      uVar2 = FUN_1407ef330(pvVar1);
      *(undefined8 *)(param_1 + 0x24) = uVar2;
    }
    pvVar1 = *(void **)(param_2 + 0x24);
    _Dst = *(void **)(param_1 + 0x24);
    memmove(_Dst,pvVar1,0x18);
    memmove((void *)((longlong)_Dst + 0x18),(void *)((longlong)pvVar1 + 0x18),0x18);
    memmove((void *)((longlong)_Dst + 0x30),(void *)((longlong)pvVar1 + 0x30),0x18);
    memmove((void *)((longlong)_Dst + 100),(void *)((longlong)pvVar1 + 100),0x18);
  }
  if (*(longlong *)(param_2 + 0x26) == 0) {
    if (*(void **)(param_1 + 0x26) != (void *)0x0) {
      free(*(void **)(param_1 + 0x26));
      *(undefined8 *)(param_1 + 0x26) = 0;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x26) == 0) {
      pvVar1 = operator_new(100);
      memset(pvVar1,0,100);
      *(void **)(param_1 + 0x26) = pvVar1;
    }
    memmove(*(void **)(param_1 + 0x26),*(void **)(param_2 + 0x26),100);
  }
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  FUN_140050150(param_1 + 0x2a,param_2 + 0x2a);
  FUN_140050150(param_1 + 0x30,param_2 + 0x30);
  param_1[0x36] = param_2[0x36];
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = param_2[0x39];
  FUN_140050150(param_1 + 0x3a,param_2 + 0x3a);
  FUN_140050150(param_1 + 0x40,param_2 + 0x40);
  return;
}

