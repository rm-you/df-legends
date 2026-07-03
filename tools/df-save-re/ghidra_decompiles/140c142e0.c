// FUN_140c142e0 @ 140c142e0
// callees:
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140050640 FUN_140050640


void FUN_140c142e0(short *param_1,ulonglong *param_2)

{
  short sVar1;
  short **ppsVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  short **ppsVar7;
  short sVar8;
  ulonglong uVar9;
  short sVar10;
  longlong lVar11;
  short *local_res8;
  undefined1 local_res10 [8];
  
  ppsVar2 = (short **)param_2[1];
  ppsVar7 = (short **)*param_2;
  lVar11 = (longlong)ppsVar2 - (longlong)ppsVar7 >> 3;
  sVar10 = (short)lVar11;
  local_res8 = param_1;
  if (sVar10 == 0) {
    if ((&local_res8 < ppsVar2) && (ppsVar7 <= &local_res8)) {
      if (ppsVar2 == (short **)param_2[2]) {
        FUN_14000c2d0(param_2,1);
      }
      if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_2[1] =
             *(undefined8 *)
              (*param_2 + ((longlong)(local_res10 + (-8 - (longlong)ppsVar7)) >> 3) * 8);
      }
      param_2[1] = param_2[1] + 8;
      return;
    }
    if (ppsVar2 == (short **)param_2[2]) {
      FUN_14000c2d0(param_2,1);
    }
    if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_2[1] = param_1;
    }
    param_2[1] = param_2[1] + 8;
    return;
  }
  sVar1 = *param_1;
  if (*ppsVar7[sVar10 + -1] < sVar1) {
    if ((&local_res8 < ppsVar2) && (ppsVar7 <= &local_res8)) {
      if (ppsVar2 == (short **)param_2[2]) {
        FUN_14000c2d0(param_2,1);
      }
      if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_2[1] =
             *(undefined8 *)
              (*param_2 + ((longlong)(local_res10 + (-8 - (longlong)ppsVar7)) >> 3) * 8);
      }
      param_2[1] = param_2[1] + 8;
      return;
    }
    if (ppsVar2 == (short **)param_2[2]) {
      FUN_14000c2d0(param_2,1);
    }
    if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_2[1] = param_1;
    }
    param_2[1] = param_2[1] + 8;
    return;
  }
  uVar9 = 0;
  iVar4 = (int)lVar11 + -1;
  if ((short)iVar4 < 0) {
LAB_140c14501:
    sVar3 = (short)uVar9;
    if (sVar1 <= *ppsVar7[sVar3]) {
      if (*ppsVar7[sVar3] <= sVar1) {
        return;
      }
      ppsVar7 = ppsVar7 + sVar3;
      goto LAB_140c14525;
    }
    iVar4 = (int)sVar3;
  }
  else {
    do {
      sVar8 = (short)uVar9;
      iVar6 = (int)(short)iVar4 + (int)sVar8 >> 1;
      sVar5 = (short)iVar6;
      sVar3 = *ppsVar7[sVar5];
      if (sVar3 == sVar1) {
        return;
      }
      if (sVar8 == (short)iVar4) {
        sVar3 = *ppsVar7[sVar5];
        if (sVar3 < sVar1) {
          iVar4 = (int)sVar8;
          goto LAB_140c144cf;
        }
        if (sVar3 <= sVar1) {
          return;
        }
        ppsVar7 = ppsVar7 + sVar8;
        goto LAB_140c14525;
      }
      if (sVar1 < sVar3) {
        iVar4 = iVar6 + -1;
      }
      else {
        uVar9 = (ulonglong)(ushort)(sVar5 + 1);
      }
      sVar3 = (short)iVar4;
    } while ((short)uVar9 <= sVar3);
    if (sVar3 < 0) goto LAB_140c14501;
    if (sVar10 <= sVar3) {
      return;
    }
    lVar11 = (longlong)sVar3;
    uVar9 = lVar11 * 8;
    if (sVar1 <= *ppsVar7[lVar11]) {
      if (*ppsVar7[lVar11] <= sVar1) {
        return;
      }
      ppsVar7 = ppsVar7 + lVar11;
      goto LAB_140c14525;
    }
    iVar4 = (int)sVar3;
  }
LAB_140c144cf:
  if ((int)sVar10 <= iVar4 + 1) {
    return;
  }
  ppsVar7 = ppsVar7 + (iVar4 + 1);
LAB_140c14525:
  FUN_140050640(param_2,local_res10,ppsVar7,uVar9,&local_res8);
  return;
}

