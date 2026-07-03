// FUN_14018f3f0 @ 14018f3f0
// callees:
//   -> 14000c390 FUN_14000c390


void FUN_14018f3f0(longlong param_1,int param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int local_res10 [6];
  
  if (param_2 != -1) {
    iVar4 = 0;
    puVar1 = (ulonglong *)(param_1 + 0x1a0);
    if ((longlong)(*(longlong *)(param_1 + 0x1a8) - *puVar1) >> 2 != 0) {
      piVar3 = (int *)*puVar1;
      do {
        if (*piVar3 == param_2) {
          return;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
      } while ((ulonglong)(longlong)iVar4 <
               (ulonglong)((longlong)(*(longlong *)(param_1 + 0x1a8) - *puVar1) >> 2));
    }
    piVar3 = *(int **)(param_1 + 0x1a8);
    local_res10[0] = param_2;
    if ((local_res10 < piVar3) && (piVar2 = (int *)*puVar1, piVar2 <= local_res10)) {
      if (piVar3 == *(int **)(param_1 + 0x1b0)) {
        FUN_14000c390(puVar1,1);
      }
      if (*(undefined4 **)(param_1 + 0x1a8) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x1a8) =
             *(undefined4 *)(*puVar1 + ((longlong)local_res10 - (longlong)piVar2 >> 2) * 4);
        *(longlong *)(param_1 + 0x1a8) = *(longlong *)(param_1 + 0x1a8) + 4;
        return;
      }
    }
    else {
      if (piVar3 == *(int **)(param_1 + 0x1b0)) {
        FUN_14000c390(puVar1,1);
      }
      if (*(int **)(param_1 + 0x1a8) != (int *)0x0) {
        **(int **)(param_1 + 0x1a8) = param_2;
      }
    }
    *(longlong *)(param_1 + 0x1a8) = *(longlong *)(param_1 + 0x1a8) + 4;
  }
  return;
}

