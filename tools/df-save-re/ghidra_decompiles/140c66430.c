// FUN_140c66430 @ 140c66430
// callees:
//   -> 14014a480 FUN_14014a480
//   -> 1408054d0 FUN_1408054d0
//   -> 140c76780 FUN_140c76780
//   -> 140c69920 FUN_140c69920
//   -> 140c662c0 FUN_140c662c0


void FUN_140c66430(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  short local_res8 [4];
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  
  if (*(longlong *)(param_1 + 0x4b8) == 0) {
    FUN_14014a480("Receive job pay: NULL JOB");
    return;
  }
  local_res8[0] = -30000;
  if ((*(uint *)(param_1 + 0x110) & 0x2000000) == 0) {
    local_res18[0] = *(undefined2 *)(param_1 + 0xaa);
    local_res8[0] = *(short *)(param_1 + 0xa8);
    local_res10[0] = *(undefined2 *)(param_1 + 0xac);
  }
  else {
    puVar8 = *(undefined8 **)(param_1 + 0x1c0);
    puVar3 = *(undefined8 **)(param_1 + 0x1c8);
    if (puVar3 <= puVar8) goto LAB_140c66518;
    do {
      iVar5 = (**(code **)(*(longlong *)*puVar8 + 0x10))();
      if ((iVar5 == 0xb) && (lVar6 = (**(code **)(*(longlong *)*puVar8 + 0x18))(), lVar6 != 0)) {
        FUN_1408054d0(lVar6,local_res8,local_res18,local_res10);
        break;
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 < puVar3);
  }
  if (local_res8[0] != -30000) {
    FUN_140c76780(param_1,local_res8[0],local_res18[0],local_res10[0]);
  }
LAB_140c66518:
  if ((DAT_141c347ac != '\0') && (cVar4 = FUN_140c69920(param_1), cVar4 == '\0')) {
    lVar6 = *(longlong *)(param_1 + 0x4b8);
    iVar5 = (&DAT_14155b310)[*(short *)(lVar6 + 0x14)];
    uVar2 = *(uint *)(lVar6 + 0x2c);
    cVar4 = (uVar2 >> 0xb & 1) != 0;
    if ((uVar2 >> 0xc & 1) != 0) {
      cVar4 = cVar4 + '\x02';
    }
    if ((uVar2 >> 0xd & 1) != 0) {
      cVar4 = cVar4 + '\x04';
    }
    *(uint *)(lVar6 + 0x2c) = uVar2 & 0xfffff7ff;
    iVar7 = 0x80;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x4b8) + 0x2c);
    *puVar1 = *puVar1 & 0xffffefff;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x4b8) + 0x2c);
    *puVar1 = *puVar1 & 0xffffdfff;
    if (cVar4 != '\0') {
      if (cVar4 == '\x01') {
        iVar7 = 0x9c;
      }
      else if (cVar4 == '\x02') {
        iVar7 = 0xc0;
      }
      else if (cVar4 == '\x03') {
        iVar7 = 0x100;
      }
      else if (cVar4 == '\x04') {
        iVar7 = 0x140;
      }
      else {
        iVar7 = 0x180;
      }
    }
    *(int *)(param_1 + 0x474) = *(int *)(param_1 + 0x474) + (iVar7 * iVar5 >> 7);
    FUN_140c662c0(param_1);
  }
  return;
}

