// FUN_140002380 @ 140002380
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new


void FUN_140002380(longlong *param_1,undefined8 param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  int local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,local_res18,4);
  pvVar1 = (void *)*param_1;
  if (local_res18[0] < 1) {
    if (pvVar1 != (void *)0x0) {
      free(pvVar1);
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 0;
    }
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if ((int)param_1[1] != local_res18[0]) {
      free(pvVar1);
      pvVar1 = operator_new((longlong)local_res18[0]);
      *param_1 = (longlong)pvVar1;
    }
    if (*param_1 != 0) goto LAB_1400023ed;
  }
  pvVar1 = operator_new((longlong)local_res18[0]);
  *param_1 = (longlong)pvVar1;
LAB_1400023ed:
  iVar2 = 0;
  if (0 < local_res18[0]) {
    do {
      FUN_1405bba90(param_2,(longlong)iVar2 + *param_1,1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_res18[0]);
  }
  *(int *)(param_1 + 1) = local_res18[0];
  return;
}

