// FUN_14047c200 @ 14047c200
// callees:
//   -> 14047cf90 FUN_14047cf90
//   -> 140dfb5c4 operator_new
//   -> EXTERNAL:000000f1 _invalid_parameter_noinfo_noreturn


void FUN_14047c200(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  if (*(ulonglong *)(param_1 + 0x10) <= *(longlong *)(param_1 + 0x20) + 1U) {
    FUN_14047cf90();
  }
  *(ulonglong *)(param_1 + 0x18) =
       *(ulonglong *)(param_1 + 0x18) & *(longlong *)(param_1 + 0x10) - 1U;
  lVar1 = (*(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) &
          *(longlong *)(param_1 + 0x10) - 1U) * 8;
  if (*(longlong *)(lVar1 + *(longlong *)(param_1 + 8)) == 0) {
    pvVar3 = operator_new(0xc);
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    *(void **)(lVar1 + *(longlong *)(param_1 + 8)) = pvVar3;
  }
  puVar2 = *(undefined8 **)(lVar1 + *(longlong *)(param_1 + 8));
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = *param_2;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 1);
  }
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  return;
}

