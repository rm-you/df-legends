// FUN_14007dd20 @ 14007dd20
// callees:
//   -> 1400b3140 FUN_1400b3140
//   -> 14000bc60 FUN_14000bc60
//   -> 1400508e0 FUN_1400508e0


void FUN_14007dd20(longlong param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char local_res8 [8];
  int local_res18 [4];
  
  local_res18[0] = param_3;
  iVar3 = FUN_1400b3140(param_2,param_1,local_res8);
  if (iVar3 != -1) {
    if (local_res8[0] != '\0') {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 4);
      *piVar2 = *piVar2 + param_3;
      return;
    }
    plVar1 = (longlong *)(param_1 + 0x18);
    if ((int)(*(longlong *)(param_1 + 0x20) - *plVar1 >> 2) <= iVar3) {
      FUN_14000bc60(plVar1,local_res18);
      return;
    }
    FUN_1400508e0(plVar1,local_res8,*plVar1 + (longlong)iVar3 * 4,param_4,local_res18);
  }
  return;
}

