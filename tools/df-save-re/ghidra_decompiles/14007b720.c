// FUN_14007b720 @ 14007b720
// callees:
//   -> 14000be20 FUN_14000be20
//   -> 14000c460 FUN_14000c460
//   -> 14007b9f0 FUN_14007b9f0


ulonglong FUN_14007b720(short param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  short *psVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  ulonglong uVar9;
  short local_res8 [4];
  undefined1 local_res10 [8];
  
  psVar2 = (short *)param_2[1];
  psVar7 = (short *)*param_2;
  uVar9 = (longlong)psVar2 - (longlong)psVar7 >> 1;
  iVar8 = (int)uVar9;
  local_res8[0] = param_1;
  if (iVar8 == 0) {
    FUN_14000be20(param_2,local_res8);
    return 0;
  }
  uVar5 = iVar8 - 1;
  if (psVar7[(int)uVar5] < param_1) {
    if ((local_res8 < psVar2) && (psVar7 <= local_res8)) {
      if (psVar2 == (short *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] =
             *(undefined2 *)(*param_2 + ((longlong)local_res8 - (longlong)psVar7 >> 1) * 2);
        param_2[1] = param_2[1] + 2;
        return uVar9 & 0xffffffff;
      }
    }
    else {
      if (psVar2 == (short *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((short *)param_2[1] != (short *)0x0) {
        *(short *)param_2[1] = param_1;
      }
    }
    param_2[1] = param_2[1] + 2;
    return uVar9 & 0xffffffff;
  }
  uVar6 = 0;
  if (-1 < (int)uVar5) {
    do {
      iVar4 = (int)(uVar5 + uVar6) >> 1;
      sVar1 = psVar7[iVar4];
      if (sVar1 == param_1) {
        return 0xffffffff;
      }
      if (uVar6 == uVar5) {
        if (sVar1 < param_1) goto LAB_14007b8bc;
        if (sVar1 <= param_1) {
          return 0xffffffff;
        }
        psVar7 = psVar7 + (int)uVar6;
        goto LAB_14007b8d2;
      }
      if (param_1 < sVar1) {
        uVar5 = iVar4 - 1;
      }
      else {
        uVar6 = iVar4 + 1;
      }
    } while ((int)uVar6 <= (int)uVar5);
    if (-1 < (int)uVar5) {
      if (iVar8 <= (int)uVar5) {
        return 0xffffffff;
      }
      lVar3 = (longlong)(int)uVar5;
      if (psVar7[lVar3] < param_1) {
        uVar5 = uVar5 + 1;
        if (iVar8 <= (int)uVar5) {
          return 0xffffffff;
        }
        lVar3 = (longlong)(int)uVar5;
      }
      else if (psVar7[lVar3] <= param_1) {
        return 0xffffffff;
      }
      FUN_14007b9f0(param_2,local_res10,psVar7 + lVar3,param_4,local_res8);
      return (ulonglong)uVar5;
    }
  }
  if (psVar7[(int)uVar6] < param_1) {
LAB_14007b8bc:
    uVar6 = uVar6 + 1;
    if ((int)uVar6 < iVar8) {
      psVar7 = psVar7 + (int)uVar6;
LAB_14007b8d2:
      FUN_14007b9f0(param_2,local_res10,psVar7,param_4,local_res8);
      return (ulonglong)uVar6;
    }
  }
  else if (param_1 < psVar7[(int)uVar6]) {
    psVar7 = psVar7 + (int)uVar6;
    goto LAB_14007b8d2;
  }
  return 0xffffffff;
}

