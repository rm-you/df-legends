// FUN_1407c6ea0 @ 1407c6ea0
// callees:
//   -> 140764cb0 FUN_140764cb0
//   -> 140914d80 FUN_140914d80
//   -> 1401cc2e0 FUN_1401cc2e0
//   -> 140050d90 FUN_140050d90
//   -> 140dfb5c4 operator_new
//   -> 140050070 FUN_140050070


void FUN_1407c6ea0(undefined4 *param_1,short *param_2,longlong param_3,longlong param_4)

{
  byte *pbVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined4 *local_res8;
  
  if (param_2 == (short *)0x0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  lVar3 = *(longlong *)(param_4 + 0x10);
  local_res8 = param_1;
  if (*param_2 == 7) {
LAB_1407c6f43:
    uVar7 = 1;
  }
  else {
    if (lVar3 != 0) {
      FUN_140764cb0(lVar3);
      uVar7 = *(undefined8 *)(*(longlong *)(lVar3 + 0x130) + 0x18);
      iVar4 = FUN_140914d80(uVar7,6);
      if (((-0xb < iVar4) && (iVar5 = FUN_140914d80(uVar7,4), 10 < iVar5)) || (0x19 < iVar4)) {
        FUN_1401cc2e0(lVar3,1,0);
        goto LAB_1407c6f43;
      }
    }
    if (*(char *)(param_3 + 0x341) == '\0') goto LAB_1407c6f6d;
    uVar7 = 0;
  }
  FUN_1401cc2e0(lVar3,uVar7,0);
  FUN_140050d90(param_4,&DAT_141c670f0);
  if (1 < *(int *)(param_4 + 0x60)) {
    pbVar1 = (byte *)(*(longlong *)(param_4 + 0x58) + 1);
    *pbVar1 = *pbVar1 | 0x20;
  }
LAB_1407c6f6d:
  if (*(char *)(param_3 + 0x341) != '\0') {
    lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x130) + 0x60);
    for (plVar6 = *(longlong **)(*(longlong *)(lVar3 + 0x80) + 0x60);
        plVar6 < *(longlong **)(*(longlong *)(lVar3 + 0x80) + 0x68); plVar6 = plVar6 + 1) {
      if ((*(int *)(*plVar6 + 4) == 0xc) && (*(int *)(*plVar6 + 8) == *(int *)(param_2 + 2))) {
        return;
      }
    }
    local_res8 = operator_new(0x58);
    *(undefined8 *)(local_res8 + 4) = 0;
    *(undefined8 *)(local_res8 + 6) = 0;
    *(undefined8 *)(local_res8 + 8) = 0;
    *(undefined8 *)(local_res8 + 1) = 0xffffffffffffffff;
    local_res8[3] = 0;
    *(undefined8 *)(local_res8 + 0x11) = 0xffffffffffffffff;
    *(undefined8 *)(local_res8 + 0x13) = 0xffffffffffffffff;
    *(undefined8 *)(local_res8 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)(local_res8 + 0xe) = 0xffffffffffffffff;
    local_res8[0x10] = 0xffffffff;
    *local_res8 = *(undefined4 *)(*(longlong *)(lVar3 + 0x80) + 0x78);
    piVar2 = (int *)(*(longlong *)(lVar3 + 0x80) + 0x78);
    *piVar2 = *piVar2 + 1;
    local_res8[1] = 0xc;
    local_res8[2] = *(undefined4 *)(param_2 + 2);
    FUN_140050070(*(longlong *)(lVar3 + 0x80) + 0x60,&local_res8);
  }
  return;
}

