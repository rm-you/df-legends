// FUN_140bac650 @ 140bac650
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_140bac650(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_res8 [2];
  
  puVar4 = (undefined4 *)(param_1 + 0x180);
  lVar2 = 0x30;
  do {
    local_res8[0] = puVar4[-0x60];
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = puVar4[-0x30];
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = *puVar4;
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = puVar4[0x30];
    FUN_1405bb7c0(param_2,local_res8,4);
    puVar4 = puVar4 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  local_res8[0] = *(undefined4 *)(param_1 + 0x300);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x304);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x308);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x30c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x310);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x314);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x318);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x31c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 800);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x324);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x328);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x32c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x330);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x334);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0]._0_1_ = *(char *)(param_1 + 0x358) != '\0';
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(char *)(param_1 + 0x359) != '\0');
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0] = *(undefined4 *)(param_1 + 0x35c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0]._0_1_ = *(undefined1 *)(param_1 + 0x360);
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0]._0_1_ = *(undefined1 *)(param_1 + 0x361);
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0]._0_1_ = *(undefined1 *)(param_1 + 0x362);
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0]._0_1_ = *(undefined1 *)(param_1 + 0x363);
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0]._0_1_ = *(char *)(param_1 + 0x364) != '\0';
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(char *)(param_1 + 0x365) != '\0');
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0] = *(undefined4 *)(param_1 + 0x368);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x36c);
  FUN_1405bb7c0(param_2,local_res8,4);
  lVar2 = *(longlong *)(param_1 + 0x338);
  uVar3 = 0xffffffff;
  if (lVar2 == 0) {
    local_res8[0] = 0xffffffff;
    uVar1 = 0xffffffff;
  }
  else {
    local_res8[0] = *(undefined4 *)(lVar2 + 0x300);
    uVar1 = *(undefined4 *)(lVar2 + 0x304);
  }
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = uVar1;
  FUN_1405bb7c0(param_2,local_res8,4);
  lVar2 = *(longlong *)(param_1 + 0x340);
  if (lVar2 == 0) {
    local_res8[0] = 0xffffffff;
    uVar1 = 0xffffffff;
  }
  else {
    local_res8[0] = *(undefined4 *)(lVar2 + 0x300);
    uVar1 = *(undefined4 *)(lVar2 + 0x304);
  }
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = uVar1;
  FUN_1405bb7c0(param_2,local_res8,4);
  lVar2 = *(longlong *)(param_1 + 0x348);
  if (lVar2 == 0) {
    local_res8[0] = 0xffffffff;
    uVar1 = 0xffffffff;
  }
  else {
    local_res8[0] = *(undefined4 *)(lVar2 + 0x300);
    uVar1 = *(undefined4 *)(lVar2 + 0x304);
  }
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = uVar1;
  FUN_1405bb7c0(param_2,local_res8,4);
  lVar2 = *(longlong *)(param_1 + 0x350);
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)(lVar2 + 0x300);
    uVar1 = *(undefined4 *)(lVar2 + 0x304);
  }
  local_res8[0] = uVar3;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = uVar1;
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

