// FUN_140c139c0 @ 140c139c0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 1400511c0 FUN_1400511c0
//   -> 140051300 FUN_140051300


void FUN_140c139c0(longlong param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(longlong *)(param_1 + 0x3d0) == 0) {
    puVar2 = operator_new(0x60);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    *(undefined8 **)(param_1 + 0x3d0) = puVar2;
  }
  if (param_2 == 0) {
    puVar3 = (undefined4 *)FUN_1400511c0(param_3,*(undefined8 *)(param_1 + 0x3d0));
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = operator_new(0xc);
      *(undefined8 *)(puVar3 + 1) = 0;
      *puVar3 = param_3;
      FUN_140051300(puVar3,*(undefined8 *)(param_1 + 0x3d0));
    }
    puVar3[2] = puVar3[2] + param_4;
    iVar4 = puVar3[2];
    iVar5 = puVar3[1];
    if (iVar4 < (puVar3[1] + 5) * 100) {
      return;
    }
    do {
      iVar6 = iVar5 + 1;
      iVar1 = iVar5 + 6;
      iVar4 = iVar4 + (iVar5 + 5) * -100;
      iVar5 = iVar6;
    } while (iVar1 * 100 <= iVar4);
  }
  else if (param_2 == 1) {
    puVar3 = (undefined4 *)FUN_1400511c0(param_3,*(longlong *)(param_1 + 0x3d0) + 0x18);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = operator_new(0xc);
      *(undefined8 *)(puVar3 + 1) = 0;
      *puVar3 = param_3;
      FUN_140051300(puVar3,*(longlong *)(param_1 + 0x3d0) + 0x18);
    }
    puVar3[2] = puVar3[2] + param_4;
    iVar5 = puVar3[1];
    iVar4 = puVar3[2];
    if (iVar4 < (iVar5 + 5) * 100) {
      return;
    }
    do {
      iVar6 = iVar5 + 1;
      iVar1 = iVar5 + 6;
      iVar4 = iVar4 + (iVar5 + 5) * -100;
      iVar5 = iVar6;
    } while (iVar1 * 100 <= iVar4);
  }
  else if (param_2 == 2) {
    puVar3 = (undefined4 *)FUN_1400511c0(param_3,*(longlong *)(param_1 + 0x3d0) + 0x30);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = operator_new(0xc);
      *(undefined8 *)(puVar3 + 1) = 0;
      *puVar3 = param_3;
      FUN_140051300(puVar3,*(longlong *)(param_1 + 0x3d0) + 0x30);
    }
    puVar3[2] = puVar3[2] + param_4;
    iVar5 = puVar3[1];
    iVar4 = puVar3[2];
    if (iVar4 < (iVar5 + 5) * 100) {
      return;
    }
    do {
      iVar6 = iVar5 + 1;
      iVar1 = iVar5 + 6;
      iVar4 = iVar4 + (iVar5 + 5) * -100;
      iVar5 = iVar6;
    } while (iVar1 * 100 <= iVar4);
  }
  else {
    if (param_2 != 3) {
      return;
    }
    puVar3 = (undefined4 *)FUN_1400511c0(param_3,*(longlong *)(param_1 + 0x3d0) + 0x48);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = operator_new(0xc);
      *(undefined8 *)(puVar3 + 1) = 0;
      *puVar3 = param_3;
      FUN_140051300(puVar3,*(longlong *)(param_1 + 0x3d0) + 0x48);
    }
    puVar3[2] = puVar3[2] + param_4;
    iVar5 = puVar3[1];
    iVar4 = puVar3[2];
    if (iVar4 < (iVar5 + 5) * 100) {
      return;
    }
    do {
      iVar6 = iVar5 + 1;
      iVar1 = iVar5 + 6;
      iVar4 = iVar4 + (iVar5 + 5) * -100;
      iVar5 = iVar6;
    } while (iVar1 * 100 <= iVar4);
  }
  puVar3[1] = iVar6;
  puVar3[2] = iVar4;
  return;
}

