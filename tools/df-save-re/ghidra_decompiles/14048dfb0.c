// FUN_14048dfb0 @ 14048dfb0
// callees:
//   -> 1400b3140 FUN_1400b3140
//   -> 14000bc60 FUN_14000bc60
//   -> 1400508e0 FUN_1400508e0


void FUN_14048dfb0(longlong param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char local_res8 [8];
  int local_res18 [4];
  
  local_res18[0] = param_3;
  iVar2 = FUN_1400b3140(param_2,param_1,local_res8);
  lVar3 = (longlong)iVar2;
  if (iVar2 != -1) {
    if (local_res8[0] == '\0') {
      plVar1 = (longlong *)(param_1 + 0x18);
      if ((int)(*(longlong *)(param_1 + 0x20) - *plVar1 >> 2) <= iVar2) {
        FUN_14000bc60(plVar1,local_res18);
        return;
      }
      FUN_1400508e0(plVar1,local_res8,*plVar1 + lVar3 * 4,param_4,local_res18);
    }
    else if (*(int *)(*(longlong *)(param_1 + 0x18) + lVar3 * 4) < param_3) {
      *(int *)(*(longlong *)(param_1 + 0x18) + lVar3 * 4) = param_3;
      return;
    }
  }
  return;
}

