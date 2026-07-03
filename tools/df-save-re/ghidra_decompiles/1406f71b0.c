// FUN_1406f71b0 @ 1406f71b0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14000c2d0 FUN_14000c2d0


int * FUN_1406f71b0(longlong param_1,int param_2,int param_3,int param_4)

{
  ulonglong *puVar1;
  int **ppiVar2;
  int **ppiVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *local_res8;
  
  puVar1 = (ulonglong *)(param_1 + 0x138);
  puVar4 = (undefined8 *)*puVar1;
  while( true ) {
    if (*(undefined8 **)(param_1 + 0x140) <= puVar4) {
      piVar5 = operator_new(0x10);
      piVar5[1] = -1;
      piVar5[2] = 0;
      piVar5[3] = 1;
      *piVar5 = param_2;
      piVar5[1] = param_3;
      piVar5[3] = param_4;
      ppiVar2 = *(int ***)(param_1 + 0x140);
      local_res8 = piVar5;
      if ((&local_res8 < ppiVar2) && (ppiVar3 = (int **)*puVar1, ppiVar3 <= &local_res8)) {
        if (ppiVar2 == *(int ***)(param_1 + 0x148)) {
          FUN_14000c2d0(puVar1,1);
        }
        if (*(undefined8 **)(param_1 + 0x140) != (undefined8 *)0x0) {
          **(undefined8 **)(param_1 + 0x140) =
               *(undefined8 *)(*puVar1 + ((longlong)&local_res8 - (longlong)ppiVar3 >> 3) * 8);
        }
      }
      else {
        if (ppiVar2 == *(int ***)(param_1 + 0x148)) {
          FUN_14000c2d0(puVar1,1);
        }
        if (*(undefined8 **)(param_1 + 0x140) != (undefined8 *)0x0) {
          **(undefined8 **)(param_1 + 0x140) = piVar5;
        }
      }
      *(longlong *)(param_1 + 0x140) = *(longlong *)(param_1 + 0x140) + 8;
      return piVar5;
    }
    piVar5 = (int *)*puVar4;
    if ((*piVar5 == param_2) && (piVar5[1] == param_3)) break;
    puVar4 = puVar4 + 1;
  }
  if (piVar5[3] < param_4) {
    piVar5[3] = param_4;
  }
  return piVar5;
}

