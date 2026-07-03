// FUN_1405b4d80 @ 1405b4d80
// callees:
//   -> 14004ffe0 FUN_14004ffe0
//   -> 140050640 FUN_140050640


void FUN_1405b4d80(longlong param_1,short *param_2,int param_3,int param_4)

{
  longlong *plVar1;
  ushort uVar2;
  short *psVar3;
  longlong lVar4;
  int iVar5;
  short *psVar6;
  short *local_res10;
  undefined1 local_18 [16];
  
  local_res10 = param_2;
  if (param_3 <= param_4) {
    plVar1 = (longlong *)(param_1 + 0x120);
    do {
      iVar5 = param_3 + param_4 >> 1;
      if (param_3 == param_4) {
        psVar6 = *(short **)(*plVar1 + (longlong)iVar5 * 8);
        if ((*param_2 < *psVar6) ||
           ((*psVar6 == *param_2 &&
            ((param_2[1] < psVar6[1] || ((psVar6[1] == param_2[1] && (param_2[2] < psVar6[2]))))))))
        {
          lVar4 = *plVar1 + (longlong)param_3 * 8;
        }
        else {
          if ((ulonglong)(*(longlong *)(param_1 + 0x128) - *plVar1 >> 3) <=
              (ulonglong)(longlong)(param_3 + 1)) goto LAB_1405b4ec9;
          lVar4 = *plVar1 + (longlong)(param_3 + 1) * 8;
        }
        FUN_140050640(plVar1,local_18,lVar4,psVar6,&local_res10);
        return;
      }
      psVar6 = *(short **)(*plVar1 + (longlong)iVar5 * 8);
      if ((*param_2 < *psVar6) ||
         ((*psVar6 == *param_2 &&
          ((param_2[1] < psVar6[1] || ((psVar6[1] == param_2[1] && (param_2[2] < psVar6[2])))))))) {
        param_4 = iVar5 + -1;
      }
      else {
        param_3 = iVar5 + 1;
      }
    } while (param_3 <= param_4);
  }
  plVar1 = (longlong *)(param_1 + 0x120);
  if (param_4 < 0) {
    lVar4 = (longlong)param_3 * 8;
    psVar6 = *(short **)(lVar4 + *plVar1);
    if ((*psVar6 < *param_2) ||
       ((*param_2 == *psVar6 &&
        ((psVar6[1] < param_2[1] || ((param_2[1] == psVar6[1] && (psVar6[2] < param_2[2])))))))) {
      if ((int)(*(longlong *)(param_1 + 0x128) - *plVar1 >> 3) <= param_3 + 1) goto LAB_1405b4ec9;
      lVar4 = *plVar1 + (longlong)(param_3 + 1) * 8;
    }
    else {
LAB_1405b4f62:
      lVar4 = *plVar1 + lVar4;
    }
LAB_1405b4f68:
    FUN_140050640(plVar1,local_18,lVar4,psVar6,&local_res10);
  }
  else {
    if (param_4 < (int)(*(longlong *)(param_1 + 0x128) - *plVar1 >> 3)) {
      lVar4 = (longlong)param_4 * 8;
      psVar3 = *(short **)(lVar4 + *plVar1);
      uVar2 = psVar3[1];
      psVar6 = (short *)(ulonglong)uVar2;
      if ((*param_2 <= *psVar3) &&
         ((*param_2 != *psVar3 ||
          ((param_2[1] <= (short)uVar2 && ((param_2[1] != uVar2 || (param_2[2] <= psVar3[2]))))))))
      goto LAB_1405b4f62;
      if (param_4 + 1 < (int)(*(longlong *)(param_1 + 0x128) - *plVar1 >> 3)) {
        lVar4 = *plVar1 + (longlong)(param_4 + 1) * 8;
        goto LAB_1405b4f68;
      }
    }
LAB_1405b4ec9:
    FUN_14004ffe0(param_1 + 0x120,&local_res10);
  }
  return;
}

